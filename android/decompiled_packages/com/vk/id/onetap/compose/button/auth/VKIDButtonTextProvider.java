package com.vk.id.onetap.compose.button.auth;

import com.vk.id.VKIDUser;
import com.vk.id.onetap.compose.onetap.OneTapTitleScenario;
import kotlin.Metadata;

/* JADX INFO: compiled from: VKIDButtonTextProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b`\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&J\u0018\u0010\b\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&J\u0010\u0010\t\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0007H&J\u0010\u0010\n\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0007H&¨\u0006\u000b"}, d2 = {"Lcom/vk/id/onetap/compose/button/auth/VKIDButtonTextProvider;", "", "userFoundText", "", "user", "Lcom/vk/id/VKIDUser;", "scenario", "Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;", "userFoundShortText", "noUserText", "noUserShortText", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface VKIDButtonTextProvider {
    String noUserShortText(OneTapTitleScenario scenario);

    String noUserText(OneTapTitleScenario scenario);

    String userFoundShortText(VKIDUser user, OneTapTitleScenario scenario);

    String userFoundText(VKIDUser user, OneTapTitleScenario scenario);
}
