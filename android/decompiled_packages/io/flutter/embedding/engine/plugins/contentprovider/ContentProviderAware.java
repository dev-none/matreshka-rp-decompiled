package io.flutter.embedding.engine.plugins.contentprovider;

/* JADX INFO: loaded from: classes7.dex */
public interface ContentProviderAware {
    void onAttachedToContentProvider(ContentProviderPluginBinding contentProviderPluginBinding);

    void onDetachedFromContentProvider();
}
