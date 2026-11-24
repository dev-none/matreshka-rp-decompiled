package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy;
import kotlin.collections.ArraysKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.m5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2291m5 implements IExecutionPolicy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final IExecutionPolicy[] f6203a;
    public final String b;

    public C2291m5(IExecutionPolicy... iExecutionPolicyArr) {
        this.f6203a = iExecutionPolicyArr;
        this.b = "Composite of {" + ArraysKt.joinToString$default(iExecutionPolicyArr, ", ", (CharSequence) null, (CharSequence) null, 0, (CharSequence) null, C2266l5.f6184a, 30, (Object) null) + '}';
    }

    /* JADX WARN: Code duplicated, block: B:13:0x001a A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:14:0x001b A[RETURN] */
    @Override // io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy
    public final boolean canBeExecuted() {
        IExecutionPolicy[] iExecutionPolicyArr = this.f6203a;
        if (iExecutionPolicyArr.length == 0) {
            return false;
        }
        for (IExecutionPolicy iExecutionPolicy : iExecutionPolicyArr) {
            if (!iExecutionPolicy.canBeExecuted()) {
                if (iExecutionPolicy != null) {
                    return false;
                }
                return true;
            }
        }
        iExecutionPolicy = null;
        if (iExecutionPolicy != null) {
            return false;
        }
        return true;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy
    public final String description() {
        return this.b;
    }
}
