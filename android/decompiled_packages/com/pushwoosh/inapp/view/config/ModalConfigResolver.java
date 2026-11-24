package com.pushwoosh.inapp.view.config;

import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaDismissAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaPresentAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaSwipeGesture;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaWindowWidth;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.richmedia.RichMediaManager;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public class ModalConfigResolver {
    public static ModalRichmediaConfig getEffectiveConfig(Resource resource) {
        PWLog.noise("ModalConfigResolver", "getEffectiveConfig for resource: " + resource.getCode());
        ModalRichmediaConfig defaultRichMediaConfig = RichMediaManager.getDefaultRichMediaConfig();
        if (!resource.hasResourceModalConfig()) {
            PWLog.noise("ModalConfigResolver", "No resource config, using global config");
            return defaultRichMediaConfig;
        }
        ModalRichmediaConfig resourceModalConfig = resource.getResourceModalConfig();
        ModalRichmediaConfig modalRichmediaConfig = new ModalRichmediaConfig();
        ModalRichMediaViewPosition viewPosition = resourceModalConfig.getViewPosition();
        ModalRichMediaViewPosition viewPosition2 = defaultRichMediaConfig.getViewPosition();
        if (viewPosition == null) {
            viewPosition = viewPosition2;
        }
        modalRichmediaConfig.setViewPosition(viewPosition);
        ModalRichMediaPresentAnimationType presentAnimationType = resourceModalConfig.getPresentAnimationType();
        ModalRichMediaPresentAnimationType presentAnimationType2 = defaultRichMediaConfig.getPresentAnimationType();
        if (presentAnimationType == null) {
            presentAnimationType = presentAnimationType2;
        }
        modalRichmediaConfig.setPresentAnimationType(presentAnimationType);
        ModalRichMediaDismissAnimationType dismissAnimationType = resourceModalConfig.getDismissAnimationType();
        ModalRichMediaDismissAnimationType dismissAnimationType2 = defaultRichMediaConfig.getDismissAnimationType();
        if (dismissAnimationType == null) {
            dismissAnimationType = dismissAnimationType2;
        }
        modalRichmediaConfig.setDismissAnimationType(dismissAnimationType);
        Set<ModalRichMediaSwipeGesture> swipeGestures = resourceModalConfig.getSwipeGestures();
        Set<ModalRichMediaSwipeGesture> swipeGestures2 = defaultRichMediaConfig.getSwipeGestures();
        if (swipeGestures == null || swipeGestures.isEmpty()) {
            swipeGestures = swipeGestures2;
        }
        modalRichmediaConfig.setSwipeGestures(swipeGestures);
        ModalRichMediaWindowWidth windowWidth = resourceModalConfig.getWindowWidth();
        ModalRichMediaWindowWidth windowWidth2 = defaultRichMediaConfig.getWindowWidth();
        if (windowWidth == null) {
            windowWidth = windowWidth2;
        }
        modalRichmediaConfig.setWindowWidth(windowWidth);
        Integer animationDuration = resourceModalConfig.getAnimationDuration();
        Integer animationDuration2 = defaultRichMediaConfig.getAnimationDuration();
        if (animationDuration == null) {
            animationDuration = animationDuration2;
        }
        modalRichmediaConfig.setAnimationDuration(animationDuration);
        Boolean boolIsStatusBarCovered = resourceModalConfig.isStatusBarCovered();
        Boolean boolIsStatusBarCovered2 = defaultRichMediaConfig.isStatusBarCovered();
        if (boolIsStatusBarCovered == null) {
            boolIsStatusBarCovered = boolIsStatusBarCovered2;
        }
        modalRichmediaConfig.setStatusBarCovered(boolIsStatusBarCovered);
        Boolean boolShouldRespectEdgeToEdgeLayout = resourceModalConfig.shouldRespectEdgeToEdgeLayout();
        Boolean boolShouldRespectEdgeToEdgeLayout2 = defaultRichMediaConfig.shouldRespectEdgeToEdgeLayout();
        if (boolShouldRespectEdgeToEdgeLayout == null) {
            boolShouldRespectEdgeToEdgeLayout = boolShouldRespectEdgeToEdgeLayout2;
        }
        modalRichmediaConfig.setRespectEdgeToEdgeLayout(boolShouldRespectEdgeToEdgeLayout);
        return modalRichmediaConfig;
    }
}
