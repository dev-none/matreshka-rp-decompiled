package com.vk.id.captcha.web.a;

import android.app.Activity;
import android.app.Dialog;
import android.app.DialogFragment;
import android.app.FragmentManager;
import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.Button;
import android.widget.ImageView;
import com.vk.id.captcha.R;
import com.vk.id.captcha.api.VKCaptcha;
import com.vk.id.captcha.api.common.InternalVKCaptchaApi;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKCaptchaNoInternetFragment.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKCaptchaApi
public final class c extends DialogFragment {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ImageView f5364a;
    private ImageView b;
    private Button c;
    private a d = a.b.INSTANCE;

    @Override // android.app.DialogFragment, android.app.Fragment
    public final void onStart() {
        Window window;
        Window window2;
        super.onStart();
        Dialog dialog = getDialog();
        if (dialog != null && (window2 = dialog.getWindow()) != null) {
            window2.setLayout(-1, -2);
        }
        Dialog dialog2 = getDialog();
        if (dialog2 == null || (window = dialog2.getWindow()) == null) {
            return;
        }
        window.setGravity(80);
    }

    @Override // android.app.Fragment
    public final View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        Window window;
        View viewInflate = layoutInflater != null ? layoutInflater.inflate(R.layout.vk_captcha_no_internet_fragment, (ViewGroup) null) : null;
        this.f5364a = viewInflate != null ? (ImageView) viewInflate.findViewById(R.id.vkid_logo) : null;
        this.b = viewInflate != null ? (ImageView) viewInflate.findViewById(R.id.antenna) : null;
        this.c = viewInflate != null ? (Button) viewInflate.findViewById(R.id.retry_btn) : null;
        ImageView imageView = this.f5364a;
        if (imageView != null) {
            imageView.setImageResource(R.drawable.logo_vkid);
        }
        ImageView imageView2 = this.b;
        if (imageView2 != null) {
            imageView2.setImageResource(R.drawable.antenna);
        }
        Dialog dialog = getDialog();
        if (dialog != null && (window = dialog.getWindow()) != null) {
            window.setBackgroundDrawable(new ColorDrawable(0));
        }
        Button button = this.c;
        if (button != null) {
            button.setOnClickListener(new View.OnClickListener() { // from class: com.vk.id.captcha.web.a.c$$ExternalSyntheticLambda1
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    c.a(this.f$0, view);
                }
            });
        }
        return viewInflate;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void a(c cVar, View view) {
        Intrinsics.checkNotNullParameter(cVar, "");
        cVar.d = a.c.INSTANCE;
        cVar.a();
    }

    @Override // android.app.DialogFragment
    public final Dialog onCreateDialog(Bundle bundle) {
        Activity activity = getActivity();
        Intrinsics.checkNotNullExpressionValue(activity, "");
        return new b(activity);
    }

    @Override // android.app.DialogFragment
    public final void show(FragmentManager fragmentManager, String str) {
        if (fragmentManager != null) {
            fragmentManager.executePendingTransactions();
        }
        if ((fragmentManager != null ? fragmentManager.findFragmentByTag(str) : null) != null) {
            return;
        }
        super.show(fragmentManager, str);
    }

    @Override // android.app.DialogFragment, android.content.DialogInterface.OnDismissListener
    public final void onDismiss(DialogInterface dialogInterface) {
        super.onDismiss(dialogInterface);
        a();
    }

    @Override // android.app.DialogFragment, android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        super.onCancel(dialogInterface);
        a();
    }

    private final void a() {
        a aVar = this.d;
        if (Intrinsics.areEqual(aVar, a.C1198a.INSTANCE)) {
            return;
        }
        if (Intrinsics.areEqual(aVar, a.c.INSTANCE)) {
            b();
            this.d = a.C1198a.INSTANCE;
            VKCaptcha.INSTANCE.closeCaptcha$captcha_release(com.vk.id.captcha.a.c.INSTANCE);
        } else {
            b();
            VKCaptcha.INSTANCE.closeCaptcha$captcha_release(com.vk.id.captcha.a.C1191a.INSTANCE);
        }
    }

    private final void b() {
        getActivity().finish();
        if (Build.VERSION.SDK_INT >= 34) {
            getActivity().overrideActivityTransition(1, R.anim.fade_in, R.anim.fade_out);
        } else {
            getActivity().overridePendingTransition(R.anim.fade_in, R.anim.fade_out);
        }
    }
}
