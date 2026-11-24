package androidx.privacysandbox.ads.adservices.topics;

import androidx.privacysandbox.ads.adservices.common.ExperimentalFeatures;
import androidx.viewpager2.widget.ViewPager2$$ExternalSyntheticApiModelOutline0;
import io.sentry.protocol.Response;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GetTopicsResponseHelper.kt */
/* JADX INFO: loaded from: classes4.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\bÇ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0015\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0001¢\u0006\u0002\b\u0007J\u0015\u0010\b\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0001¢\u0006\u0002\b\t¨\u0006\n"}, d2 = {"Landroidx/privacysandbox/ads/adservices/topics/GetTopicsResponseHelper;", "", "()V", "convertResponse", "Landroidx/privacysandbox/ads/adservices/topics/GetTopicsResponse;", Response.TYPE, "Landroid/adservices/topics/GetTopicsResponse;", "convertResponse$ads_adservices_release", "convertResponseWithEncryptedTopics", "convertResponseWithEncryptedTopics$ads_adservices_release", "ads-adservices_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class GetTopicsResponseHelper {
    public static final GetTopicsResponseHelper INSTANCE = new GetTopicsResponseHelper();

    private GetTopicsResponseHelper() {
    }

    public final GetTopicsResponse convertResponse$ads_adservices_release(android.adservices.topics.GetTopicsResponse response) {
        Intrinsics.checkNotNullParameter(response, "response");
        ArrayList arrayList = new ArrayList();
        Iterator it = response.getTopics().iterator();
        while (it.hasNext()) {
            android.adservices.topics.Topic topicM7895m = ViewPager2$$ExternalSyntheticApiModelOutline0.m7895m(it.next());
            arrayList.add(new Topic(topicM7895m.getTaxonomyVersion(), topicM7895m.getModelVersion(), topicM7895m.getTopicId()));
        }
        return new GetTopicsResponse(arrayList);
    }

    @ExperimentalFeatures.Ext11OptIn
    public final GetTopicsResponse convertResponseWithEncryptedTopics$ads_adservices_release(android.adservices.topics.GetTopicsResponse response) {
        Intrinsics.checkNotNullParameter(response, "response");
        ArrayList arrayList = new ArrayList();
        Iterator it = response.getTopics().iterator();
        while (it.hasNext()) {
            android.adservices.topics.Topic topicM7895m = ViewPager2$$ExternalSyntheticApiModelOutline0.m7895m(it.next());
            arrayList.add(new Topic(topicM7895m.getTaxonomyVersion(), topicM7895m.getModelVersion(), topicM7895m.getTopicId()));
        }
        ArrayList arrayList2 = new ArrayList();
        Iterator it2 = response.getEncryptedTopics().iterator();
        while (it2.hasNext()) {
            android.adservices.topics.EncryptedTopic encryptedTopicM7892m = ViewPager2$$ExternalSyntheticApiModelOutline0.m7892m(it2.next());
            byte[] encryptedTopic = encryptedTopicM7892m.getEncryptedTopic();
            Intrinsics.checkNotNullExpressionValue(encryptedTopic, "encryptedTopic.encryptedTopic");
            String keyIdentifier = encryptedTopicM7892m.getKeyIdentifier();
            Intrinsics.checkNotNullExpressionValue(keyIdentifier, "encryptedTopic.keyIdentifier");
            byte[] encapsulatedKey = encryptedTopicM7892m.getEncapsulatedKey();
            Intrinsics.checkNotNullExpressionValue(encapsulatedKey, "encryptedTopic.encapsulatedKey");
            arrayList2.add(new EncryptedTopic(encryptedTopic, keyIdentifier, encapsulatedKey));
        }
        return new GetTopicsResponse(arrayList, arrayList2);
    }
}
