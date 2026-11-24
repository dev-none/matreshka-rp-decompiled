package io.flutter.plugins.videoplayer;

import android.content.Context;
import android.util.LongSparseArray;
import io.flutter.FlutterInjector;
import io.flutter.Log;
import io.flutter.embedding.engine.loader.FlutterLoader;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.EventChannel;
import io.flutter.plugin.platform.PlatformViewRegistry;
import io.flutter.plugins.videoplayer.platformview.PlatformVideoViewFactory;
import io.flutter.plugins.videoplayer.platformview.PlatformViewVideoPlayer;
import io.flutter.plugins.videoplayer.texture.TextureVideoPlayer;
import io.flutter.view.TextureRegistry;
import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public class VideoPlayerPlugin implements FlutterPlugin, Messages.AndroidVideoPlayerApi {
    private static final String TAG = "VideoPlayerPlugin";
    private FlutterState flutterState;
    private final LongSparseArray<VideoPlayer> videoPlayers = new LongSparseArray<>();
    private final VideoPlayerOptions sharedOptions = new VideoPlayerOptions();
    private long nextPlayerIdentifier = 1;

    /* JADX INFO: Access modifiers changed from: private */
    interface KeyForAssetAndPackageName {
        String get(String str, String str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    interface KeyForAssetFn {
        String get(String str);
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        FlutterInjector flutterInjectorInstance = FlutterInjector.instance();
        Context applicationContext = flutterPluginBinding.getApplicationContext();
        BinaryMessenger binaryMessenger = flutterPluginBinding.getBinaryMessenger();
        final FlutterLoader flutterLoader = flutterInjectorInstance.flutterLoader();
        Objects.requireNonNull(flutterLoader);
        KeyForAssetFn keyForAssetFn = new KeyForAssetFn() { // from class: io.flutter.plugins.videoplayer.VideoPlayerPlugin$$ExternalSyntheticLambda1
            @Override // io.flutter.plugins.videoplayer.VideoPlayerPlugin.KeyForAssetFn
            public final String get(String str) {
                return flutterLoader.getLookupKeyForAsset(str);
            }
        };
        final FlutterLoader flutterLoader2 = flutterInjectorInstance.flutterLoader();
        Objects.requireNonNull(flutterLoader2);
        FlutterState flutterState = new FlutterState(applicationContext, binaryMessenger, keyForAssetFn, new KeyForAssetAndPackageName() { // from class: io.flutter.plugins.videoplayer.VideoPlayerPlugin$$ExternalSyntheticLambda2
            @Override // io.flutter.plugins.videoplayer.VideoPlayerPlugin.KeyForAssetAndPackageName
            public final String get(String str, String str2) {
                return flutterLoader2.getLookupKeyForAsset(str, str2);
            }
        }, flutterPluginBinding.getTextureRegistry());
        this.flutterState = flutterState;
        flutterState.startListening(this, flutterPluginBinding.getBinaryMessenger());
        PlatformViewRegistry platformViewRegistry = flutterPluginBinding.getPlatformViewRegistry();
        final LongSparseArray<VideoPlayer> longSparseArray = this.videoPlayers;
        Objects.requireNonNull(longSparseArray);
        platformViewRegistry.registerViewFactory("plugins.flutter.dev/video_player_android", new PlatformVideoViewFactory(new PlatformVideoViewFactory.VideoPlayerProvider() { // from class: io.flutter.plugins.videoplayer.VideoPlayerPlugin$$ExternalSyntheticLambda3
            @Override // io.flutter.plugins.videoplayer.platformview.PlatformVideoViewFactory.VideoPlayerProvider
            public final VideoPlayer getVideoPlayer(Long l) {
                return (VideoPlayer) longSparseArray.get(l.longValue());
            }
        }));
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        if (this.flutterState == null) {
            Log.wtf(TAG, "Detached from the engine before registering to it.");
        }
        this.flutterState.stopListening(flutterPluginBinding.getBinaryMessenger());
        this.flutterState = null;
        onDestroy();
    }

    private void disposeAllPlayers() {
        for (int i = 0; i < this.videoPlayers.size(); i++) {
            this.videoPlayers.valueAt(i).dispose();
        }
        this.videoPlayers.clear();
    }

    public void onDestroy() {
        disposeAllPlayers();
    }

    @Override // io.flutter.plugins.videoplayer.Messages.AndroidVideoPlayerApi
    public void initialize() {
        disposeAllPlayers();
    }

    @Override // io.flutter.plugins.videoplayer.Messages.AndroidVideoPlayerApi
    public Long createForPlatformView(Messages.CreationOptions creationOptions) {
        VideoAsset videoAssetVideoAssetWithOptions = videoAssetWithOptions(creationOptions);
        long j = this.nextPlayerIdentifier;
        this.nextPlayerIdentifier = 1 + j;
        registerPlayerInstance(PlatformViewVideoPlayer.create(this.flutterState.applicationContext, VideoPlayerEventCallbacks.bindTo(createEventChannel(j)), videoAssetVideoAssetWithOptions, this.sharedOptions), j);
        return Long.valueOf(j);
    }

    @Override // io.flutter.plugins.videoplayer.Messages.AndroidVideoPlayerApi
    public Messages.TexturePlayerIds createForTextureView(Messages.CreationOptions creationOptions) {
        VideoAsset videoAssetVideoAssetWithOptions = videoAssetWithOptions(creationOptions);
        long j = this.nextPlayerIdentifier;
        this.nextPlayerIdentifier = 1 + j;
        TextureRegistry.SurfaceProducer surfaceProducerCreateSurfaceProducer = this.flutterState.textureRegistry.createSurfaceProducer();
        registerPlayerInstance(TextureVideoPlayer.create(this.flutterState.applicationContext, VideoPlayerEventCallbacks.bindTo(createEventChannel(j)), surfaceProducerCreateSurfaceProducer, videoAssetVideoAssetWithOptions, this.sharedOptions), j);
        return new Messages.TexturePlayerIds.Builder().setPlayerId(Long.valueOf(j)).setTextureId(Long.valueOf(surfaceProducerCreateSurfaceProducer.id())).build();
    }

    private VideoAsset videoAssetWithOptions(Messages.CreationOptions creationOptions) {
        String uri = creationOptions.getUri();
        if (uri.startsWith("asset:")) {
            return VideoAsset.fromAssetUrl(uri);
        }
        if (uri.startsWith("rtsp:")) {
            return VideoAsset.fromRtspUrl(uri);
        }
        VideoAsset.StreamingFormat streamingFormat = VideoAsset.StreamingFormat.UNKNOWN;
        Messages.PlatformVideoFormat formatHint = creationOptions.getFormatHint();
        if (formatHint != null) {
            int i = AnonymousClass1.$SwitchMap$io$flutter$plugins$videoplayer$Messages$PlatformVideoFormat[formatHint.ordinal()];
            if (i == 1) {
                streamingFormat = VideoAsset.StreamingFormat.SMOOTH;
            } else if (i == 2) {
                streamingFormat = VideoAsset.StreamingFormat.DYNAMIC_ADAPTIVE;
            } else if (i == 3) {
                streamingFormat = VideoAsset.StreamingFormat.HTTP_LIVE;
            }
        }
        return VideoAsset.fromRemoteUrl(uri, streamingFormat, creationOptions.getHttpHeaders(), creationOptions.getUserAgent());
    }

    /* JADX INFO: renamed from: io.flutter.plugins.videoplayer.VideoPlayerPlugin$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$io$flutter$plugins$videoplayer$Messages$PlatformVideoFormat;

        static {
            int[] iArr = new int[Messages.PlatformVideoFormat.values().length];
            $SwitchMap$io$flutter$plugins$videoplayer$Messages$PlatformVideoFormat = iArr;
            try {
                iArr[Messages.PlatformVideoFormat.SS.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$io$flutter$plugins$videoplayer$Messages$PlatformVideoFormat[Messages.PlatformVideoFormat.DASH.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$io$flutter$plugins$videoplayer$Messages$PlatformVideoFormat[Messages.PlatformVideoFormat.HLS.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    private void registerPlayerInstance(VideoPlayer videoPlayer, long j) {
        final BinaryMessenger binaryMessenger = this.flutterState.binaryMessenger;
        final String string = Long.toString(j);
        Messages.VideoPlayerInstanceApi.setUp(binaryMessenger, string, videoPlayer);
        videoPlayer.setDisposeHandler(new VideoPlayer.DisposeHandler() { // from class: io.flutter.plugins.videoplayer.VideoPlayerPlugin$$ExternalSyntheticLambda0
            @Override // io.flutter.plugins.videoplayer.VideoPlayer.DisposeHandler
            public final void onDispose() {
                Messages.VideoPlayerInstanceApi.setUp(binaryMessenger, string, null);
            }
        });
        this.videoPlayers.put(j, videoPlayer);
    }

    private EventChannel createEventChannel(long j) {
        return new EventChannel(this.flutterState.binaryMessenger, "flutter.io/videoPlayer/videoEvents" + j);
    }

    private VideoPlayer getPlayer(long j) {
        VideoPlayer videoPlayer = this.videoPlayers.get(j);
        if (videoPlayer != null) {
            return videoPlayer;
        }
        String str = "No player found with playerId <" + j + ">";
        if (this.videoPlayers.size() == 0) {
            str = str + " and no active players created by the plugin.";
        }
        throw new IllegalStateException(str);
    }

    @Override // io.flutter.plugins.videoplayer.Messages.AndroidVideoPlayerApi
    public void dispose(Long l) {
        getPlayer(l.longValue()).dispose();
        this.videoPlayers.remove(l.longValue());
    }

    @Override // io.flutter.plugins.videoplayer.Messages.AndroidVideoPlayerApi
    public void setMixWithOthers(Boolean bool) {
        this.sharedOptions.mixWithOthers = bool.booleanValue();
    }

    @Override // io.flutter.plugins.videoplayer.Messages.AndroidVideoPlayerApi
    public String getLookupKeyForAsset(String str, String str2) {
        if (str2 == null) {
            return this.flutterState.keyForAsset.get(str);
        }
        return this.flutterState.keyForAssetAndPackageName.get(str, str2);
    }

    private static final class FlutterState {
        final Context applicationContext;
        final BinaryMessenger binaryMessenger;
        final KeyForAssetFn keyForAsset;
        final KeyForAssetAndPackageName keyForAssetAndPackageName;
        final TextureRegistry textureRegistry;

        FlutterState(Context context, BinaryMessenger binaryMessenger, KeyForAssetFn keyForAssetFn, KeyForAssetAndPackageName keyForAssetAndPackageName, TextureRegistry textureRegistry) {
            this.applicationContext = context;
            this.binaryMessenger = binaryMessenger;
            this.keyForAsset = keyForAssetFn;
            this.keyForAssetAndPackageName = keyForAssetAndPackageName;
            this.textureRegistry = textureRegistry;
        }

        void startListening(VideoPlayerPlugin videoPlayerPlugin, BinaryMessenger binaryMessenger) {
            Messages.AndroidVideoPlayerApi.setUp(binaryMessenger, videoPlayerPlugin);
        }

        void stopListening(BinaryMessenger binaryMessenger) {
            Messages.AndroidVideoPlayerApi.setUp(binaryMessenger, null);
        }
    }
}
