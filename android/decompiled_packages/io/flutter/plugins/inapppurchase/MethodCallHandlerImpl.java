package io.flutter.plugins.inapppurchase;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import com.android.billingclient.api.AcknowledgePurchaseParams;
import com.android.billingclient.api.AcknowledgePurchaseResponseListener;
import com.android.billingclient.api.AlternativeBillingOnlyAvailabilityListener;
import com.android.billingclient.api.AlternativeBillingOnlyInformationDialogListener;
import com.android.billingclient.api.AlternativeBillingOnlyReportingDetails;
import com.android.billingclient.api.AlternativeBillingOnlyReportingDetailsListener;
import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingClientStateListener;
import com.android.billingclient.api.BillingConfig;
import com.android.billingclient.api.BillingConfigResponseListener;
import com.android.billingclient.api.BillingFlowParams;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ConsumeParams;
import com.android.billingclient.api.ConsumeResponseListener;
import com.android.billingclient.api.GetBillingConfigParams;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.ProductDetailsResponseListener;
import com.android.billingclient.api.PurchasesResponseListener;
import com.android.billingclient.api.QueryProductDetailsParams;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.android.billingclient.api.QueryPurchasesParams;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
class MethodCallHandlerImpl implements Application.ActivityLifecycleCallbacks, Messages.InAppPurchaseApi {
    static final String ACTIVITY_UNAVAILABLE = "ACTIVITY_UNAVAILABLE";
    private static final String LOAD_PRODUCT_DOC_URL = "https://github.com/flutter/packages/blob/main/packages/in_app_purchase/in_app_purchase/README.md#loading-products-for-sale";
    static final Messages.PlatformReplacementMode REPLACEMENT_MODE_UNKNOWN_SUBSCRIPTION_UPGRADE_DOWNGRADE_POLICY = Messages.PlatformReplacementMode.UNKNOWN_REPLACEMENT_MODE;
    private static final String TAG = "InAppPurchasePlugin";
    private Activity activity;
    private final Context applicationContext;
    private BillingClient billingClient;
    private final BillingClientFactory billingClientFactory;
    private final HashMap<String, ProductDetails> cachedProducts = new HashMap<>();
    final Messages.InAppPurchaseCallbackApi callbackApi;

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
    }

    MethodCallHandlerImpl(Activity activity, Context context, Messages.InAppPurchaseCallbackApi inAppPurchaseCallbackApi, BillingClientFactory billingClientFactory) {
        this.billingClientFactory = billingClientFactory;
        this.applicationContext = context;
        this.activity = activity;
        this.callbackApi = inAppPurchaseCallbackApi;
    }

    void setActivity(Activity activity) {
        this.activity = activity;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
        Context context;
        if (this.activity != activity || (context = this.applicationContext) == null) {
            return;
        }
        ((Application) context).unregisterActivityLifecycleCallbacks(this);
        endBillingClientConnection();
    }

    void onDetachedFromActivity() {
        endBillingClientConnection();
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void showAlternativeBillingOnlyInformationDialog(final Messages.Result<Messages.PlatformBillingResult> result) {
        BillingClient billingClient = this.billingClient;
        if (billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        Activity activity = this.activity;
        if (activity == null) {
            result.error(new Messages.FlutterError(ACTIVITY_UNAVAILABLE, "Not attempting to show dialog", null));
            return;
        }
        try {
            billingClient.showAlternativeBillingOnlyInformationDialog(activity, new AlternativeBillingOnlyInformationDialogListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda5
                @Override // com.android.billingclient.api.AlternativeBillingOnlyInformationDialogListener
                public final void onAlternativeBillingOnlyInformationDialogResponse(BillingResult billingResult) {
                    result.success(Translator.fromBillingResult(billingResult));
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void createAlternativeBillingOnlyReportingDetailsAsync(final Messages.Result<Messages.PlatformAlternativeBillingOnlyReportingDetailsResponse> result) {
        BillingClient billingClient = this.billingClient;
        if (billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            billingClient.createAlternativeBillingOnlyReportingDetailsAsync(new AlternativeBillingOnlyReportingDetailsListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda1
                @Override // com.android.billingclient.api.AlternativeBillingOnlyReportingDetailsListener
                public final void onAlternativeBillingOnlyTokenResponse(BillingResult billingResult, AlternativeBillingOnlyReportingDetails alternativeBillingOnlyReportingDetails) {
                    result.success(Translator.fromAlternativeBillingOnlyReportingDetails(billingResult, alternativeBillingOnlyReportingDetails));
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void isAlternativeBillingOnlyAvailableAsync(final Messages.Result<Messages.PlatformBillingResult> result) {
        BillingClient billingClient = this.billingClient;
        if (billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            billingClient.isAlternativeBillingOnlyAvailableAsync(new AlternativeBillingOnlyAvailabilityListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda4
                @Override // com.android.billingclient.api.AlternativeBillingOnlyAvailabilityListener
                public final void onAlternativeBillingOnlyAvailabilityResponse(BillingResult billingResult) {
                    result.success(Translator.fromBillingResult(billingResult));
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void getBillingConfigAsync(final Messages.Result<Messages.PlatformBillingConfigResponse> result) {
        BillingClient billingClient = this.billingClient;
        if (billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            billingClient.getBillingConfigAsync(GetBillingConfigParams.newBuilder().build(), new BillingConfigResponseListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda6
                @Override // com.android.billingclient.api.BillingConfigResponseListener
                public final void onBillingConfigResponse(BillingResult billingResult, BillingConfig billingConfig) {
                    result.success(Translator.fromBillingConfig(billingResult, billingConfig));
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void endConnection() {
        endBillingClientConnection();
    }

    private void endBillingClientConnection() {
        BillingClient billingClient = this.billingClient;
        if (billingClient != null) {
            billingClient.endConnection();
            this.billingClient = null;
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public Boolean isReady() {
        BillingClient billingClient = this.billingClient;
        if (billingClient == null) {
            throw getNullBillingClientError();
        }
        return Boolean.valueOf(billingClient.isReady());
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void queryProductDetailsAsync(List<Messages.PlatformQueryProduct> list, final Messages.Result<Messages.PlatformProductDetailsResponse> result) {
        if (this.billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            this.billingClient.queryProductDetailsAsync(QueryProductDetailsParams.newBuilder().setProductList(Translator.toProductList(list)).build(), new ProductDetailsResponseListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda7
                @Override // com.android.billingclient.api.ProductDetailsResponseListener
                public final void onProductDetailsResponse(BillingResult billingResult, QueryProductDetailsResult queryProductDetailsResult) {
                    this.f$0.m9606x109ff32c(result, billingResult, queryProductDetailsResult);
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    /* JADX INFO: renamed from: lambda$queryProductDetailsAsync$4$io-flutter-plugins-inapppurchase-MethodCallHandlerImpl, reason: not valid java name */
    /* synthetic */ void m9606x109ff32c(Messages.Result result, BillingResult billingResult, QueryProductDetailsResult queryProductDetailsResult) {
        List<ProductDetails> productDetailsList = queryProductDetailsResult.getProductDetailsList();
        updateCachedProducts(productDetailsList);
        result.success(new Messages.PlatformProductDetailsResponse.Builder().setBillingResult(Translator.fromBillingResult(billingResult)).setProductDetails(Translator.fromProductDetailsList(productDetailsList)).build());
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public Messages.PlatformBillingResult launchBillingFlow(Messages.PlatformBillingFlowParams platformBillingFlowParams) {
        if (this.billingClient == null) {
            throw getNullBillingClientError();
        }
        ProductDetails productDetails = this.cachedProducts.get(platformBillingFlowParams.getProduct());
        if (productDetails == null) {
            throw new Messages.FlutterError("NOT_FOUND", "Details for product " + platformBillingFlowParams.getProduct() + " are not available. It might because products were not fetched prior to the call. Please fetch the products first. An example of how to fetch the products could be found here: https://github.com/flutter/packages/blob/main/packages/in_app_purchase/in_app_purchase/README.md#loading-products-for-sale", null);
        }
        List<ProductDetails.SubscriptionOfferDetails> subscriptionOfferDetails = productDetails.getSubscriptionOfferDetails();
        if (subscriptionOfferDetails != null) {
            Iterator<ProductDetails.SubscriptionOfferDetails> it = subscriptionOfferDetails.iterator();
            while (true) {
                if (it.hasNext()) {
                    ProductDetails.SubscriptionOfferDetails next = it.next();
                    if (platformBillingFlowParams.getOfferToken() != null && platformBillingFlowParams.getOfferToken().equals(next.getOfferToken())) {
                        break;
                    }
                } else {
                    throw new Messages.FlutterError("INVALID_OFFER_TOKEN", "Offer token " + platformBillingFlowParams.getOfferToken() + " for product " + platformBillingFlowParams.getProduct() + " is not valid. Make sure to only pass offer tokens that belong to the product. To obtain offer tokens for a product, fetch the products. An example of how to fetch the products could be found here: https://github.com/flutter/packages/blob/main/packages/in_app_purchase/in_app_purchase/README.md#loading-products-for-sale", null);
                }
            }
        }
        if (platformBillingFlowParams.getOldProduct() == null && platformBillingFlowParams.getReplacementMode() != REPLACEMENT_MODE_UNKNOWN_SUBSCRIPTION_UPGRADE_DOWNGRADE_POLICY) {
            throw new Messages.FlutterError("IN_APP_PURCHASE_REQUIRE_OLD_PRODUCT", "launchBillingFlow failed because oldProduct is null. You must provide a valid oldProduct in order to use a replacement mode.", null);
        }
        if (platformBillingFlowParams.getOldProduct() != null && !this.cachedProducts.containsKey(platformBillingFlowParams.getOldProduct())) {
            throw new Messages.FlutterError("IN_APP_PURCHASE_INVALID_OLD_PRODUCT", "Details for product " + platformBillingFlowParams.getOldProduct() + " are not available. It might because products were not fetched prior to the call. Please fetch the products first. An example of how to fetch the products could be found here: https://github.com/flutter/packages/blob/main/packages/in_app_purchase/in_app_purchase/README.md#loading-products-for-sale", null);
        }
        if (this.activity == null) {
            throw new Messages.FlutterError(ACTIVITY_UNAVAILABLE, "Details for product " + platformBillingFlowParams.getProduct() + " are not available. This method must be run with the app in foreground.", null);
        }
        BillingFlowParams.ProductDetailsParams.Builder builderNewBuilder = BillingFlowParams.ProductDetailsParams.newBuilder();
        builderNewBuilder.setProductDetails(productDetails);
        if (platformBillingFlowParams.getOfferToken() != null) {
            builderNewBuilder.setOfferToken(platformBillingFlowParams.getOfferToken());
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(builderNewBuilder.build());
        BillingFlowParams.Builder productDetailsParamsList = BillingFlowParams.newBuilder().setProductDetailsParamsList(arrayList);
        if (platformBillingFlowParams.getAccountId() != null && !platformBillingFlowParams.getAccountId().isEmpty()) {
            productDetailsParamsList.setObfuscatedAccountId(platformBillingFlowParams.getAccountId());
        }
        if (platformBillingFlowParams.getObfuscatedProfileId() != null && !platformBillingFlowParams.getObfuscatedProfileId().isEmpty()) {
            productDetailsParamsList.setObfuscatedProfileId(platformBillingFlowParams.getObfuscatedProfileId());
        }
        BillingFlowParams.SubscriptionUpdateParams.Builder builderNewBuilder2 = BillingFlowParams.SubscriptionUpdateParams.newBuilder();
        if (platformBillingFlowParams.getOldProduct() != null && !platformBillingFlowParams.getOldProduct().isEmpty() && platformBillingFlowParams.getPurchaseToken() != null) {
            builderNewBuilder2.setOldPurchaseToken(platformBillingFlowParams.getPurchaseToken());
            if (platformBillingFlowParams.getReplacementMode() != REPLACEMENT_MODE_UNKNOWN_SUBSCRIPTION_UPGRADE_DOWNGRADE_POLICY) {
                builderNewBuilder2.setSubscriptionReplacementMode(Translator.toReplacementMode(platformBillingFlowParams.getReplacementMode()));
            }
            productDetailsParamsList.setSubscriptionUpdateParams(builderNewBuilder2.build());
        }
        return Translator.fromBillingResult(this.billingClient.launchBillingFlow(this.activity, productDetailsParamsList.build()));
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void consumeAsync(String str, final Messages.Result<Messages.PlatformBillingResult> result) {
        if (this.billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            ConsumeResponseListener consumeResponseListener = new ConsumeResponseListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda2
                @Override // com.android.billingclient.api.ConsumeResponseListener
                public final void onConsumeResponse(BillingResult billingResult, String str2) {
                    result.success(Translator.fromBillingResult(billingResult));
                }
            };
            this.billingClient.consumeAsync(ConsumeParams.newBuilder().setPurchaseToken(str).build(), consumeResponseListener);
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void queryPurchasesAsync(Messages.PlatformProductType platformProductType, final Messages.Result<Messages.PlatformPurchasesResponse> result) {
        if (this.billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            QueryPurchasesParams.Builder builderNewBuilder = QueryPurchasesParams.newBuilder();
            builderNewBuilder.setProductType(Translator.toProductTypeString(platformProductType));
            this.billingClient.queryPurchasesAsync(builderNewBuilder.build(), new PurchasesResponseListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda0
                @Override // com.android.billingclient.api.PurchasesResponseListener
                public final void onQueryPurchasesResponse(BillingResult billingResult, List list) {
                    result.success(new Messages.PlatformPurchasesResponse.Builder().setBillingResult(Translator.fromBillingResult(billingResult)).setPurchases(Translator.fromPurchasesList(list)).build());
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    @Deprecated
    public void queryPurchaseHistoryAsync(Messages.PlatformProductType platformProductType, Messages.Result<Messages.PlatformPurchaseHistoryResponse> result) {
        if (this.billingClient == null) {
            result.error(getNullBillingClientError());
        } else {
            result.success(new Messages.PlatformPurchaseHistoryResponse.Builder().setBillingResult(Translator.fromBillingResult(BillingResult.newBuilder().setResponseCode(0).build())).setPurchases(new ArrayList()).build());
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void startConnection(final Long l, Messages.PlatformBillingChoiceMode platformBillingChoiceMode, Messages.PlatformPendingPurchasesParams platformPendingPurchasesParams, final Messages.Result<Messages.PlatformBillingResult> result) {
        if (this.billingClient == null) {
            this.billingClient = this.billingClientFactory.createBillingClient(this.applicationContext, this.callbackApi, platformBillingChoiceMode, platformPendingPurchasesParams);
        }
        try {
            this.billingClient.startConnection(new BillingClientStateListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl.1
                private boolean alreadyFinished = false;

                @Override // com.android.billingclient.api.BillingClientStateListener
                public void onBillingSetupFinished(BillingResult billingResult) {
                    if (this.alreadyFinished) {
                        Log.d(MethodCallHandlerImpl.TAG, "Tried to call onBillingSetupFinished multiple times.");
                    } else {
                        this.alreadyFinished = true;
                        result.success(Translator.fromBillingResult(billingResult));
                    }
                }

                @Override // com.android.billingclient.api.BillingClientStateListener
                public void onBillingServiceDisconnected() {
                    MethodCallHandlerImpl.this.callbackApi.onBillingServiceDisconnected(l, new Messages.VoidResult() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl.1.1
                        @Override // io.flutter.plugins.inapppurchase.Messages.VoidResult
                        public void success() {
                        }

                        @Override // io.flutter.plugins.inapppurchase.Messages.VoidResult
                        public void error(Throwable th) {
                            io.flutter.Log.e("IN_APP_PURCHASE", "onBillingServiceDisconnected handler error: " + th);
                        }
                    });
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public void acknowledgePurchase(String str, final Messages.Result<Messages.PlatformBillingResult> result) {
        if (this.billingClient == null) {
            result.error(getNullBillingClientError());
            return;
        }
        try {
            this.billingClient.acknowledgePurchase(AcknowledgePurchaseParams.newBuilder().setPurchaseToken(str).build(), new AcknowledgePurchaseResponseListener() { // from class: io.flutter.plugins.inapppurchase.MethodCallHandlerImpl$$ExternalSyntheticLambda3
                @Override // com.android.billingclient.api.AcknowledgePurchaseResponseListener
                public final void onAcknowledgePurchaseResponse(BillingResult billingResult) {
                    result.success(Translator.fromBillingResult(billingResult));
                }
            });
        } catch (RuntimeException e) {
            result.error(new Messages.FlutterError("error", e.getMessage(), Log.getStackTraceString(e)));
        }
    }

    protected void updateCachedProducts(List<ProductDetails> list) {
        if (list == null) {
            return;
        }
        for (ProductDetails productDetails : list) {
            this.cachedProducts.put(productDetails.getProductId(), productDetails);
        }
    }

    private Messages.FlutterError getNullBillingClientError() {
        return new Messages.FlutterError("UNAVAILABLE", "BillingClient is unset. Try reconnecting.", null);
    }

    @Override // io.flutter.plugins.inapppurchase.Messages.InAppPurchaseApi
    public Boolean isFeatureSupported(Messages.PlatformBillingClientFeature platformBillingClientFeature) {
        BillingClient billingClient = this.billingClient;
        if (billingClient != null) {
            return Boolean.valueOf(billingClient.isFeatureSupported(Translator.toBillingClientFeature(platformBillingClientFeature)).getResponseCode() == 0);
        }
        throw getNullBillingClientError();
    }
}
