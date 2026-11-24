package com.pushwoosh.f0;

import java.io.ByteArrayInputStream;
import java.io.InvalidClassException;
import java.io.ObjectInputStream;
import java.io.ObjectStreamClass;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class b extends ObjectInputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5074a;
    public final ArrayList b;

    public b(ByteArrayInputStream byteArrayInputStream) {
        super(byteArrayInputStream);
        this.f5074a = new ArrayList();
        this.b = new ArrayList();
    }

    @Override // java.io.ObjectInputStream
    public final Class resolveClass(ObjectStreamClass objectStreamClass) throws InvalidClassException {
        String name = objectStreamClass.getName();
        Iterator it = this.b.iterator();
        while (it.hasNext()) {
            if (((a) it.next()).f5073a.contains(name)) {
                throw new InvalidClassException("Class name not accepted: " + name);
            }
        }
        Iterator it2 = this.f5074a.iterator();
        while (it2.hasNext()) {
            if (((a) it2.next()).f5073a.contains(name)) {
                return super.resolveClass(objectStreamClass);
            }
        }
        throw new InvalidClassException("Class name not accepted: " + name);
    }
}
