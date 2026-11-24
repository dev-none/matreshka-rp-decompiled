package io.flutter.plugins.inapppurchase;

import android.content.Context;
import com.android.billingclient.api.BillingClient;

/* JADX INFO: loaded from: classes7.dex */
interface BillingClientFactory {
    BillingClient createBillingClient(Context context, Messages.InAppPurchaseCallbackApi inAppPurchaseCallbackApi, Messages.PlatformBillingChoiceMode platformBillingChoiceMode, Messages.PlatformPendingPurchasesParams platformPendingPurchasesParams);
}
