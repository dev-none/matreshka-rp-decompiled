package com.vk.vkid.flutter.vkid_flutter_sdk;

import android.content.Context;
import androidx.core.app.NotificationCompat;
import com.vk.id.AccessToken;
import com.vk.id.OAuth;
import com.vk.id.VKID;
import com.vk.id.VKIDAuthFail;
import com.vk.id.VKIDUser;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthCallback;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.logout.VKIDLogoutCallback;
import com.vk.id.logout.VKIDLogoutFail;
import com.vk.id.logout.VKIDLogoutParams;
import com.vk.id.refresh.VKIDRefreshTokenCallback;
import com.vk.id.refresh.VKIDRefreshTokenFail;
import com.vk.id.refresh.VKIDRefreshTokenParams;
import com.vk.id.refreshuser.VKIDGetUserCallback;
import com.vk.id.refreshuser.VKIDGetUserFail;
import com.vk.id.refreshuser.VKIDGetUserParams;
import com.vk.vkid.flutter.vkid_flutter_sdk.common.MethodChannelArgumentsPackKt;
import com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetViewFactory;
import com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapViewFactory;
import com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetViewFactory;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.platform.PlatformViewRegistry;
import java.util.List;
import java.util.Set;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: VkidFlutterSdkPlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\b\u0007\u0018\u00002\u00020\u00012\u00020\u0002B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016J\u0018\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0013\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\u0010\u0010\u0014\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\u0010\u0010\u0015\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\u0018\u0010\u0016\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\b\u0010\u0017\u001a\u00020\tH\u0002J\u0010\u0010\u0018\u001a\u00020\u000b2\u0006\u0010\u0019\u001a\u00020\rH\u0016R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/vk/vkid/flutter/vkid_flutter_sdk/VkidFlutterSdkPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "<init>", "()V", "channel", "Lio/flutter/plugin/common/MethodChannel;", "context", "Ljava/util/concurrent/atomic/AtomicReference;", "Landroid/content/Context;", "onAttachedToEngine", "", "flutterPluginBinding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onMethodCall", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "refreshToken", "fetchUser", "logout", "authorize", "requireContext", "onDetachedFromEngine", "binding", "vkid_flutter_sdk_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VkidFlutterSdkPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler {
    public static final int $stable = 8;
    private MethodChannel channel;
    private final AtomicReference<Context> context = new AtomicReference<>(null);

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        Intrinsics.checkNotNullParameter(flutterPluginBinding, "flutterPluginBinding");
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "com.vk.id/vkid");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        VKID.Companion companion = VKID.INSTANCE;
        Context applicationContext = flutterPluginBinding.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        companion.init(applicationContext, true, null, false, false, new GroupSubscriptionLimit(0, 0, 3, null));
        this.context.set(flutterPluginBinding.getApplicationContext());
        PlatformViewRegistry platformViewRegistry = flutterPluginBinding.getPlatformViewRegistry();
        BinaryMessenger binaryMessenger = flutterPluginBinding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        platformViewRegistry.registerViewFactory("OneTap", new OneTapViewFactory(binaryMessenger));
        PlatformViewRegistry platformViewRegistry2 = flutterPluginBinding.getPlatformViewRegistry();
        BinaryMessenger binaryMessenger2 = flutterPluginBinding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger2, "getBinaryMessenger(...)");
        platformViewRegistry2.registerViewFactory("OneTapBottomSheet", new OneTapBottomSheetViewFactory(binaryMessenger2));
        PlatformViewRegistry platformViewRegistry3 = flutterPluginBinding.getPlatformViewRegistry();
        BinaryMessenger binaryMessenger3 = flutterPluginBinding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger3, "getBinaryMessenger(...)");
        platformViewRegistry3.registerViewFactory("OAuthWidget", new OAuthWidgetViewFactory(binaryMessenger3));
    }

    /* JADX WARN: Code duplicated, block: B:45:0x00eb  */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        List listListOf;
        List listEmptyList;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (str != null) {
            switch (str.hashCode()) {
                case -2121849648:
                    if (str.equals("setLogsEnabled")) {
                        VKID.Companion companion = VKID.INSTANCE;
                        Object obj = call.arguments;
                        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Boolean");
                        companion.setLogsEnabled(((Boolean) obj).booleanValue());
                        result.success(null);
                        return;
                    }
                    break;
                case -1237354075:
                    if (str.equals("fetchUser")) {
                        fetchUser(result);
                        return;
                    }
                    break;
                case -1097329270:
                    if (str.equals("logout")) {
                        logout(result);
                        return;
                    }
                    break;
                case -609696245:
                    if (str.equals("currentAuthData")) {
                        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
                        if (accessToken != null) {
                            String token = accessToken.getToken();
                            String idToken = accessToken.getIdToken();
                            if (idToken == null) {
                                result.error("No id token", null, null);
                                return;
                            }
                            Long lValueOf = Long.valueOf(accessToken.getUserID());
                            Long lValueOf2 = Long.valueOf(accessToken.getExpireTime());
                            String firstName = accessToken.getUserData().getFirstName();
                            String lastName = accessToken.getUserData().getLastName();
                            String phone = accessToken.getUserData().getPhone();
                            String photo200 = accessToken.getUserData().getPhoto200();
                            if (photo200 == null && (photo200 = accessToken.getUserData().getPhoto100()) == null && (photo200 = accessToken.getUserData().getPhoto50()) == null) {
                                photo200 = "";
                            }
                            String str2 = photo200;
                            String email = accessToken.getUserData().getEmail();
                            Set<String> scopes = accessToken.getScopes();
                            if (scopes == null || (listEmptyList = CollectionsKt.toList(scopes)) == null) {
                                listEmptyList = CollectionsKt.emptyList();
                            }
                            listListOf = CollectionsKt.listOf("onAuth", token, idToken, lValueOf, lValueOf2, firstName, lastName, phone, str2, email, listEmptyList);
                            if (listListOf == null) {
                                listListOf = CollectionsKt.listOf((Object) null);
                            }
                        } else {
                            listListOf = CollectionsKt.listOf((Object) null);
                        }
                        result.success(listListOf);
                        return;
                    }
                    break;
                case -56506402:
                    if (str.equals("refreshToken")) {
                        refreshToken(result);
                        return;
                    }
                    break;
                case 1227725726:
                    if (str.equals("areLogsEnabled")) {
                        result.success(Boolean.valueOf(VKID.INSTANCE.getLogsEnabled()));
                        return;
                    }
                    break;
                case 1475610601:
                    if (str.equals("authorize")) {
                        authorize(call, result);
                        return;
                    }
                    break;
            }
        }
        result.notImplemented();
    }

    /* JADX INFO: renamed from: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$refreshToken$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VkidFlutterSdkPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$refreshToken$1", f = "VkidFlutterSdkPlugin.kt", i = {}, l = {101}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19711 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodChannel.Result $result;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19711(MethodChannel.Result result, Continuation<? super C19711> continuation) {
            super(2, continuation);
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19711(this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19711) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                VKID companion = VKID.INSTANCE.getInstance();
                final MethodChannel.Result result = this.$result;
                VKIDRefreshTokenCallback vKIDRefreshTokenCallback = new VKIDRefreshTokenCallback() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin.refreshToken.1.1
                    @Override // com.vk.id.refresh.VKIDRefreshTokenCallback
                    public void onSuccess(AccessToken token) {
                        Intrinsics.checkNotNullParameter(token, "token");
                        result.success(CollectionsKt.listOf(token.getToken()));
                    }

                    @Override // com.vk.id.refresh.VKIDRefreshTokenCallback
                    public void onFail(VKIDRefreshTokenFail fail) {
                        Intrinsics.checkNotNullParameter(fail, "fail");
                        result.error(fail instanceof VKIDRefreshTokenFail.RefreshTokenExpired ? "expired" : fail.getClass().getName(), fail.getDescription(), null);
                    }
                };
                VKIDRefreshTokenParams.Builder builder = new VKIDRefreshTokenParams.Builder();
                Unit unit = Unit.INSTANCE;
                this.label = 1;
                if (companion.refreshToken(vKIDRefreshTokenCallback, builder.build(), this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    private final void refreshToken(MethodChannel.Result result) {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C19711(result, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$fetchUser$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VkidFlutterSdkPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$fetchUser$1", f = "VkidFlutterSdkPlugin.kt", i = {}, l = {119}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19691 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodChannel.Result $result;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19691(MethodChannel.Result result, Continuation<? super C19691> continuation) {
            super(2, continuation);
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19691(this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19691) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                VKID companion = VKID.INSTANCE.getInstance();
                final MethodChannel.Result result = this.$result;
                VKIDGetUserCallback vKIDGetUserCallback = new VKIDGetUserCallback() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin.fetchUser.1.1
                    @Override // com.vk.id.refreshuser.VKIDGetUserCallback
                    public void onSuccess(VKIDUser user) {
                        Intrinsics.checkNotNullParameter(user, "user");
                        MethodChannel.Result result2 = result;
                        String firstName = user.getFirstName();
                        String lastName = user.getLastName();
                        String phone = user.getPhone();
                        String photo200 = user.getPhoto200();
                        if (photo200 == null && (photo200 = user.getPhoto100()) == null && (photo200 = user.getPhoto50()) == null) {
                            photo200 = "";
                        }
                        result2.success(CollectionsKt.listOf((Object[]) new String[]{firstName, lastName, phone, photo200, user.getEmail()}));
                    }

                    @Override // com.vk.id.refreshuser.VKIDGetUserCallback
                    public void onFail(VKIDGetUserFail fail) {
                        Intrinsics.checkNotNullParameter(fail, "fail");
                        result.error(fail instanceof VKIDGetUserFail.IdTokenTokenExpired ? "expired" : fail.getClass().getName(), fail.getDescription(), null);
                    }
                };
                VKIDGetUserParams.Builder builder = new VKIDGetUserParams.Builder();
                Unit unit = Unit.INSTANCE;
                this.label = 1;
                if (companion.getUserData(vKIDGetUserCallback, builder.build(), this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    private final void fetchUser(MethodChannel.Result result) {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C19691(result, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$logout$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VkidFlutterSdkPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$logout$1", f = "VkidFlutterSdkPlugin.kt", i = {}, l = {146}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19701 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodChannel.Result $result;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19701(MethodChannel.Result result, Continuation<? super C19701> continuation) {
            super(2, continuation);
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19701(this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19701) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                VKID companion = VKID.INSTANCE.getInstance();
                final MethodChannel.Result result = this.$result;
                VKIDLogoutCallback vKIDLogoutCallback = new VKIDLogoutCallback() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin.logout.1.1
                    @Override // com.vk.id.logout.VKIDLogoutCallback
                    public void onSuccess() {
                        result.success(CollectionsKt.emptyList());
                    }

                    @Override // com.vk.id.logout.VKIDLogoutCallback
                    public void onFail(VKIDLogoutFail fail) {
                        Intrinsics.checkNotNullParameter(fail, "fail");
                        result.error(fail instanceof VKIDLogoutFail.AccessTokenTokenExpired ? "expired" : fail.getClass().getName(), fail.getDescription(), null);
                    }
                };
                VKIDLogoutParams.Builder builder = new VKIDLogoutParams.Builder();
                Unit unit = Unit.INSTANCE;
                this.label = 1;
                if (companion.logout(vKIDLogoutCallback, builder.build(), this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    private final void logout(MethodChannel.Result result) {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C19701(result, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$authorize$1, reason: invalid class name */
    /* JADX INFO: compiled from: VkidFlutterSdkPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin$authorize$1", f = "VkidFlutterSdkPlugin.kt", i = {}, l = {166}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ List<Object> $arguments;
        final /* synthetic */ MethodChannel.Result $result;
        int label;
        final /* synthetic */ VkidFlutterSdkPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(MethodChannel.Result result, VkidFlutterSdkPlugin vkidFlutterSdkPlugin, List<? extends Object> list, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$result = result;
            this.this$0 = vkidFlutterSdkPlugin;
            this.$arguments = list;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(this.$result, this.this$0, this.$arguments, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            VKIDAuthParams.Locale locale;
            VKIDAuthParams.Theme theme;
            OAuth oAuth;
            Set<String> setEmptySet;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                VKID companion = VKID.INSTANCE.getInstance();
                final MethodChannel.Result result = this.$result;
                final VkidFlutterSdkPlugin vkidFlutterSdkPlugin = this.this$0;
                VKIDAuthCallback vKIDAuthCallback = new VKIDAuthCallback() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin.authorize.1.1
                    @Override // com.vk.id.auth.VKIDAuthCallback
                    public void onAuth(AccessToken accessToken) {
                        List listEmptyList;
                        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
                        MethodChannel.Result result2 = result;
                        String token = accessToken.getToken();
                        String idToken = accessToken.getIdToken();
                        if (idToken == null) {
                            result2.error("No id token", null, null);
                            return;
                        }
                        Long lValueOf = Long.valueOf(accessToken.getUserID());
                        Long lValueOf2 = Long.valueOf(accessToken.getExpireTime());
                        String firstName = accessToken.getUserData().getFirstName();
                        String lastName = accessToken.getUserData().getLastName();
                        String phone = accessToken.getUserData().getPhone();
                        String photo200 = accessToken.getUserData().getPhoto200();
                        if (photo200 == null && (photo200 = accessToken.getUserData().getPhoto100()) == null && (photo200 = accessToken.getUserData().getPhoto50()) == null) {
                            photo200 = "";
                        }
                        String str = photo200;
                        String email = accessToken.getUserData().getEmail();
                        Set<String> scopes = accessToken.getScopes();
                        if (scopes == null || (listEmptyList = CollectionsKt.toList(scopes)) == null) {
                            listEmptyList = CollectionsKt.emptyList();
                        }
                        result2.success(CollectionsKt.listOf("onAuth", token, idToken, lValueOf, lValueOf2, firstName, lastName, phone, str, email, listEmptyList));
                    }

                    @Override // com.vk.id.auth.VKIDAuthCallback
                    public void onAuthCode(AuthCodeData data, boolean isCompletion) {
                        Intrinsics.checkNotNullParameter(data, "data");
                        if (isCompletion) {
                            result.success(MethodChannelArgumentsPackKt.pack(data, vkidFlutterSdkPlugin.requireContext()));
                        }
                    }

                    @Override // com.vk.id.auth.VKIDAuthCallback
                    public void onFail(VKIDAuthFail fail) {
                        Intrinsics.checkNotNullParameter(fail, "fail");
                        result.error(fail instanceof VKIDAuthFail.Canceled ? "cancelled" : fail.getClass().getName(), fail.getDescription(), null);
                    }
                };
                List<Object> list = this.$arguments;
                MethodChannel.Result result2 = this.$result;
                VkidFlutterSdkPlugin vkidFlutterSdkPlugin2 = this.this$0;
                VKIDAuthParams.Builder builder = new VKIDAuthParams.Builder();
                Object obj2 = list.get(0);
                if (Intrinsics.areEqual(obj2, "ru")) {
                    locale = VKIDAuthParams.Locale.RUS;
                } else if (Intrinsics.areEqual(obj2, "uk")) {
                    locale = VKIDAuthParams.Locale.UKR;
                } else if (Intrinsics.areEqual(obj2, "en")) {
                    locale = VKIDAuthParams.Locale.ENG;
                } else if (Intrinsics.areEqual(obj2, "es")) {
                    locale = VKIDAuthParams.Locale.SPA;
                } else if (Intrinsics.areEqual(obj2, "de")) {
                    locale = VKIDAuthParams.Locale.GERMAN;
                } else if (Intrinsics.areEqual(obj2, "pl")) {
                    locale = VKIDAuthParams.Locale.POL;
                } else if (Intrinsics.areEqual(obj2, "fr")) {
                    locale = VKIDAuthParams.Locale.FRA;
                } else if (Intrinsics.areEqual(obj2, "tr")) {
                    locale = VKIDAuthParams.Locale.TURKEY;
                } else {
                    if (obj2 != null) {
                        result2.error("unsupported locale " + list.get(0), null, null);
                        return Unit.INSTANCE;
                    }
                    locale = null;
                }
                builder.setLocale(locale);
                Object obj3 = list.get(1);
                if (Intrinsics.areEqual(obj3, "light")) {
                    theme = VKIDAuthParams.Theme.Light;
                } else if (Intrinsics.areEqual(obj3, "dark")) {
                    theme = VKIDAuthParams.Theme.Dark;
                } else {
                    if (Intrinsics.areEqual(obj3, "system")) {
                        int i2 = vkidFlutterSdkPlugin2.requireContext().getResources().getConfiguration().uiMode & 48;
                        if (i2 == 16) {
                            theme = VKIDAuthParams.Theme.Light;
                        } else if (i2 == 32) {
                            theme = VKIDAuthParams.Theme.Dark;
                        }
                    } else if (obj3 != null) {
                        result2.error("unsupported theme " + list.get(1), null, null);
                        return Unit.INSTANCE;
                    }
                    theme = null;
                }
                builder.setTheme(theme);
                Object obj4 = list.get(2);
                Intrinsics.checkNotNull(obj4, "null cannot be cast to non-null type kotlin.Boolean");
                builder.setUseOAuthProviderIfPossible(((Boolean) obj4).booleanValue());
                Object obj5 = list.get(3);
                if (Intrinsics.areEqual(obj5, "vk")) {
                    oAuth = OAuth.VK;
                } else if (Intrinsics.areEqual(obj5, "mail")) {
                    oAuth = OAuth.MAIL;
                } else if (Intrinsics.areEqual(obj5, "ok")) {
                    oAuth = OAuth.OK;
                } else {
                    if (obj5 != null) {
                        result2.error("unsupported oauth: " + list.get(3), null, null);
                        return Unit.INSTANCE;
                    }
                    oAuth = null;
                }
                builder.setOAuth(oAuth);
                builder.setState((String) list.get(4));
                builder.setCodeChallenge((String) list.get(5));
                Object obj6 = list.get(6);
                List list2 = obj6 instanceof List ? (List) obj6 : null;
                if (list2 == null || (setEmptySet = CollectionsKt.toSet(list2)) == null) {
                    setEmptySet = SetsKt.emptySet();
                }
                builder.setScopes(setEmptySet);
                Unit unit = Unit.INSTANCE;
                this.label = 1;
                if (companion.authorize(vKIDAuthCallback, builder.build(), this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    private final void authorize(MethodCall call, MethodChannel.Result result) {
        Object obj = call.arguments;
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new AnonymousClass1(result, this, (List) obj, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Context requireContext() {
        Context context = this.context.get();
        if (context != null) {
            return context;
        }
        throw new IllegalStateException("onAttachedToEngine wasn't called".toString());
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodChannel methodChannel = this.channel;
        if (methodChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("channel");
            methodChannel = null;
        }
        methodChannel.setMethodCallHandler(null);
    }
}
