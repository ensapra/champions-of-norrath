typedef struct Big { s32 k; s32 maxwds; s32 sign; s32 wds2; s32 wds; u32 x[1]; } Big;
typedef union { u64 l; struct { u32 d1; u32 d0; } w; } DU;
extern s32 func_001AAB70(u32);

u64 func_001AB418(Big *a, s32 *e) {
    u32 *xa, *xa0;
    u32 y, z, w;
    s32 k;
    DU d;
    xa0 = a->x;
    xa = xa0 + a->wds;
    y = *--xa;
    k = func_001AAB70(y);
    *e = 32 - k;
    if (k < 11) {
        d.w.d0 = 0x3FF00000 | (y >> (11 - k));
        w = xa > xa0 ? *--xa : 0;
        d.w.d1 = (y << (21 + k)) | (w >> (11 - k));
        goto ret_d;
    }
    z = xa > xa0 ? *--xa : 0;
    if ((k -= 11) != 0) {
        d.w.d0 = 0x3FF00000 | (y << k) | (z >> (32 - k));
        y = xa > xa0 ? *--xa : 0;
        d.w.d1 = (z << k) | (y >> (32 - k));
    } else {
        d.w.d0 = 0x3FF00000 | y;
        d.w.d1 = z;
    }
ret_d:
    return d.l;
}
