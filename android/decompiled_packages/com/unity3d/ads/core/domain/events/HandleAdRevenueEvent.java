package com.unity3d.ads.core.domain.events;

import com.unity3d.ads.core.data.repository.AdRevenueRepository;
import com.unity3d.ads.core.data.repository.DeviceInfoRepository;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HandleAdRevenueEvent.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ&\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011H\u0086B¢\u0006\u0002\u0010\u0012R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/unity3d/ads/core/domain/events/HandleAdRevenueEvent;", "", "adRevenueRepository", "Lcom/unity3d/ads/core/data/repository/AdRevenueRepository;", "deviceInfoRepository", "Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;", "getAdRevenueEventData", "Lcom/unity3d/ads/core/domain/events/GetAdRevenueEventData;", "<init>", "(Lcom/unity3d/ads/core/data/repository/AdRevenueRepository;Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;Lcom/unity3d/ads/core/domain/events/GetAdRevenueEventData;)V", "invoke", "", "data", "Lcom/unity3d/ads/core/data/model/AdRevenueData;", "mediationProvider", "Lgatewayprotocol/v1/ClientInfoOuterClass$MediationProvider;", "origin", "Lcom/unity3d/ads/core/data/model/AdRevenueOrigin;", "(Lcom/unity3d/ads/core/data/model/AdRevenueData;Lgatewayprotocol/v1/ClientInfoOuterClass$MediationProvider;Lcom/unity3d/ads/core/data/model/AdRevenueOrigin;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class HandleAdRevenueEvent {
    private final AdRevenueRepository adRevenueRepository;
    private final DeviceInfoRepository deviceInfoRepository;
    private final GetAdRevenueEventData getAdRevenueEventData;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.events.HandleAdRevenueEvent$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: HandleAdRevenueEvent.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.events.HandleAdRevenueEvent", f = "HandleAdRevenueEvent.kt", i = {0, 0, 0, 0}, l = {26, 32}, m = "invoke", n = {"data", "mediationProvider", "origin", "$this$invoke_u24lambda_u240"}, s = {"L$0", "L$1", "L$2", "L$4"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return HandleAdRevenueEvent.this.invoke(null, null, null, this);
        }
    }

    public HandleAdRevenueEvent(AdRevenueRepository adRevenueRepository, DeviceInfoRepository deviceInfoRepository, GetAdRevenueEventData getAdRevenueEventData) {
        Intrinsics.checkNotNullParameter(adRevenueRepository, "adRevenueRepository");
        Intrinsics.checkNotNullParameter(deviceInfoRepository, "deviceInfoRepository");
        Intrinsics.checkNotNullParameter(getAdRevenueEventData, "getAdRevenueEventData");
        this.adRevenueRepository = adRevenueRepository;
        this.deviceInfoRepository = deviceInfoRepository;
        this.getAdRevenueEventData = getAdRevenueEventData;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00c1, code lost:
    
        if (r10.emit(r9, r0) == r1) goto L22;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object invoke(com.unity3d.ads.core.data.model.AdRevenueData r9, gatewayprotocol.v1.ClientInfoOuterClass.MediationProvider r10, com.unity3d.ads.core.data.model.AdRevenueOrigin r11, kotlin.coroutines.Continuation<? super kotlin.Unit> r12) {
        /*
            r8 = this;
            boolean r0 = r12 instanceof com.unity3d.ads.core.domain.events.HandleAdRevenueEvent.AnonymousClass1
            if (r0 == 0) goto L14
            r0 = r12
            com.unity3d.ads.core.domain.events.HandleAdRevenueEvent$invoke$1 r0 = (com.unity3d.ads.core.domain.events.HandleAdRevenueEvent.AnonymousClass1) r0
            int r1 = r0.label
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 & r2
            if (r1 == 0) goto L14
            int r12 = r0.label
            int r12 = r12 - r2
            r0.label = r12
            goto L19
        L14:
            com.unity3d.ads.core.domain.events.HandleAdRevenueEvent$invoke$1 r0 = new com.unity3d.ads.core.domain.events.HandleAdRevenueEvent$invoke$1
            r0.<init>(r12)
        L19:
            java.lang.Object r12 = r0.result
            java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r2 = r0.label
            r3 = 2
            r4 = 1
            if (r2 == 0) goto L56
            if (r2 == r4) goto L36
            if (r2 != r3) goto L2e
            kotlin.ResultKt.throwOnFailure(r12)
            goto Lc4
        L2e:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "call to 'resume' before 'invoke' with coroutine"
            r9.<init>(r10)
            throw r9
        L36:
            java.lang.Object r9 = r0.L$5
            gatewayprotocol.v1.AdRevenueEventRequestKt$Dsl r9 = (gatewayprotocol.v1.AdRevenueEventRequestKt.Dsl) r9
            java.lang.Object r10 = r0.L$4
            gatewayprotocol.v1.AdRevenueEventRequestKt$Dsl r10 = (gatewayprotocol.v1.AdRevenueEventRequestKt.Dsl) r10
            java.lang.Object r11 = r0.L$3
            gatewayprotocol.v1.AdRevenueEventRequestKt$Dsl r11 = (gatewayprotocol.v1.AdRevenueEventRequestKt.Dsl) r11
            java.lang.Object r2 = r0.L$2
            com.unity3d.ads.core.data.model.AdRevenueOrigin r2 = (com.unity3d.ads.core.data.model.AdRevenueOrigin) r2
            java.lang.Object r5 = r0.L$1
            gatewayprotocol.v1.ClientInfoOuterClass$MediationProvider r5 = (gatewayprotocol.v1.ClientInfoOuterClass.MediationProvider) r5
            java.lang.Object r6 = r0.L$0
            com.unity3d.ads.core.data.model.AdRevenueData r6 = (com.unity3d.ads.core.data.model.AdRevenueData) r6
            kotlin.ResultKt.throwOnFailure(r12)
            r7 = r12
            r12 = r11
            r11 = r2
            r2 = r7
            goto L83
        L56:
            kotlin.ResultKt.throwOnFailure(r12)
            gatewayprotocol.v1.AdRevenueEventRequestKt$Dsl$Companion r12 = gatewayprotocol.v1.AdRevenueEventRequestKt.Dsl.INSTANCE
            gatewayprotocol.v1.AdRevenueEventRequestOuterClass$AdRevenueEventRequest$Builder r2 = gatewayprotocol.v1.AdRevenueEventRequestOuterClass.AdRevenueEventRequest.newBuilder()
            java.lang.String r5 = "newBuilder(...)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r5)
            gatewayprotocol.v1.AdRevenueEventRequestKt$Dsl r12 = r12._create(r2)
            com.unity3d.ads.core.data.repository.DeviceInfoRepository r2 = r8.deviceInfoRepository
            r0.L$0 = r9
            r0.L$1 = r10
            r0.L$2 = r11
            r0.L$3 = r12
            r0.L$4 = r12
            r0.L$5 = r12
            r0.label = r4
            java.lang.Object r2 = r2.staticDeviceInfo(r0)
            if (r2 != r1) goto L7f
            goto Lc3
        L7f:
            r6 = r9
            r5 = r10
            r9 = r12
            r10 = r9
        L83:
            gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo r2 = (gatewayprotocol.v1.StaticDeviceInfoOuterClass.StaticDeviceInfo) r2
            r9.setStaticDeviceInfo(r2)
            com.unity3d.ads.core.data.repository.DeviceInfoRepository r9 = r8.deviceInfoRepository
            gatewayprotocol.v1.DynamicDeviceInfoOuterClass$DynamicDeviceInfo r9 = r9.getDynamicDeviceInfo(r4)
            r10.setDynamicDeviceInfo(r9)
            r10.setMediationProvider(r5)
            gatewayprotocol.v1.AdRevenueEventRequestOuterClass$AdRevenueOrigin r9 = com.unity3d.ads.core.domain.events.HandleAdRevenueEventKt.access$toProto(r11)
            r10.setAdRevenueOrigin(r9)
            com.unity3d.ads.core.domain.events.GetAdRevenueEventData r9 = r8.getAdRevenueEventData
            gatewayprotocol.v1.AdRevenueEventRequestOuterClass$AdRevenueData r9 = r9.invoke(r6)
            r10.setAdRevenueData(r9)
            gatewayprotocol.v1.AdRevenueEventRequestOuterClass$AdRevenueEventRequest r9 = r12._build()
            com.unity3d.ads.core.data.repository.AdRevenueRepository r10 = r8.adRevenueRepository
            kotlinx.coroutines.flow.MutableSharedFlow r10 = r10.getAdRevenueEvents()
            r11 = 0
            r0.L$0 = r11
            r0.L$1 = r11
            r0.L$2 = r11
            r0.L$3 = r11
            r0.L$4 = r11
            r0.L$5 = r11
            r0.label = r3
            java.lang.Object r9 = r10.emit(r9, r0)
            if (r9 != r1) goto Lc4
        Lc3:
            return r1
        Lc4:
            kotlin.Unit r9 = kotlin.Unit.INSTANCE
            return r9
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.core.domain.events.HandleAdRevenueEvent.invoke(com.unity3d.ads.core.data.model.AdRevenueData, gatewayprotocol.v1.ClientInfoOuterClass$MediationProvider, com.unity3d.ads.core.data.model.AdRevenueOrigin, kotlin.coroutines.Continuation):java.lang.Object");
    }
}
