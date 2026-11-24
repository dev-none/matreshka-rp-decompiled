package com.pushwoosh.internal.event;

import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class PermissionEvent implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List f5193a;
    private final List b;

    public PermissionEvent(List<String> list, List<String> list2) {
        this.f5193a = list;
        this.b = list2;
    }

    public List<String> getDeniedPermissions() {
        return this.b;
    }

    public List<String> getGrantedPermissions() {
        return this.f5193a;
    }
}
