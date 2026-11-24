package com.pushwoosh.richmedia;

import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.view.config.ModalRichmediaConfig;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaDismissAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaPresentAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaSwipeGesture;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaWindowWidth;
import com.pushwoosh.internal.preference.PreferenceIntValue;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public class RichMediaManager {
    public static ModalRichmediaConfig getDefaultRichMediaConfig() {
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences == null) {
            PWLog.warn("RichMediaManager", "NotificationPrefs is null, returning default ModalRichmediaConfig");
            return new ModalRichmediaConfig();
        }
        ModalRichmediaConfig respectEdgeToEdgeLayout = new ModalRichmediaConfig().setAnimationDuration(Integer.valueOf(notificationPreferences.richMediaAnimationDuration().get())).setDismissAnimationType(ModalRichMediaDismissAnimationType.getByCode(notificationPreferences.richMediaDismissAnimation().get())).setPresentAnimationType(ModalRichMediaPresentAnimationType.getByCode(notificationPreferences.richMediaPresentAnimation().get())).setViewPosition(ModalRichMediaViewPosition.getByCode(notificationPreferences.richMediaViewPosition().get())).setWindowWidth(ModalRichMediaWindowWidth.getByCode(notificationPreferences.richMediaWindowWidth().get())).setStatusBarCovered(Boolean.valueOf(notificationPreferences.richMediaStatusBarCovered().get())).setRespectEdgeToEdgeLayout(Boolean.valueOf(notificationPreferences.richMediaRespectEdgeToEdgeLayout().get()));
        int i = notificationPreferences.richMediaSwipeGestureBitMask().get();
        HashSet hashSet = new HashSet();
        for (ModalRichMediaSwipeGesture modalRichMediaSwipeGesture : ModalRichMediaSwipeGesture.values()) {
            if (modalRichMediaSwipeGesture.getBit() != 0 && (modalRichMediaSwipeGesture.getBit() & i) != 0) {
                hashSet.add(modalRichMediaSwipeGesture);
            }
        }
        respectEdgeToEdgeLayout.setSwipeGestures(hashSet);
        return respectEdgeToEdgeLayout;
    }

    public static RichMediaColorScheme getRichMediaColorScheme() {
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences != null) {
            return RichMediaColorScheme.fromString(notificationPreferences.richMediaColorScheme().get());
        }
        PWLog.warn("RichMediaManager", "NotificationPrefs is null, falling back to APP color scheme");
        return RichMediaColorScheme.APP;
    }

    public static RichMediaStyle getRichMediaStyle() {
        a richMediaController = PushwooshPlatform.getInstance().getRichMediaController();
        if (richMediaController != null) {
            return richMediaController.e;
        }
        return null;
    }

    public static RichMediaType getRichMediaType() {
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences == null) {
            PWLog.warn("RichMediaManager", "NotificationPrefs is null, falling back to default RichMediaType");
            return RichMediaType.DEFAULT;
        }
        int i = notificationPreferences.richMediaType().get();
        RichMediaType[] richMediaTypeArrValues = RichMediaType.values();
        return (i < 0 || i >= richMediaTypeArrValues.length) ? RichMediaType.DEFAULT : richMediaTypeArrValues[i];
    }

    public static void present(RichMedia richMedia) {
        a richMediaController = PushwooshPlatform.getInstance().getRichMediaController();
        if (richMediaController != null) {
            PWLog.noise(richMediaController.f5310a, "present()");
            if (richMedia == null) {
                PWLog.warn(richMediaController.f5310a, "richMedia is null");
            } else {
                richMediaController.b.a(richMedia.a());
            }
        }
    }

    public static void setDefaultRichMediaConfig(ModalRichmediaConfig modalRichmediaConfig) {
        int bit;
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences == null) {
            PWLog.warn("RichMediaManager", "NotificationPrefs is null, cannot set default ModalRichmediaConfig");
            return;
        }
        ModalRichMediaDismissAnimationType dismissAnimationType = modalRichmediaConfig.getDismissAnimationType();
        notificationPreferences.richMediaDismissAnimation().set(dismissAnimationType != null ? dismissAnimationType.getCode() : ModalRichMediaDismissAnimationType.FADE_OUT.getCode());
        ModalRichMediaPresentAnimationType presentAnimationType = modalRichmediaConfig.getPresentAnimationType();
        notificationPreferences.richMediaPresentAnimation().set(presentAnimationType != null ? presentAnimationType.getCode() : ModalRichMediaPresentAnimationType.FADE_IN.getCode());
        Set<ModalRichMediaSwipeGesture> swipeGestures = modalRichmediaConfig.getSwipeGestures();
        if (swipeGestures != null) {
            Iterator<ModalRichMediaSwipeGesture> it = swipeGestures.iterator();
            bit = 0;
            while (it.hasNext()) {
                bit |= it.next().getBit();
            }
        } else {
            bit = 0;
        }
        notificationPreferences.richMediaSwipeGestureBitMask().set(bit);
        ModalRichMediaViewPosition viewPosition = modalRichmediaConfig.getViewPosition();
        PreferenceIntValue preferenceIntValueRichMediaViewPosition = notificationPreferences.richMediaViewPosition();
        if (viewPosition == null) {
            viewPosition = ModalRichMediaViewPosition.FULLSCREEN;
        }
        preferenceIntValueRichMediaViewPosition.set(viewPosition.getCode());
        ModalRichMediaWindowWidth windowWidth = modalRichmediaConfig.getWindowWidth();
        PreferenceIntValue preferenceIntValueRichMediaWindowWidth = notificationPreferences.richMediaWindowWidth();
        if (windowWidth == null) {
            windowWidth = ModalRichMediaWindowWidth.FULL_SCREEN;
        }
        preferenceIntValueRichMediaWindowWidth.set(windowWidth.getCode());
        Boolean boolIsStatusBarCovered = modalRichmediaConfig.isStatusBarCovered();
        notificationPreferences.richMediaStatusBarCovered().set(boolIsStatusBarCovered != null ? boolIsStatusBarCovered.booleanValue() : false);
        Boolean boolShouldRespectEdgeToEdgeLayout = modalRichmediaConfig.shouldRespectEdgeToEdgeLayout();
        notificationPreferences.richMediaRespectEdgeToEdgeLayout().set(boolShouldRespectEdgeToEdgeLayout != null ? boolShouldRespectEdgeToEdgeLayout.booleanValue() : true);
        Integer animationDuration = modalRichmediaConfig.getAnimationDuration();
        notificationPreferences.richMediaAnimationDuration().set(animationDuration != null ? animationDuration.intValue() : 1000);
    }

    public static void setDelegate(RichMediaPresentingDelegate richMediaPresentingDelegate) {
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
        if (pushwooshPlatform == null) {
            PWLog.error("RichMediaManager failed to set delegate as PushwooshPlatform is not initialized yet");
            return;
        }
        a richMediaController = pushwooshPlatform.getRichMediaController();
        if (richMediaController != null) {
            richMediaController.d = richMediaPresentingDelegate;
        }
    }

    public static void setRichMediaColorScheme(RichMediaColorScheme richMediaColorScheme) {
        if (richMediaColorScheme == null) {
            PWLog.warn("RichMediaManager", "RichMediaColorScheme value is null, ignoring");
            return;
        }
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences == null) {
            PWLog.warn("RichMediaManager", "NotificationPrefs is null, cannot set RichMediaColorScheme");
        } else {
            notificationPreferences.richMediaColorScheme().set(richMediaColorScheme.name());
        }
    }

    public static void setRichMediaType(RichMediaType richMediaType) {
        if (richMediaType == null) {
            PWLog.warn("RichMediaManager", "RichMediaType value is null, ignoring");
            return;
        }
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences == null) {
            PWLog.warn("RichMediaManager", "NotificationPrefs is null, cannot set RichMediaType");
        } else {
            notificationPreferences.richMediaType().set(richMediaType.ordinal());
        }
    }
}
