package com.google.android.gms.internal.fido;

import java.io.IOException;
import java.math.RoundingMode;
import javax.annotation.CheckForNull;

/* JADX INFO: compiled from: com.google.android.gms:play-services-fido@@20.1.0 */
/* JADX INFO: loaded from: classes4.dex */
class zzcg extends zzch {

    @CheckForNull
    private volatile zzch zza;
    final zzcd zzb;

    @CheckForNull
    final Character zzc;

    zzcg(zzcd zzcdVar, @CheckForNull Character ch2) {
        this.zzb = zzcdVar;
        if (ch2 != null) {
            ch2.charValue();
            if (zzcdVar.zzc('=')) {
                throw new IllegalArgumentException(zzaq.zza("Padding character %s was already in alphabet", ch2));
            }
        }
        this.zzc = ch2;
    }

    public final boolean equals(@CheckForNull Object obj) {
        if (obj instanceof zzcg) {
            zzcg zzcgVar = (zzcg) obj;
            if (this.zzb.equals(zzcgVar.zzb)) {
                Character ch2 = this.zzc;
                Character ch3 = zzcgVar.zzc;
                if (ch2 == ch3) {
                    return true;
                }
                if (ch2 != null && ch2.equals(ch3)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = this.zzb.hashCode();
        Character ch2 = this.zzc;
        return iHashCode ^ (ch2 == null ? 0 : ch2.hashCode());
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder("BaseEncoding.");
        sb.append(this.zzb);
        if (8 % this.zzb.zzb != 0) {
            if (this.zzc == null) {
                sb.append(".omitPadding()");
            } else {
                sb.append(".withPadChar('");
                sb.append(this.zzc);
                sb.append("')");
            }
        }
        return sb.toString();
    }

    zzch zza(zzcd zzcdVar, @CheckForNull Character ch2) {
        return new zzcg(zzcdVar, ch2);
    }

    @Override // com.google.android.gms.internal.fido.zzch
    void zzb(Appendable appendable, byte[] bArr, int i, int i2) throws IOException {
        int i3 = 0;
        zzap.zze(0, i2, bArr.length);
        while (i3 < i2) {
            zze(appendable, bArr, i3, Math.min(this.zzb.zzd, i2 - i3));
            i3 += this.zzb.zzd;
        }
    }

    @Override // com.google.android.gms.internal.fido.zzch
    final int zzc(int i) {
        zzcd zzcdVar = this.zzb;
        return zzcdVar.zzc * zzcj.zza(i, zzcdVar.zzd, RoundingMode.CEILING);
    }

    @Override // com.google.android.gms.internal.fido.zzch
    public final zzch zzd() {
        zzch zzchVarZza = this.zza;
        if (zzchVarZza == null) {
            zzcd zzcdVarZzb = this.zzb.zzb();
            zzchVarZza = zzcdVarZzb == this.zzb ? this : zza(zzcdVarZzb, this.zzc);
            this.zza = zzchVarZza;
        }
        return zzchVarZza;
    }

    final void zze(Appendable appendable, byte[] bArr, int i, int i2) throws IOException {
        zzap.zze(i, i + i2, bArr.length);
        int i3 = 0;
        zzap.zzc(i2 <= this.zzb.zzd);
        long j = 0;
        for (int i4 = 0; i4 < i2; i4++) {
            j = (j | ((long) (bArr[i + i4] & 255))) << 8;
        }
        int i5 = ((i2 + 1) * 8) - this.zzb.zzb;
        while (i3 < i2 * 8) {
            zzcd zzcdVar = this.zzb;
            appendable.append(zzcdVar.zza(zzcdVar.zza & ((int) (j >>> (i5 - i3)))));
            i3 += this.zzb.zzb;
        }
        if (this.zzc != null) {
            while (i3 < this.zzb.zzd * 8) {
                this.zzc.charValue();
                appendable.append('=');
                i3 += this.zzb.zzb;
            }
        }
    }

    zzcg(String str, String str2, @CheckForNull Character ch2) {
        this(new zzcd(str, str2.toCharArray()), ch2);
    }
}
