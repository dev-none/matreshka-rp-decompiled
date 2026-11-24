package io.flutter.plugins.videoplayer;

import android.util.Log;
import androidx.compose.runtime.ComposerKt;
import androidx.media3.extractor.ts.TsExtractor;
import io.flutter.plugin.common.BasicMessageChannel;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MessageCodec;
import io.flutter.plugin.common.StandardMessageCodec;
import java.io.ByteArrayOutputStream;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Map;
import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public class Messages {

    @Target({ElementType.METHOD})
    @Retention(RetentionPolicy.CLASS)
    @interface CanIgnoreReturnValue {
    }

    public static class FlutterError extends RuntimeException {
        public final String code;
        public final Object details;

        public FlutterError(String str, String str2, Object obj) {
            super(str2);
            this.code = str;
            this.details = obj;
        }
    }

    protected static ArrayList<Object> wrapError(Throwable th) {
        ArrayList<Object> arrayList = new ArrayList<>(3);
        if (th instanceof FlutterError) {
            FlutterError flutterError = (FlutterError) th;
            arrayList.add(flutterError.code);
            arrayList.add(flutterError.getMessage());
            arrayList.add(flutterError.details);
            return arrayList;
        }
        arrayList.add(th.toString());
        arrayList.add(th.getClass().getSimpleName());
        arrayList.add("Cause: " + th.getCause() + ", Stacktrace: " + Log.getStackTraceString(th));
        return arrayList;
    }

    public enum PlatformVideoFormat {
        DASH(0),
        HLS(1),
        SS(2);

        final int index;

        PlatformVideoFormat(int i) {
            this.index = i;
        }
    }

    public static final class PlatformVideoViewCreationParams {
        private Long playerId;

        public Long getPlayerId() {
            return this.playerId;
        }

        public void setPlayerId(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"playerId\" is null.");
            }
            this.playerId = l;
        }

        PlatformVideoViewCreationParams() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || getClass() != obj.getClass()) {
                return false;
            }
            return this.playerId.equals(((PlatformVideoViewCreationParams) obj).playerId);
        }

        public int hashCode() {
            return Objects.hash(this.playerId);
        }

        public static final class Builder {
            private Long playerId;

            public Builder setPlayerId(Long l) {
                this.playerId = l;
                return this;
            }

            public PlatformVideoViewCreationParams build() {
                PlatformVideoViewCreationParams platformVideoViewCreationParams = new PlatformVideoViewCreationParams();
                platformVideoViewCreationParams.setPlayerId(this.playerId);
                return platformVideoViewCreationParams;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(1);
            arrayList.add(this.playerId);
            return arrayList;
        }

        static PlatformVideoViewCreationParams fromList(ArrayList<Object> arrayList) {
            PlatformVideoViewCreationParams platformVideoViewCreationParams = new PlatformVideoViewCreationParams();
            platformVideoViewCreationParams.setPlayerId((Long) arrayList.get(0));
            return platformVideoViewCreationParams;
        }
    }

    public static final class CreationOptions {
        private PlatformVideoFormat formatHint;
        private Map<String, String> httpHeaders;
        private String uri;
        private String userAgent;

        public String getUri() {
            return this.uri;
        }

        public void setUri(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"uri\" is null.");
            }
            this.uri = str;
        }

        public PlatformVideoFormat getFormatHint() {
            return this.formatHint;
        }

        public void setFormatHint(PlatformVideoFormat platformVideoFormat) {
            this.formatHint = platformVideoFormat;
        }

        public Map<String, String> getHttpHeaders() {
            return this.httpHeaders;
        }

        public void setHttpHeaders(Map<String, String> map) {
            if (map == null) {
                throw new IllegalStateException("Nonnull field \"httpHeaders\" is null.");
            }
            this.httpHeaders = map;
        }

        public String getUserAgent() {
            return this.userAgent;
        }

        public void setUserAgent(String str) {
            this.userAgent = str;
        }

        CreationOptions() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                CreationOptions creationOptions = (CreationOptions) obj;
                if (this.uri.equals(creationOptions.uri) && Objects.equals(this.formatHint, creationOptions.formatHint) && this.httpHeaders.equals(creationOptions.httpHeaders) && Objects.equals(this.userAgent, creationOptions.userAgent)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return Objects.hash(this.uri, this.formatHint, this.httpHeaders, this.userAgent);
        }

        public static final class Builder {
            private PlatformVideoFormat formatHint;
            private Map<String, String> httpHeaders;
            private String uri;
            private String userAgent;

            public Builder setUri(String str) {
                this.uri = str;
                return this;
            }

            public Builder setFormatHint(PlatformVideoFormat platformVideoFormat) {
                this.formatHint = platformVideoFormat;
                return this;
            }

            public Builder setHttpHeaders(Map<String, String> map) {
                this.httpHeaders = map;
                return this;
            }

            public Builder setUserAgent(String str) {
                this.userAgent = str;
                return this;
            }

            public CreationOptions build() {
                CreationOptions creationOptions = new CreationOptions();
                creationOptions.setUri(this.uri);
                creationOptions.setFormatHint(this.formatHint);
                creationOptions.setHttpHeaders(this.httpHeaders);
                creationOptions.setUserAgent(this.userAgent);
                return creationOptions;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.uri);
            arrayList.add(this.formatHint);
            arrayList.add(this.httpHeaders);
            arrayList.add(this.userAgent);
            return arrayList;
        }

        static CreationOptions fromList(ArrayList<Object> arrayList) {
            CreationOptions creationOptions = new CreationOptions();
            creationOptions.setUri((String) arrayList.get(0));
            creationOptions.setFormatHint((PlatformVideoFormat) arrayList.get(1));
            creationOptions.setHttpHeaders((Map) arrayList.get(2));
            creationOptions.setUserAgent((String) arrayList.get(3));
            return creationOptions;
        }
    }

    public static final class TexturePlayerIds {
        private Long playerId;
        private Long textureId;

        public Long getPlayerId() {
            return this.playerId;
        }

        public void setPlayerId(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"playerId\" is null.");
            }
            this.playerId = l;
        }

        public Long getTextureId() {
            return this.textureId;
        }

        public void setTextureId(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"textureId\" is null.");
            }
            this.textureId = l;
        }

        TexturePlayerIds() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                TexturePlayerIds texturePlayerIds = (TexturePlayerIds) obj;
                if (this.playerId.equals(texturePlayerIds.playerId) && this.textureId.equals(texturePlayerIds.textureId)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return Objects.hash(this.playerId, this.textureId);
        }

        public static final class Builder {
            private Long playerId;
            private Long textureId;

            public Builder setPlayerId(Long l) {
                this.playerId = l;
                return this;
            }

            public Builder setTextureId(Long l) {
                this.textureId = l;
                return this;
            }

            public TexturePlayerIds build() {
                TexturePlayerIds texturePlayerIds = new TexturePlayerIds();
                texturePlayerIds.setPlayerId(this.playerId);
                texturePlayerIds.setTextureId(this.textureId);
                return texturePlayerIds;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.playerId);
            arrayList.add(this.textureId);
            return arrayList;
        }

        static TexturePlayerIds fromList(ArrayList<Object> arrayList) {
            TexturePlayerIds texturePlayerIds = new TexturePlayerIds();
            texturePlayerIds.setPlayerId((Long) arrayList.get(0));
            texturePlayerIds.setTextureId((Long) arrayList.get(1));
            return texturePlayerIds;
        }
    }

    public static final class PlaybackState {
        private Long bufferPosition;
        private Long playPosition;

        public Long getPlayPosition() {
            return this.playPosition;
        }

        public void setPlayPosition(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"playPosition\" is null.");
            }
            this.playPosition = l;
        }

        public Long getBufferPosition() {
            return this.bufferPosition;
        }

        public void setBufferPosition(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"bufferPosition\" is null.");
            }
            this.bufferPosition = l;
        }

        PlaybackState() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                PlaybackState playbackState = (PlaybackState) obj;
                if (this.playPosition.equals(playbackState.playPosition) && this.bufferPosition.equals(playbackState.bufferPosition)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return Objects.hash(this.playPosition, this.bufferPosition);
        }

        public static final class Builder {
            private Long bufferPosition;
            private Long playPosition;

            public Builder setPlayPosition(Long l) {
                this.playPosition = l;
                return this;
            }

            public Builder setBufferPosition(Long l) {
                this.bufferPosition = l;
                return this;
            }

            public PlaybackState build() {
                PlaybackState playbackState = new PlaybackState();
                playbackState.setPlayPosition(this.playPosition);
                playbackState.setBufferPosition(this.bufferPosition);
                return playbackState;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.playPosition);
            arrayList.add(this.bufferPosition);
            return arrayList;
        }

        static PlaybackState fromList(ArrayList<Object> arrayList) {
            PlaybackState playbackState = new PlaybackState();
            playbackState.setPlayPosition((Long) arrayList.get(0));
            playbackState.setBufferPosition((Long) arrayList.get(1));
            return playbackState;
        }
    }

    private static class PigeonCodec extends StandardMessageCodec {
        public static final PigeonCodec INSTANCE = new PigeonCodec();

        private PigeonCodec() {
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected Object readValueOfType(byte b, ByteBuffer byteBuffer) {
            switch (b) {
                case ComposerKt.defaultsKey /* -127 */:
                    Object value = readValue(byteBuffer);
                    if (value == null) {
                        return null;
                    }
                    return PlatformVideoFormat.values()[((Long) value).intValue()];
                case -126:
                    return PlatformVideoViewCreationParams.fromList((ArrayList) readValue(byteBuffer));
                case -125:
                    return CreationOptions.fromList((ArrayList) readValue(byteBuffer));
                case -124:
                    return TexturePlayerIds.fromList((ArrayList) readValue(byteBuffer));
                case -123:
                    return PlaybackState.fromList((ArrayList) readValue(byteBuffer));
                default:
                    return super.readValueOfType(b, byteBuffer);
            }
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected void writeValue(ByteArrayOutputStream byteArrayOutputStream, Object obj) {
            if (obj instanceof PlatformVideoFormat) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_AC3);
                writeValue(byteArrayOutputStream, obj == null ? null : Integer.valueOf(((PlatformVideoFormat) obj).index));
                return;
            }
            if (obj instanceof PlatformVideoViewCreationParams) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
                writeValue(byteArrayOutputStream, ((PlatformVideoViewCreationParams) obj).toList());
                return;
            }
            if (obj instanceof CreationOptions) {
                byteArrayOutputStream.write(131);
                writeValue(byteArrayOutputStream, ((CreationOptions) obj).toList());
            } else if (obj instanceof TexturePlayerIds) {
                byteArrayOutputStream.write(132);
                writeValue(byteArrayOutputStream, ((TexturePlayerIds) obj).toList());
            } else if (obj instanceof PlaybackState) {
                byteArrayOutputStream.write(133);
                writeValue(byteArrayOutputStream, ((PlaybackState) obj).toList());
            } else {
                super.writeValue(byteArrayOutputStream, obj);
            }
        }
    }

    public interface AndroidVideoPlayerApi {
        Long createForPlatformView(CreationOptions creationOptions);

        TexturePlayerIds createForTextureView(CreationOptions creationOptions);

        void dispose(Long l);

        String getLookupKeyForAsset(String str, String str2);

        void initialize();

        void setMixWithOthers(Boolean bool);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, AndroidVideoPlayerApi androidVideoPlayerApi) {
            setUp(binaryMessenger, "", androidVideoPlayerApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final AndroidVideoPlayerApi androidVideoPlayerApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.AndroidVideoPlayerApi.initialize" + str2, getCodec());
            if (androidVideoPlayerApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$AndroidVideoPlayerApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.AndroidVideoPlayerApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.AndroidVideoPlayerApi.createForPlatformView" + str2, getCodec());
            if (androidVideoPlayerApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$AndroidVideoPlayerApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.AndroidVideoPlayerApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.AndroidVideoPlayerApi.createForTextureView" + str2, getCodec());
            if (androidVideoPlayerApi != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$AndroidVideoPlayerApi$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.AndroidVideoPlayerApi.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.AndroidVideoPlayerApi.dispose" + str2, getCodec());
            if (androidVideoPlayerApi != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$AndroidVideoPlayerApi$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.AndroidVideoPlayerApi.lambda$setUp$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.AndroidVideoPlayerApi.setMixWithOthers" + str2, getCodec());
            if (androidVideoPlayerApi != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$AndroidVideoPlayerApi$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.AndroidVideoPlayerApi.lambda$setUp$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.AndroidVideoPlayerApi.getLookupKeyForAsset" + str2, getCodec());
            if (androidVideoPlayerApi != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$AndroidVideoPlayerApi$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.AndroidVideoPlayerApi.lambda$setUp$5(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(AndroidVideoPlayerApi androidVideoPlayerApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                androidVideoPlayerApi.initialize();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$1(AndroidVideoPlayerApi androidVideoPlayerApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, androidVideoPlayerApi.createForPlatformView((CreationOptions) ((ArrayList) obj).get(0)));
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$2(AndroidVideoPlayerApi androidVideoPlayerApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, androidVideoPlayerApi.createForTextureView((CreationOptions) ((ArrayList) obj).get(0)));
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$3(AndroidVideoPlayerApi androidVideoPlayerApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                androidVideoPlayerApi.dispose((Long) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$4(AndroidVideoPlayerApi androidVideoPlayerApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                androidVideoPlayerApi.setMixWithOthers((Boolean) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$5(AndroidVideoPlayerApi androidVideoPlayerApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                arrayList.add(0, androidVideoPlayerApi.getLookupKeyForAsset((String) arrayList2.get(0), (String) arrayList2.get(1)));
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }

    public interface VideoPlayerInstanceApi {
        PlaybackState getPlaybackState();

        void pause();

        void play();

        void seekTo(Long l);

        void setLooping(Boolean bool);

        void setPlaybackSpeed(Double d);

        void setVolume(Double d);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, VideoPlayerInstanceApi videoPlayerInstanceApi) {
            setUp(binaryMessenger, "", videoPlayerInstanceApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final VideoPlayerInstanceApi videoPlayerInstanceApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.setLooping" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.setVolume" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.setPlaybackSpeed" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.play" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.pause" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.seekTo" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$5(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel7 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.video_player_android.VideoPlayerInstanceApi.getPlaybackState" + str2, getCodec());
            if (videoPlayerInstanceApi != null) {
                basicMessageChannel7.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.videoplayer.Messages$VideoPlayerInstanceApi$$ExternalSyntheticLambda6
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Messages.VideoPlayerInstanceApi.lambda$setUp$6(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel7.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                videoPlayerInstanceApi.setLooping((Boolean) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$1(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                videoPlayerInstanceApi.setVolume((Double) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$2(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                videoPlayerInstanceApi.setPlaybackSpeed((Double) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$3(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                videoPlayerInstanceApi.play();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$4(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                videoPlayerInstanceApi.pause();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$5(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                videoPlayerInstanceApi.seekTo((Long) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setUp$6(VideoPlayerInstanceApi videoPlayerInstanceApi, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, videoPlayerInstanceApi.getPlaybackState());
            } catch (Throwable th) {
                arrayList = Messages.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }
}
