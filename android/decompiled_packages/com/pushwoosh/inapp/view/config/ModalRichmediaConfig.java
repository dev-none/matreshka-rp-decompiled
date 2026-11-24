package com.pushwoosh.inapp.view.config;

import com.pushwoosh.inapp.view.config.enums.ModalRichMediaDismissAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaPresentAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaSwipeGesture;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaWindowWidth;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public class ModalRichmediaConfig {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ModalRichMediaViewPosition f5183a = null;
    private HashSet b = null;
    private ModalRichMediaPresentAnimationType c = null;
    private ModalRichMediaDismissAnimationType d = null;
    private ModalRichMediaWindowWidth e = null;
    private Integer f = null;
    private Boolean g = null;
    private Boolean h = null;

    public Integer getAnimationDuration() {
        return this.f;
    }

    public ModalRichMediaDismissAnimationType getDismissAnimationType() {
        return this.d;
    }

    public ModalRichMediaPresentAnimationType getPresentAnimationType() {
        return this.c;
    }

    public Set<ModalRichMediaSwipeGesture> getSwipeGestures() {
        HashSet hashSet = this.b;
        return hashSet == null ? Collections.EMPTY_SET : Collections.unmodifiableSet(hashSet);
    }

    public ModalRichMediaViewPosition getViewPosition() {
        return this.f5183a;
    }

    public ModalRichMediaWindowWidth getWindowWidth() {
        return this.e;
    }

    public Boolean isStatusBarCovered() {
        return this.g;
    }

    public ModalRichmediaConfig setAnimationDuration(Integer num) {
        this.f = num;
        return this;
    }

    public ModalRichmediaConfig setDismissAnimationType(ModalRichMediaDismissAnimationType modalRichMediaDismissAnimationType) {
        this.d = modalRichMediaDismissAnimationType;
        return this;
    }

    public ModalRichmediaConfig setPresentAnimationType(ModalRichMediaPresentAnimationType modalRichMediaPresentAnimationType) {
        this.c = modalRichMediaPresentAnimationType;
        return this;
    }

    public ModalRichmediaConfig setRespectEdgeToEdgeLayout(Boolean bool) {
        this.h = bool;
        return this;
    }

    public ModalRichmediaConfig setStatusBarCovered(Boolean bool) {
        this.g = bool;
        return this;
    }

    public ModalRichmediaConfig setSwipeGestures(Set<ModalRichMediaSwipeGesture> set) {
        if (set == null) {
            this.b = null;
            return this;
        }
        HashSet hashSet = new HashSet(set);
        this.b = hashSet;
        hashSet.remove(ModalRichMediaSwipeGesture.NONE);
        return this;
    }

    public ModalRichmediaConfig setViewPosition(ModalRichMediaViewPosition modalRichMediaViewPosition) {
        this.f5183a = modalRichMediaViewPosition;
        return this;
    }

    public ModalRichmediaConfig setWindowWidth(ModalRichMediaWindowWidth modalRichMediaWindowWidth) {
        this.e = modalRichMediaWindowWidth;
        return this;
    }

    public Boolean shouldRespectEdgeToEdgeLayout() {
        return this.h;
    }
}
