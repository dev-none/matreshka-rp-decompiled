package com.matreshkarp.core;

import android.content.Context;
import android.content.Intent;
import android.provider.Settings;
import com.tekartik.sqflite.Constant;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.protocol.SentryStackFrame;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SpillingKt;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: MainActivity.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
@DebugMetadata(c = "com.matreshkarp.core.MainActivity$onCreate$4$5$1", f = "MainActivity.kt", i = {0, 0, 0, 0}, l = {685}, m = "invokeSuspend", n = {"map", "project", "name", "testable"}, s = {"L$0", "L$1", "L$2", "Z$0"}, v = 1)
final class MainActivity$onCreate$4$5$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ MethodChannel.Result $result;
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    boolean Z$0;
    int label;
    final /* synthetic */ MainActivity this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    MainActivity$onCreate$4$5$1(MainActivity mainActivity, MethodChannel.Result result, Continuation<? super MainActivity$onCreate$4$5$1> continuation) {
        super(2, continuation);
        this.this$0 = mainActivity;
        this.$result = result;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new MainActivity$onCreate$4$5$1(this.this$0, this.$result, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((MainActivity$onCreate$4$5$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Code duplicated, block: B:25:0x00b7 A[PHI: r10
  0x00b7: PHI (r10v4 java.lang.String) = (r10v3 java.lang.String), (r10v3 java.lang.String), (r10v6 java.lang.String), (r10v7 java.lang.String) binds: [B:16:0x0092, B:18:0x009b, B:21:0x00a8, B:24:0x00b5] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) throws Throwable {
        String str;
        HashMap map;
        String str2;
        Map map2;
        Intent intent;
        Intent intent2;
        Intent intent3;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            HashMap map3 = new HashMap();
            String str3 = "matreshka";
            int intExtra = 0;
            String stringExtra = null;
            if (!StringsKt.startsWith$default(BuildConfig.FLAVOR, "matreshka", false, 2, (Object) null)) {
                str3 = "vibecity";
                if (!StringsKt.startsWith$default(BuildConfig.FLAVOR, "vibecity", false, 2, (Object) null)) {
                    str3 = "none";
                }
            }
            String strSubstring = BuildConfig.FLAVOR.substring(str3.length());
            Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
            String lowerCase = strSubstring.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            HashMap map4 = map3;
            String str4 = lowerCase;
            map4.put("name", new Regex("develop|update|tech|localbranch").replace(str4, ""));
            map4.put("project", str3);
            String str5 = "develop";
            if (!StringsKt.contains$default((CharSequence) str4, (CharSequence) "develop", false, 2, (Object) null) && !StringsKt.contains$default((CharSequence) str4, (CharSequence) "localbranch", false, 2, (Object) null)) {
                str5 = Constant.METHOD_UPDATE;
                if (!StringsKt.contains$default((CharSequence) str4, (CharSequence) Constant.METHOD_UPDATE, false, 2, (Object) null)) {
                    str5 = "tech";
                    str = StringsKt.contains$default((CharSequence) str4, (CharSequence) "tech", false, 2, (Object) null) ? str5 : "none";
                }
            }
            map4.put("branch", str);
            map4.put("local_dev_branch", Boxing.boxBoolean(StringsKt.contains$default((CharSequence) str4, (CharSequence) "localbranch", false, 2, (Object) null)));
            boolean zStartsWith$default = StringsKt.startsWith$default(lowerCase, "dev", false, 2, (Object) null);
            map4.put("single_player", Boxing.boxBoolean(zStartsWith$default && (intent3 = this.this$0.getIntent()) != null && intent3.getBooleanExtra("single_player", false)));
            if (zStartsWith$default && (intent2 = this.this$0.getIntent()) != null) {
                stringExtra = intent2.getStringExtra("autotest");
            }
            map4.put("autotest", stringExtra);
            if (zStartsWith$default && (intent = this.this$0.getIntent()) != null) {
                intExtra = intent.getIntExtra("bench_count", 0);
            }
            map4.put("bench_count", Boxing.boxInt(intExtra));
            map4.put("versionCode", Boxing.boxInt(BuildConfig.VERSION_CODE));
            map4.put("timezone", TimeZone.getDefault().getID());
            map4.put(SentryStackFrame.JsonKeys.PACKAGE, BuildConfig.APPLICATION_ID);
            map4.put("device_hash", Settings.Secure.getString(this.this$0.getContentResolver(), "android_id"));
            map4.put("gms_available", Boxing.boxBoolean(this.this$0.checkGooglePlayServices()));
            MainActivity mainActivity = this.this$0;
            Context applicationContext = mainActivity.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
            this.L$0 = map3;
            this.L$1 = SpillingKt.nullOutSpilledVariable(str3);
            this.L$2 = SpillingKt.nullOutSpilledVariable(lowerCase);
            this.L$3 = map4;
            this.L$4 = CommonUrlParts.HUAWEI_OAID;
            this.Z$0 = zStartsWith$default;
            this.label = 1;
            Object oaidSuspend = mainActivity.getOaidSuspend(applicationContext, this);
            if (oaidSuspend == coroutine_suspended) {
                return coroutine_suspended;
            }
            map = map3;
            obj = oaidSuspend;
            str2 = CommonUrlParts.HUAWEI_OAID;
            map2 = map4;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            str2 = (String) this.L$4;
            map2 = (Map) this.L$3;
            map = (HashMap) this.L$0;
            ResultKt.throwOnFailure(obj);
        }
        map2.put(str2, obj);
        map.put("sentry_dsn", this.this$0.getContext().getString(com.matreshkarp.game.R.string.sentry_dsn));
        this.$result.success(map);
        return Unit.INSTANCE;
    }
}
