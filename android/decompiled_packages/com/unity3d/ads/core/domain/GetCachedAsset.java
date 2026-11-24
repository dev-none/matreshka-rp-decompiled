package com.unity3d.ads.core.domain;

import android.content.Context;
import android.net.Uri;
import android.webkit.WebResourceResponse;
import androidx.webkit.ProxyConfig;
import com.google.common.net.HttpHeaders;
import com.unity3d.ads.core.data.model.CacheResult;
import com.unity3d.ads.core.data.repository.CacheRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.core.extensions.StringExtensionsKt;
import com.unity3d.services.UnityAdsConstants;
import io.sentry.rrweb.RRWebVideoEvent;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__BuildersKt;
import org.apache.commons.io.IOUtils;

/* JADX INFO: compiled from: GetCachedAsset.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010$\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \"2\u00020\u0001:\u0001\"B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ\b\u0010\u000e\u001a\u00020\u000fH\u0003J\u001d\u0010\u0010\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0011\u001a\u00020\u00122\b\b\u0002\u0010\u0013\u001a\u00020\u0014H\u0087\u0002J\u0012\u0010\u0015\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0011\u001a\u00020\u0012H\u0003J\u0012\u0010\u0016\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0011\u001a\u00020\u0012H\u0003J\u001a\u0010\u0017\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0003JH\u0010\u0018\u001a\u00020\u000f2\b\u0010\u0019\u001a\u0004\u0018\u00010\u00142\b\u0010\u001a\u001a\u0004\u0018\u00010\u00142\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u00142\u0012\u0010\u001e\u001a\u000e\u0012\u0004\u0012\u00020\u0014\u0012\u0004\u0012\u00020\u00140\u001f2\u0006\u0010 \u001a\u00020!H\u0003R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006#"}, d2 = {"Lcom/unity3d/ads/core/domain/GetCachedAsset;", "", "cacheRepository", "Lcom/unity3d/ads/core/data/repository/CacheRepository;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "context", "Landroid/content/Context;", "cacheWebViewAssets", "Lcom/unity3d/ads/core/domain/CacheWebViewAssets;", "getAssetFileName", "Lcom/unity3d/ads/core/domain/GetAssetFileName;", "<init>", "(Lcom/unity3d/ads/core/data/repository/CacheRepository;Lcom/unity3d/ads/core/data/repository/SessionRepository;Landroid/content/Context;Lcom/unity3d/ads/core/domain/CacheWebViewAssets;Lcom/unity3d/ads/core/domain/GetAssetFileName;)V", "getNotFoundResponse", "Landroid/webkit/WebResourceResponse;", "invoke", "uri", "Landroid/net/Uri;", "webviewType", "", "getLegacyCachedAsset", "getBundledAsset", "tryGetWebViewAsset", "buildWebResourceResponse", "mimeType", RRWebVideoEvent.JsonKeys.ENCODING, "statusCode", "", "reasonPhrase", "responseHeaders", "", "data", "Ljava/io/InputStream;", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class GetCachedAsset {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final CacheRepository cacheRepository;
    private final CacheWebViewAssets cacheWebViewAssets;
    private final Context context;
    private final GetAssetFileName getAssetFileName;
    private final SessionRepository sessionRepository;

    public GetCachedAsset(CacheRepository cacheRepository, SessionRepository sessionRepository, Context context, CacheWebViewAssets cacheWebViewAssets, GetAssetFileName getAssetFileName) {
        Intrinsics.checkNotNullParameter(cacheRepository, "cacheRepository");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(cacheWebViewAssets, "cacheWebViewAssets");
        Intrinsics.checkNotNullParameter(getAssetFileName, "getAssetFileName");
        this.cacheRepository = cacheRepository;
        this.sessionRepository = sessionRepository;
        this.context = context;
        this.cacheWebViewAssets = cacheWebViewAssets;
        this.getAssetFileName = getAssetFileName;
    }

    private final WebResourceResponse getNotFoundResponse() {
        return buildWebResourceResponse("text/html", "utf-8", 404, "Not Found", MapsKt.emptyMap(), new ByteArrayInputStream(new byte[0]));
    }

    public static /* synthetic */ WebResourceResponse invoke$default(GetCachedAsset getCachedAsset, Uri uri, String str, int i, Object obj) {
        if ((i & 2) != 0) {
            str = "";
        }
        return getCachedAsset.invoke(uri, str);
    }

    public final WebResourceResponse invoke(Uri uri, String webviewType) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(webviewType, "webviewType");
        boolean disableCustomScheme = this.sessionRepository.getFeatureFlags().getDisableCustomScheme();
        String host = uri.getHost();
        if (host != null) {
            int iHashCode = host.hashCode();
            if (iHashCode != -1921537799) {
                if (iHashCode == -1920242293 && host.equals(UnityAdsConstants.DefaultUrls.AD_CACHE_DOMAIN)) {
                    return disableCustomScheme ? tryGetWebViewAsset(uri, webviewType) : getLegacyCachedAsset(uri);
                }
            } else if (host.equals(UnityAdsConstants.DefaultUrls.AD_ASSET_DOMAIN)) {
                return getBundledAsset(uri);
            }
        }
        return tryGetWebViewAsset(uri, webviewType);
    }

    private final WebResourceResponse getLegacyCachedAsset(Uri uri) {
        Object objM9861constructorimpl;
        String string = uri.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        CacheResult cacheResult = (CacheResult) BuildersKt__BuildersKt.runBlocking$default(null, new GetCachedAsset$getLegacyCachedAsset$result$1(this, StringsKt.substringAfterLast$default(string, "/", (String) null, 2, (Object) null), null), 1, null);
        if (cacheResult instanceof CacheResult.Success) {
            File file = ((CacheResult.Success) cacheResult).getCachedFile().getFile();
            if (file == null) {
                return null;
            }
            try {
                Result.Companion companion = Result.INSTANCE;
                GetCachedAsset getCachedAsset = this;
                objM9861constructorimpl = Result.m9861constructorimpl(new FileInputStream(file));
            } catch (Throwable th) {
                Result.Companion companion2 = Result.INSTANCE;
                objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
            }
            if (Result.m9867isFailureimpl(objM9861constructorimpl)) {
                objM9861constructorimpl = null;
            }
            FileInputStream fileInputStream = (FileInputStream) objM9861constructorimpl;
            if (fileInputStream == null) {
                return null;
            }
            String absolutePath = file.getAbsolutePath();
            Intrinsics.checkNotNull(absolutePath);
            return new WebResourceResponse(StringExtensionsKt.guessMimeType(absolutePath), null, fileInputStream);
        }
        return getNotFoundResponse();
    }

    private final WebResourceResponse getBundledAsset(Uri uri) {
        String strSubstringAfter$default = StringsKt.substringAfter$default(String.valueOf(uri.getPath()), "/", (String) null, 2, (Object) null);
        try {
            InputStream inputStreamOpen = this.context.getAssets().open(strSubstringAfter$default);
            Intrinsics.checkNotNullExpressionValue(inputStreamOpen, "open(...)");
            return new WebResourceResponse(StringExtensionsKt.guessMimeType(strSubstringAfter$default), null, inputStreamOpen);
        } catch (Exception unused) {
            return getNotFoundResponse();
        }
    }

    private final WebResourceResponse tryGetWebViewAsset(Uri uri, String webviewType) {
        Object objM9861constructorimpl;
        File file;
        Object objM9861constructorimpl2;
        StringBuilder sb = new StringBuilder();
        sb.append(webviewType);
        sb.append(IOUtils.DIR_SEPARATOR_UNIX);
        String string = uri.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        sb.append(StringsKt.substringAfterLast$default(StringsKt.substringBefore$default(string, "?", (String) null, 2, (Object) null), "/", (String) null, 2, (Object) null));
        String string2 = sb.toString();
        File file2 = this.cacheWebViewAssets.getCached().get(string2);
        if (file2 != null) {
            try {
                Result.Companion companion = Result.INSTANCE;
                GetCachedAsset getCachedAsset = this;
                objM9861constructorimpl = Result.m9861constructorimpl(new FileInputStream(file2));
            } catch (Throwable th) {
                Result.Companion companion2 = Result.INSTANCE;
                objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
            }
            if (Result.m9867isFailureimpl(objM9861constructorimpl)) {
                objM9861constructorimpl = null;
            }
            FileInputStream fileInputStream = (FileInputStream) objM9861constructorimpl;
            if (fileInputStream == null) {
                return null;
            }
            return new WebResourceResponse(StringExtensionsKt.guessMimeType(string2), null, fileInputStream);
        }
        String string3 = uri.toString();
        Intrinsics.checkNotNullExpressionValue(string3, "toString(...)");
        CacheResult cacheResult = (CacheResult) BuildersKt__BuildersKt.runBlocking$default(null, new GetCachedAsset$tryGetWebViewAsset$result$1(this, this.getAssetFileName.invoke(string3), null), 1, null);
        if (!(cacheResult instanceof CacheResult.Success) || (file = ((CacheResult.Success) cacheResult).getCachedFile().getFile()) == null) {
            return null;
        }
        try {
            Result.Companion companion3 = Result.INSTANCE;
            GetCachedAsset getCachedAsset2 = this;
            objM9861constructorimpl2 = Result.m9861constructorimpl(new FileInputStream(file));
        } catch (Throwable th2) {
            Result.Companion companion4 = Result.INSTANCE;
            objM9861constructorimpl2 = Result.m9861constructorimpl(ResultKt.createFailure(th2));
        }
        if (Result.m9867isFailureimpl(objM9861constructorimpl2)) {
            objM9861constructorimpl2 = null;
        }
        FileInputStream fileInputStream2 = (FileInputStream) objM9861constructorimpl2;
        if (fileInputStream2 == null) {
            return null;
        }
        String absolutePath = file.getAbsolutePath();
        Intrinsics.checkNotNull(absolutePath);
        return buildWebResourceResponse(StringExtensionsKt.guessMimeType(absolutePath), null, 200, "OK", MapsKt.mapOf(TuplesKt.to(HttpHeaders.ACCESS_CONTROL_ALLOW_ORIGIN, ProxyConfig.MATCH_ALL_SCHEMES)), fileInputStream2);
    }

    private final WebResourceResponse buildWebResourceResponse(String mimeType, String encoding, int statusCode, String reasonPhrase, Map<String, String> responseHeaders, InputStream data) {
        return new WebResourceResponse(mimeType, encoding, statusCode, INSTANCE.reasonPhraseOrDefault$unity_ads_defaultRelease(reasonPhrase, statusCode), responseHeaders, data);
    }

    /* JADX INFO: compiled from: GetCachedAsset.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001d\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\bH\u0000¢\u0006\u0002\b\t¨\u0006\n"}, d2 = {"Lcom/unity3d/ads/core/domain/GetCachedAsset$Companion;", "", "<init>", "()V", "reasonPhraseOrDefault", "", "reasonPhrase", "statusCode", "", "reasonPhraseOrDefault$unity_ads_defaultRelease", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final String reasonPhraseOrDefault$unity_ads_defaultRelease(String reasonPhrase, int statusCode) {
            Intrinsics.checkNotNullParameter(reasonPhrase, "reasonPhrase");
            String str = reasonPhrase;
            if (StringsKt.isBlank(str)) {
                str = "Status " + statusCode;
            }
            return str;
        }
    }
}
