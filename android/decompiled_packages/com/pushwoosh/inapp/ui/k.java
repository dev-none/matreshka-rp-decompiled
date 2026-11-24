package com.pushwoosh.inapp.ui;

import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class k extends RecyclerView.ViewHolder {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final FrameLayout f5135a;
    public final ImageView b;
    public final View c;
    public final TextView d;
    public final TextView e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(FrameLayout root, ImageView image, View scrim, TextView title, TextView message) {
        super(root);
        Intrinsics.checkNotNullParameter(root, "root");
        Intrinsics.checkNotNullParameter(image, "image");
        Intrinsics.checkNotNullParameter(scrim, "scrim");
        Intrinsics.checkNotNullParameter(title, "title");
        Intrinsics.checkNotNullParameter(message, "message");
        this.f5135a = root;
        this.b = image;
        this.c = scrim;
        this.d = title;
        this.e = message;
    }
}
