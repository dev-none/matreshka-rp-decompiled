package com.vk.id.logout;

import com.vk.id.AccessToken;
import com.vk.id.VKIDInvalidTokenException;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.storage.InternalVKIDTokenStorage;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Message;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VKIDLoggerOut.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ6\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u00112\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00132\b\b\u0002\u0010\u0014\u001a\u00020\u00152\b\b\u0002\u0010\u0016\u001a\u00020\u0017H\u0086@¢\u0006\u0002\u0010\u0018R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lcom/vk/id/logout/VKIDLoggerOut;", "", "api", "Lcom/vk/id/internal/api/VKIDApiService;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "<init>", "(Lcom/vk/id/internal/api/VKIDApiService;Lcom/vk/id/storage/InternalVKIDTokenStorage;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;)V", "logout", "", "callback", "Lcom/vk/id/logout/VKIDLogoutCallback;", Constants.ACCESS_TOKEN, "", "clearTokenStorage", "", Message.JsonKeys.PARAMS, "Lcom/vk/id/logout/VKIDLogoutParams;", "(Lcom/vk/id/logout/VKIDLogoutCallback;Ljava/lang/String;ZLcom/vk/id/logout/VKIDLogoutParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDLoggerOut {
    public static final int $stable = 8;
    private final VKIDApiService api;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final ServiceCredentials serviceCredentials;
    private final InternalVKIDTokenStorage tokenStorage;

    /* JADX INFO: renamed from: com.vk.id.logout.VKIDLoggerOut$logout$1, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDLoggerOut.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.logout.VKIDLoggerOut", f = "VKIDLoggerOut.kt", i = {0, 0, 0, 1, 2, 2, 2, 3, 3, 3, 4}, l = {28, 32, 37, 45, 51}, m = "logout", n = {"this", "callback", "clearTokenStorage", "callback", "this", "callback", "clearTokenStorage", "this", "callback", "clearTokenStorage", "callback"}, s = {"L$0", "L$1", "Z$0", "L$0", "L$0", "L$1", "Z$0", "L$0", "L$1", "Z$0", "L$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        boolean Z$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDLoggerOut.this.logout(null, null, false, null, this);
        }
    }

    public VKIDLoggerOut(VKIDApiService api, InternalVKIDTokenStorage tokenStorage, InternalVKIDDeviceIdProvider deviceIdProvider, ServiceCredentials serviceCredentials, VKIDCoroutinesDispatchers dispatchers) {
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(tokenStorage, "tokenStorage");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        this.api = api;
        this.tokenStorage = tokenStorage;
        this.deviceIdProvider = deviceIdProvider;
        this.serviceCredentials = serviceCredentials;
        this.dispatchers = dispatchers;
    }

    /* JADX WARN: Code duplicated, block: B:43:0x0129  */
    /* JADX WARN: Code duplicated, block: B:45:0x012d A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:46:0x012f  */
    /* JADX WARN: Code duplicated, block: B:49:0x014f  */
    /* JADX WARN: Code duplicated, block: B:51:0x0151 A[PHI: r1 r4 r7 r8
  0x0151: PHI (r1v28 java.lang.Object) = (r1v25 java.lang.Object), (r1v29 java.lang.Object) binds: [B:45:0x012d, B:50:0x0150] A[DONT_GENERATE, DONT_INLINE]
  0x0151: PHI (r4v12 boolean) = (r4v7 boolean), (r4v13 boolean) binds: [B:45:0x012d, B:50:0x0150] A[DONT_GENERATE, DONT_INLINE]
  0x0151: PHI (r7v4 com.vk.id.logout.VKIDLogoutCallback) = (r7v2 com.vk.id.logout.VKIDLogoutCallback), (r7v5 com.vk.id.logout.VKIDLogoutCallback) binds: [B:45:0x012d, B:50:0x0150] A[DONT_GENERATE, DONT_INLINE]
  0x0151: PHI (r8v4 com.vk.id.logout.VKIDLoggerOut) = (r8v2 com.vk.id.logout.VKIDLoggerOut), (r8v5 com.vk.id.logout.VKIDLoggerOut) binds: [B:45:0x012d, B:50:0x0150] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:52:0x0155  */
    /* JADX WARN: Code duplicated, block: B:53:0x0171 A[PHI: r1 r4 r7 r8
  0x0171: PHI (r1v26 java.lang.Object) = (r1v25 java.lang.Object), (r1v25 java.lang.Object), (r1v28 java.lang.Object) binds: [B:42:0x0127, B:52:0x0155, B:51:0x0151] A[DONT_GENERATE, DONT_INLINE]
  0x0171: PHI (r4v8 boolean) = (r4v7 boolean), (r4v7 boolean), (r4v12 boolean) binds: [B:42:0x0127, B:52:0x0155, B:51:0x0151] A[DONT_GENERATE, DONT_INLINE]
  0x0171: PHI (r7v3 com.vk.id.logout.VKIDLogoutCallback) = 
  (r7v2 com.vk.id.logout.VKIDLogoutCallback)
  (r7v2 com.vk.id.logout.VKIDLogoutCallback)
  (r7v4 com.vk.id.logout.VKIDLogoutCallback)
 binds: [B:42:0x0127, B:52:0x0155, B:51:0x0151] A[DONT_GENERATE, DONT_INLINE]
  0x0171: PHI (r8v3 com.vk.id.logout.VKIDLoggerOut) = (r8v2 com.vk.id.logout.VKIDLoggerOut), (r8v2 com.vk.id.logout.VKIDLoggerOut), (r8v4 com.vk.id.logout.VKIDLoggerOut) binds: [B:42:0x0127, B:52:0x0155, B:51:0x0151] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:55:0x0177  */
    /* JADX WARN: Code duplicated, block: B:57:0x017c  */
    /* JADX WARN: Code duplicated, block: B:60:0x019a  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Instruction removed from duplicated block: B:52:0x0155, please report this as an issue */
    public final Object logout(VKIDLogoutCallback vKIDLogoutCallback, String str, boolean z, VKIDLogoutParams vKIDLogoutParams, Continuation<? super Unit> continuation) {
        AnonymousClass1 anonymousClass1;
        VKIDLogoutCallback vKIDLogoutCallback2;
        boolean z2;
        VKIDLoggerOut vKIDLoggerOut;
        VKIDLogoutCallback vKIDLogoutCallback3;
        boolean z3;
        VKIDLoggerOut vKIDLoggerOut2;
        VKIDLogoutCallback vKIDLogoutCallback4;
        Object value;
        Throwable thM9864exceptionOrNullimpl;
        CoroutineDispatcher io2;
        VKIDLoggerOut$logout$6$1 vKIDLoggerOut$logout$6$1;
        Object obj;
        CoroutineDispatcher io3;
        VKIDLoggerOut$logout$7$1 vKIDLoggerOut$logout$7$1;
        VKIDLogoutCallback vKIDLogoutCallback5;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object objWithContext = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithContext);
            CoroutineDispatcher io4 = this.dispatchers.getIo();
            AnonymousClass3 anonymousClass3 = new AnonymousClass3(str, this, null);
            anonymousClass1.L$0 = this;
            vKIDLogoutCallback2 = vKIDLogoutCallback;
            anonymousClass1.L$1 = vKIDLogoutCallback2;
            z2 = z;
            anonymousClass1.Z$0 = z2;
            anonymousClass1.label = 1;
            objWithContext = BuildersKt.withContext(io4, anonymousClass3, anonymousClass1);
            if (objWithContext != coroutine_suspended) {
                vKIDLoggerOut = this;
            }
            return coroutine_suspended;
        }
        if (i != 1) {
            if (i == 2) {
                vKIDLogoutCallback4 = (VKIDLogoutCallback) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objWithContext);
                vKIDLogoutCallback2 = vKIDLogoutCallback4;
                vKIDLogoutCallback2.onFail(new VKIDLogoutFail.NotAuthenticated("Not authorized, can't logout"));
                return Unit.INSTANCE;
            }
            if (i == 3) {
                z3 = anonymousClass1.Z$0;
                vKIDLogoutCallback3 = (VKIDLogoutCallback) anonymousClass1.L$1;
                vKIDLoggerOut2 = (VKIDLoggerOut) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objWithContext);
                value = ((Result) objWithContext).getValue();
                thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
                if (thM9864exceptionOrNullimpl == null) {
                    if (thM9864exceptionOrNullimpl instanceof VKIDInvalidTokenException) {
                        vKIDLogoutCallback3.onFail(new VKIDLogoutFail.FailedApiCall("Failed to logout due to " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                        if (Result.m9868isSuccessimpl(value)) {
                            if (z3) {
                                io3 = vKIDLoggerOut2.dispatchers.getIo();
                                vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                                anonymousClass1.L$0 = vKIDLogoutCallback3;
                                anonymousClass1.L$1 = value;
                                anonymousClass1.L$2 = null;
                                anonymousClass1.label = 5;
                                if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                                    vKIDLogoutCallback5 = vKIDLogoutCallback3;
                                }
                            }
                            vKIDLogoutCallback3.onSuccess();
                        }
                    } else if (z3) {
                        io2 = vKIDLoggerOut2.dispatchers.getIo();
                        vKIDLoggerOut$logout$6$1 = new VKIDLoggerOut$logout$6$1(vKIDLoggerOut2, null);
                        anonymousClass1.L$0 = vKIDLoggerOut2;
                        anonymousClass1.L$1 = vKIDLogoutCallback3;
                        anonymousClass1.L$2 = value;
                        anonymousClass1.Z$0 = z3;
                        anonymousClass1.label = 4;
                        if (BuildersKt.withContext(io2, vKIDLoggerOut$logout$6$1, anonymousClass1) != coroutine_suspended) {
                            obj = value;
                            value = obj;
                            vKIDLogoutCallback3.onSuccess();
                            if (Result.m9868isSuccessimpl(value)) {
                                if (z3) {
                                    io3 = vKIDLoggerOut2.dispatchers.getIo();
                                    vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                                    anonymousClass1.L$0 = vKIDLogoutCallback3;
                                    anonymousClass1.L$1 = value;
                                    anonymousClass1.L$2 = null;
                                    anonymousClass1.label = 5;
                                    if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                                        vKIDLogoutCallback5 = vKIDLogoutCallback3;
                                    }
                                }
                                vKIDLogoutCallback3.onSuccess();
                            }
                        }
                    } else {
                        vKIDLogoutCallback3.onSuccess();
                        if (Result.m9868isSuccessimpl(value)) {
                            if (z3) {
                                io3 = vKIDLoggerOut2.dispatchers.getIo();
                                vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                                anonymousClass1.L$0 = vKIDLogoutCallback3;
                                anonymousClass1.L$1 = value;
                                anonymousClass1.L$2 = null;
                                anonymousClass1.label = 5;
                                if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                                    vKIDLogoutCallback5 = vKIDLogoutCallback3;
                                }
                            }
                            vKIDLogoutCallback3.onSuccess();
                        }
                    }
                    return coroutine_suspended;
                }
                if (Result.m9868isSuccessimpl(value)) {
                    if (z3) {
                        io3 = vKIDLoggerOut2.dispatchers.getIo();
                        vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                        anonymousClass1.L$0 = vKIDLogoutCallback3;
                        anonymousClass1.L$1 = value;
                        anonymousClass1.L$2 = null;
                        anonymousClass1.label = 5;
                        if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                            vKIDLogoutCallback5 = vKIDLogoutCallback3;
                        }
                        return coroutine_suspended;
                    }
                    vKIDLogoutCallback3.onSuccess();
                }
                return Unit.INSTANCE;
            }
            if (i == 4) {
                z3 = anonymousClass1.Z$0;
                obj = anonymousClass1.L$2;
                vKIDLogoutCallback3 = (VKIDLogoutCallback) anonymousClass1.L$1;
                vKIDLoggerOut2 = (VKIDLoggerOut) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objWithContext);
                value = obj;
                vKIDLogoutCallback3.onSuccess();
                if (Result.m9868isSuccessimpl(value)) {
                    if (z3) {
                        io3 = vKIDLoggerOut2.dispatchers.getIo();
                        vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                        anonymousClass1.L$0 = vKIDLogoutCallback3;
                        anonymousClass1.L$1 = value;
                        anonymousClass1.L$2 = null;
                        anonymousClass1.label = 5;
                        if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                            vKIDLogoutCallback5 = vKIDLogoutCallback3;
                        }
                        return coroutine_suspended;
                    }
                    vKIDLogoutCallback3.onSuccess();
                }
                return Unit.INSTANCE;
            }
            if (i != 5) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            Object obj2 = anonymousClass1.L$1;
            vKIDLogoutCallback5 = (VKIDLogoutCallback) anonymousClass1.L$0;
            ResultKt.throwOnFailure(objWithContext);
            vKIDLogoutCallback3 = vKIDLogoutCallback5;
            vKIDLogoutCallback3.onSuccess();
            return Unit.INSTANCE;
        }
        boolean z4 = anonymousClass1.Z$0;
        VKIDLogoutCallback vKIDLogoutCallback6 = (VKIDLogoutCallback) anonymousClass1.L$1;
        VKIDLoggerOut vKIDLoggerOut3 = (VKIDLoggerOut) anonymousClass1.L$0;
        ResultKt.throwOnFailure(objWithContext);
        z2 = z4;
        vKIDLoggerOut = vKIDLoggerOut3;
        vKIDLogoutCallback2 = vKIDLogoutCallback6;
        Pair pair = (Pair) objWithContext;
        String str2 = (String) pair.component1();
        String str3 = (String) pair.component2();
        if (str2 == null) {
            if (z2) {
                CoroutineDispatcher io5 = vKIDLoggerOut.dispatchers.getIo();
                VKIDLoggerOut$logout$4$1 vKIDLoggerOut$logout$4$1 = new VKIDLoggerOut$logout$4$1(vKIDLoggerOut, null);
                anonymousClass1.L$0 = vKIDLogoutCallback2;
                anonymousClass1.L$1 = null;
                anonymousClass1.label = 2;
                if (BuildersKt.withContext(io5, vKIDLoggerOut$logout$4$1, anonymousClass1) != coroutine_suspended) {
                    vKIDLogoutCallback4 = vKIDLogoutCallback2;
                    vKIDLogoutCallback2 = vKIDLogoutCallback4;
                }
            }
            vKIDLogoutCallback2.onFail(new VKIDLogoutFail.NotAuthenticated("Not authorized, can't logout"));
            return Unit.INSTANCE;
        }
        String clientID = vKIDLoggerOut.serviceCredentials.getClientID();
        CoroutineDispatcher io6 = vKIDLoggerOut.dispatchers.getIo();
        AnonymousClass5 anonymousClass5 = vKIDLoggerOut.new AnonymousClass5(str2, clientID, str3, null);
        anonymousClass1.L$0 = vKIDLoggerOut;
        anonymousClass1.L$1 = vKIDLogoutCallback2;
        anonymousClass1.Z$0 = z2;
        anonymousClass1.label = 3;
        objWithContext = BuildersKt.withContext(io6, anonymousClass5, anonymousClass1);
        if (objWithContext != coroutine_suspended) {
            vKIDLogoutCallback3 = vKIDLogoutCallback2;
            z3 = z2;
            vKIDLoggerOut2 = vKIDLoggerOut;
            value = ((Result) objWithContext).getValue();
            thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
            if (thM9864exceptionOrNullimpl == null) {
                if (thM9864exceptionOrNullimpl instanceof VKIDInvalidTokenException) {
                    vKIDLogoutCallback3.onFail(new VKIDLogoutFail.FailedApiCall("Failed to logout due to " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                    if (Result.m9868isSuccessimpl(value)) {
                        if (z3) {
                            io3 = vKIDLoggerOut2.dispatchers.getIo();
                            vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                            anonymousClass1.L$0 = vKIDLogoutCallback3;
                            anonymousClass1.L$1 = value;
                            anonymousClass1.L$2 = null;
                            anonymousClass1.label = 5;
                            if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                                vKIDLogoutCallback5 = vKIDLogoutCallback3;
                                vKIDLogoutCallback3 = vKIDLogoutCallback5;
                            }
                        }
                        vKIDLogoutCallback3.onSuccess();
                    }
                } else if (z3) {
                    io2 = vKIDLoggerOut2.dispatchers.getIo();
                    vKIDLoggerOut$logout$6$1 = new VKIDLoggerOut$logout$6$1(vKIDLoggerOut2, null);
                    anonymousClass1.L$0 = vKIDLoggerOut2;
                    anonymousClass1.L$1 = vKIDLogoutCallback3;
                    anonymousClass1.L$2 = value;
                    anonymousClass1.Z$0 = z3;
                    anonymousClass1.label = 4;
                    if (BuildersKt.withContext(io2, vKIDLoggerOut$logout$6$1, anonymousClass1) != coroutine_suspended) {
                        obj = value;
                        value = obj;
                        vKIDLogoutCallback3.onSuccess();
                        if (Result.m9868isSuccessimpl(value)) {
                            if (z3) {
                                io3 = vKIDLoggerOut2.dispatchers.getIo();
                                vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                                anonymousClass1.L$0 = vKIDLogoutCallback3;
                                anonymousClass1.L$1 = value;
                                anonymousClass1.L$2 = null;
                                anonymousClass1.label = 5;
                                if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                                    vKIDLogoutCallback5 = vKIDLogoutCallback3;
                                    vKIDLogoutCallback3 = vKIDLogoutCallback5;
                                }
                            }
                            vKIDLogoutCallback3.onSuccess();
                        }
                    }
                } else {
                    vKIDLogoutCallback3.onSuccess();
                    if (Result.m9868isSuccessimpl(value)) {
                        if (z3) {
                            io3 = vKIDLoggerOut2.dispatchers.getIo();
                            vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                            anonymousClass1.L$0 = vKIDLogoutCallback3;
                            anonymousClass1.L$1 = value;
                            anonymousClass1.L$2 = null;
                            anonymousClass1.label = 5;
                            if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                                vKIDLogoutCallback5 = vKIDLogoutCallback3;
                                vKIDLogoutCallback3 = vKIDLogoutCallback5;
                            }
                        }
                        vKIDLogoutCallback3.onSuccess();
                    }
                }
            } else if (Result.m9868isSuccessimpl(value)) {
                if (z3) {
                    io3 = vKIDLoggerOut2.dispatchers.getIo();
                    vKIDLoggerOut$logout$7$1 = new VKIDLoggerOut$logout$7$1(vKIDLoggerOut2, null);
                    anonymousClass1.L$0 = vKIDLogoutCallback3;
                    anonymousClass1.L$1 = value;
                    anonymousClass1.L$2 = null;
                    anonymousClass1.label = 5;
                    if (BuildersKt.withContext(io3, vKIDLoggerOut$logout$7$1, anonymousClass1) != coroutine_suspended) {
                        vKIDLogoutCallback5 = vKIDLogoutCallback3;
                        vKIDLogoutCallback3 = vKIDLogoutCallback5;
                    }
                }
                vKIDLogoutCallback3.onSuccess();
            }
            return Unit.INSTANCE;
        }
        return coroutine_suspended;
    }

    /* JADX INFO: renamed from: com.vk.id.logout.VKIDLoggerOut$logout$3, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDLoggerOut.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Pair;", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.logout.VKIDLoggerOut$logout$3", f = "VKIDLoggerOut.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Pair<? extends String, ? extends String>>, Object> {
        final /* synthetic */ String $accessToken;
        int label;
        final /* synthetic */ VKIDLoggerOut this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass3(String str, VKIDLoggerOut vKIDLoggerOut, Continuation<? super AnonymousClass3> continuation) {
            super(2, continuation);
            this.$accessToken = str;
            this.this$0 = vKIDLoggerOut;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass3(this.$accessToken, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Pair<? extends String, ? extends String>> continuation) {
            return invoke2(coroutineScope, (Continuation<? super Pair<String, String>>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Pair<String, String>> continuation) {
            return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            String token = this.$accessToken;
            if (token == null) {
                AccessToken accessToken$vkid_release = this.this$0.tokenStorage.getAccessToken$vkid_release();
                token = accessToken$vkid_release != null ? accessToken$vkid_release.getToken() : null;
            }
            return TuplesKt.to(token, this.this$0.deviceIdProvider.getDeviceId$vkid_release());
        }
    }

    /* JADX INFO: renamed from: com.vk.id.logout.VKIDLoggerOut$logout$5, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDLoggerOut.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.logout.VKIDLoggerOut$logout$5", f = "VKIDLoggerOut.kt", i = {}, l = {42}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass5 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends Unit>>, Object> {
        final /* synthetic */ String $clientId;
        final /* synthetic */ String $deviceId;
        final /* synthetic */ String $token;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass5(String str, String str2, String str3, Continuation<? super AnonymousClass5> continuation) {
            super(2, continuation);
            this.$token = str;
            this.$clientId = str2;
            this.$deviceId = str3;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKIDLoggerOut.this.new AnonymousClass5(this.$token, this.$clientId, this.$deviceId, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends Unit>> continuation) {
            return invoke2(coroutineScope, (Continuation<? super Result<Unit>>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Result<Unit>> continuation) {
            return ((AnonymousClass5) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = VKIDLoggerOut.this.api.logout(this.$token, this.$clientId, this.$deviceId).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            return Result.m9860boximpl(objMo9311executeIoAF18A);
        }
    }

    public static /* synthetic */ Object logout$default(VKIDLoggerOut vKIDLoggerOut, VKIDLogoutCallback vKIDLogoutCallback, String str, boolean z, VKIDLogoutParams vKIDLogoutParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            str = null;
        }
        String str2 = str;
        if ((i & 4) != 0) {
            z = true;
        }
        boolean z2 = z;
        if ((i & 8) != 0) {
            vKIDLogoutParams = new VKIDLogoutParams.Builder().build();
        }
        return vKIDLoggerOut.logout(vKIDLogoutCallback, str2, z2, vKIDLogoutParams, continuation);
    }
}
