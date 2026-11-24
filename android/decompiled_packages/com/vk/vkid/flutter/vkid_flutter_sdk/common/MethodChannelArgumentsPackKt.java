package com.vk.vkid.flutter.vkid_flutter_sdk.common;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import androidx.media3.extractor.ts.TsExtractor;
import com.vk.id.AccessToken;
import com.vk.id.auth.AuthCodeData;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MethodChannelArgumentsPack.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00006\n\u0000\n\u0002\u0010 \n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a(\u0010\u0000\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0018\u00010\u0001*\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005H\u0080\bø\u0001\u0000\u001a\u001c\u0010\u0000\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0001*\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0000\u001a\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\b\u001a\u00020\tH\u0003\u001a\u0014\u0010\f\u001a\u00020\r*\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\rH\u0002\u001a\u0010\u0010\u0010\u001a\u00020\r2\u0006\u0010\b\u001a\u00020\tH\u0002\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0011"}, d2 = {"pack", "", "", "Lcom/vk/id/AccessToken;", "onNoIdToken", "Lkotlin/Function0;", "", "Lcom/vk/id/auth/AuthCodeData;", "context", "Landroid/content/Context;", "getActivityInfo", "Landroid/content/pm/ActivityInfo;", "getStringOrThrow", "", "Landroid/os/Bundle;", "key", "getRedirectUri", "vkid_flutter_sdk_release"}, k = 2, mv = {2, 2, 0}, xi = 48)
public final class MethodChannelArgumentsPackKt {
    public static final List<Object> pack(AccessToken accessToken, Function0<Unit> onNoIdToken) {
        List listEmptyList;
        Intrinsics.checkNotNullParameter(accessToken, "<this>");
        Intrinsics.checkNotNullParameter(onNoIdToken, "onNoIdToken");
        String token = accessToken.getToken();
        String idToken = accessToken.getIdToken();
        if (idToken == null) {
            onNoIdToken.invoke();
            return null;
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
        return CollectionsKt.listOf("onAuth", token, idToken, lValueOf, lValueOf2, firstName, lastName, phone, str, email, listEmptyList);
    }

    public static final List<Object> pack(AuthCodeData authCodeData, Context context) {
        Intrinsics.checkNotNullParameter(authCodeData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        return CollectionsKt.listOf((Object[]) new String[]{"onAuthCode", authCodeData.getCode(), authCodeData.getDeviceId(), getRedirectUri(context)});
    }

    private static final ActivityInfo getActivityInfo(Context context) throws PackageManager.NameNotFoundException {
        ComponentName componentName = new ComponentName(context, Class.forName("com.vk.id.internal.auth.AuthActivity"));
        if (Build.VERSION.SDK_INT >= 33) {
            ActivityInfo activityInfo = context.getPackageManager().getActivityInfo(componentName, PackageManager.ComponentInfoFlags.of(TsExtractor.TS_STREAM_TYPE_AC3));
            Intrinsics.checkNotNull(activityInfo);
            return activityInfo;
        }
        ActivityInfo activityInfo2 = context.getPackageManager().getActivityInfo(componentName, TsExtractor.TS_STREAM_TYPE_AC3);
        Intrinsics.checkNotNull(activityInfo2);
        return activityInfo2;
    }

    private static final String getStringOrThrow(Bundle bundle, String str) {
        String string = bundle.getString(str);
        if (string != null) {
            return string;
        }
        throw new IllegalStateException(("No string for key: " + str).toString());
    }

    private static final String getRedirectUri(Context context) throws PackageManager.NameNotFoundException {
        ActivityInfo activityInfo = getActivityInfo(context);
        Bundle metaData = activityInfo.metaData;
        Intrinsics.checkNotNullExpressionValue(metaData, "metaData");
        String stringOrThrow = getStringOrThrow(metaData, "VKIDRedirectScheme");
        Bundle metaData2 = activityInfo.metaData;
        Intrinsics.checkNotNullExpressionValue(metaData2, "metaData");
        return stringOrThrow + "://" + getStringOrThrow(metaData2, "VKIDRedirectHost") + "/blank.html";
    }
}
