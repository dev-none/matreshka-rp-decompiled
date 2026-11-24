package com.my.target;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.RippleDrawable;
import android.graphics.drawable.StateListDrawable;
import android.text.TextUtils;
import android.util.StateSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.TranslateAnimation;
import android.widget.BaseAdapter;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageButton;
import android.widget.ListAdapter;
import android.widget.ListView;
import androidx.core.view.ViewCompat;
import androidx.recyclerview.widget.RecyclerView;
import com.my.target.common.menu.Menu;
import com.my.target.common.menu.MenuAction;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class g extends FrameLayout implements k.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ListView f4626a;
    public final View b;
    public final int c;
    public final int d;
    public final List e;
    public final WeakReference f;
    public View g;
    public WeakReference h;
    public MenuAction i;

    public g(Context context, List list, WeakReference weakReference) {
        super(context);
        this.i = null;
        this.e = new ArrayList(list);
        this.f = weakReference;
        kb kbVarE = kb.e(context);
        this.c = kbVarE.b(500);
        this.d = kbVarE.a(0.5f);
        ListView listView = new ListView(context);
        this.f4626a = listView;
        listView.setDivider(null);
        addView(listView);
        View view = new View(context);
        this.b = view;
        view.setBackgroundColor(-5131855);
        addView(view);
    }

    @Override // com.my.target.k.a
    public void a(k kVar, FrameLayout frameLayout) {
        frameLayout.addView(this, -1, -1);
        c();
    }

    @Override // com.my.target.k.a
    public void b(boolean z) {
    }

    public void c() {
        TranslateAnimation translateAnimation = new TranslateAnimation(0.0f, 0.0f, 512.0f, 0.0f);
        translateAnimation.setDuration(300L);
        translateAnimation.setFillAfter(true);
        this.f4626a.startAnimation(translateAnimation);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int iMax = Math.max((i3 - this.f4626a.getMeasuredWidth()) / 2, getPaddingLeft());
        View view = this.g;
        if (view != null) {
            view.layout(iMax, (i4 - getPaddingBottom()) - this.g.getMeasuredHeight(), this.g.getMeasuredWidth() + iMax, i4 - getPaddingBottom());
        }
        this.b.layout(iMax, this.g.getTop() - this.b.getMeasuredHeight(), this.b.getMeasuredWidth() + iMax, this.g.getTop());
        this.f4626a.layout(iMax, this.b.getTop() - this.f4626a.getMeasuredHeight(), this.f4626a.getMeasuredWidth() + iMax, this.b.getTop());
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int iMin = (Math.min(size, this.c) - getPaddingLeft()) - getPaddingRight();
        int paddingTop = (size2 - getPaddingTop()) - getPaddingBottom();
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(iMin, 1073741824);
        View view = this.g;
        if (view != null) {
            view.measure(iMakeMeasureSpec, paddingTop);
        }
        this.b.measure(iMakeMeasureSpec, View.MeasureSpec.makeMeasureSpec(this.d, 1073741824));
        this.f4626a.measure(iMakeMeasureSpec, View.MeasureSpec.makeMeasureSpec((paddingTop - this.d) - this.g.getMeasuredHeight(), Integer.MIN_VALUE));
        setMeasuredDimension(size, size2);
    }

    @Override // com.my.target.k.a
    public void r() {
        MenuAction menuAction;
        WeakReference weakReference = this.h;
        if (weakReference != null) {
            weakReference.clear();
            this.h = null;
            Menu.Listener listener = (Menu.Listener) this.f.get();
            if (listener == null || (menuAction = this.i) == null) {
                return;
            }
            listener.onActionClick(menuAction);
        }
    }

    public void b() {
        if (this.e.size() == 0 || (this.e.size() == 1 && ((MenuAction) this.e.get(0)).style == 1)) {
            gb.a("AdChoicesOptionsView: there are no actions. Can't open dialog");
            return;
        }
        for (final MenuAction menuAction : this.e) {
            if (menuAction.style != 0) {
                this.i = menuAction;
                View.OnClickListener onClickListener = new View.OnClickListener() { // from class: com.my.target.g$$ExternalSyntheticLambda0
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        this.f$0.a(menuAction, view);
                    }
                };
                View viewA = a(onClickListener, getContext());
                this.g = viewA;
                addView(viewA);
                setOnClickListener(onClickListener);
                break;
            }
        }
        MenuAction menuAction2 = this.i;
        if (menuAction2 != null) {
            this.e.remove(menuAction2);
        }
        this.f4626a.setAdapter((ListAdapter) new a(this.e, this.f));
        try {
            k kVarA = k.a(this, getContext());
            this.h = new WeakReference(kVarA);
            kVarA.show();
        } catch (Throwable th) {
            th.printStackTrace();
            gb.b("AdChoicesOptionsController: Unable to start adchoices dialog");
            r();
        }
    }

    public final /* synthetic */ void a(MenuAction menuAction, View view) {
        Menu.Listener listener = (Menu.Listener) this.f.get();
        if (listener == null) {
            gb.a("AdChoicesOptionsView: listener is null, can't call on action click.");
        } else {
            listener.onActionClick(menuAction);
        }
    }

    public void a() {
        k kVar;
        WeakReference weakReference = this.h;
        if (weakReference == null || (kVar = (k) weakReference.get()) == null) {
            return;
        }
        kVar.dismiss();
    }

    public final View a(View.OnClickListener onClickListener, Context context) {
        ImageButton imageButton = new ImageButton(context);
        imageButton.setImageBitmap(l0.a(context));
        kb.a(imageButton, -1, -3158065);
        imageButton.setOnClickListener(onClickListener);
        return imageButton;
    }

    public static class a extends BaseAdapter {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final List f4627a;
        public final WeakReference b;

        public a(List list, WeakReference weakReference) {
            this.f4627a = list;
            this.b = weakReference;
        }

        public static Drawable a(kb kbVar, boolean z) {
            GradientDrawable.Orientation orientation = GradientDrawable.Orientation.TOP_BOTTOM;
            GradientDrawable gradientDrawable = new GradientDrawable(orientation, new int[]{-1, -1});
            GradientDrawable gradientDrawable2 = new GradientDrawable(orientation, new int[]{-3158065, -3158065});
            if (z) {
                float fB = kbVar.b(8);
                float[] fArr = {fB, fB, fB, fB, 0.0f, 0.0f, 0.0f, 0.0f};
                gradientDrawable.setCornerRadii(fArr);
                gradientDrawable2.setCornerRadii(fArr);
            }
            StateListDrawable stateListDrawable = new StateListDrawable();
            stateListDrawable.addState(new int[]{android.R.attr.state_pressed}, gradientDrawable2);
            int[] iArr = StateSet.WILD_CARD;
            stateListDrawable.addState(iArr, gradientDrawable);
            return new RippleDrawable(new ColorStateList(new int[][]{new int[]{android.R.attr.state_pressed}, iArr}, new int[]{kb.a(-3158065), kb.a(-1)}), stateListDrawable, null);
        }

        @Override // android.widget.Adapter
        public int getCount() {
            return this.f4627a.size();
        }

        @Override // android.widget.Adapter
        public Object getItem(int i) {
            return this.f4627a.get(i);
        }

        @Override // android.widget.Adapter
        public long getItemId(int i) {
            return i;
        }

        @Override // android.widget.Adapter
        public View getView(final int i, View view, ViewGroup viewGroup) {
            return a(((MenuAction) this.f4627a.get(i)).title, i == 0, viewGroup.getContext(), new View.OnClickListener() { // from class: com.my.target.g$a$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view2) {
                    this.f$0.a(i, view2);
                }
            });
        }

        public final /* synthetic */ void a(int i, View view) {
            if (i < 0 || i >= this.f4627a.size()) {
                return;
            }
            MenuAction menuAction = (MenuAction) this.f4627a.get(i);
            Menu.Listener listener = (Menu.Listener) this.b.get();
            if (listener == null) {
                return;
            }
            listener.onActionClick(menuAction);
        }

        public View a(String str, boolean z, Context context, View.OnClickListener onClickListener) {
            Button button = new Button(context);
            button.setOnClickListener(onClickListener);
            kb kbVarE = kb.e(context);
            int iB = kbVarE.b(24);
            button.setPadding(iB, button.getPaddingTop(), iB, button.getPaddingBottom());
            button.setAllCaps(false);
            button.setStateListAnimator(null);
            button.setLines(1);
            button.setTextColor(ViewCompat.MEASURED_STATE_MASK);
            button.setEllipsize(TextUtils.TruncateAt.END);
            button.setTypeface(null, 0);
            button.setGravity(8388627);
            button.setLayoutParams(new RecyclerView.LayoutParams(-1, -2));
            button.setBackground(a(kbVarE, z));
            button.setText(str);
            return button;
        }
    }
}
