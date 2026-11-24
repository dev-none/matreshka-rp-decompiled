package com.adjust.sdk.oaid;

import android.content.Context;
import com.adjust.sdk.AdjustFactory;
import com.adjust.sdk.Constants;
import com.adjust.sdk.ILogger;
import com.adjust.sdk.scheduler.AsyncTaskExecutor;
import com.bun.miitmdid.core.MdidSdkHelper;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class AdjustOaid {
    static boolean isMsaSdkAvailable = false;
    static boolean isOaidToBeRead = false;

    public static void readOaid() {
        isOaidToBeRead = true;
    }

    public static void readOaid(Context context) {
        ILogger logger = AdjustFactory.getLogger();
        readOaid();
        try {
            System.loadLibrary("msaoaidsec");
            isMsaSdkAvailable = MdidSdkHelper.InitCert(context, Util.readCertFromAssetFile(context, logger));
        } catch (Throwable th) {
            isMsaSdkAvailable = false;
            logger.debug(Constants.LOGTAG, "Error during msa sdk initialization " + th.getMessage());
        }
    }

    public static void getOaid(final Context context, final OnOaidReadListener onOaidReadListener) {
        final ILogger logger = AdjustFactory.getLogger();
        if (onOaidReadListener == null) {
            logger.error("onOaidReadListener cannot be null", new Object[0]);
        } else if (context == null) {
            logger.error("context cannot be null", new Object[0]);
        } else {
            new AsyncTaskExecutor<Context, OaidResult>() { // from class: com.adjust.sdk.oaid.AdjustOaid.1
                /* JADX INFO: Access modifiers changed from: protected */
                @Override // com.adjust.sdk.scheduler.AsyncTaskExecutor
                public OaidResult doInBackground(Context[] contextArr) {
                    AdjustOaid.readOaid(context);
                    OaidResult oaidResult = new OaidResult();
                    Map<String, String> oaidParameters = Util.getOaidParameters(context, logger);
                    if (oaidParameters != null && oaidParameters.get(CommonUrlParts.HUAWEI_OAID) != null) {
                        oaidResult.oaid = oaidParameters.get(CommonUrlParts.HUAWEI_OAID);
                        return oaidResult;
                    }
                    oaidResult.error = "Failed to read OAID";
                    return oaidResult;
                }

                /* JADX INFO: Access modifiers changed from: protected */
                @Override // com.adjust.sdk.scheduler.AsyncTaskExecutor
                public void onPostExecute(OaidResult oaidResult) {
                    if (oaidResult.oaid != null) {
                        onOaidReadListener.onOaidRead(oaidResult.oaid);
                    } else {
                        onOaidReadListener.onFail(oaidResult.error);
                    }
                }
            }.execute(context);
        }
    }

    public static void doNotReadOaid() {
        isOaidToBeRead = false;
    }
}
