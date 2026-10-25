void func_00159AE0(void *, s32, f32 *);

typedef struct {
    s32 pad0;
    s32 count;
    s32 pad8;
    s32 padC;
} Hdr;

typedef struct {
    s16 x, y, z, w;
} Key;

void func_0016CD68(char *arg0, s32 arg1, s32 idx, void *dst, f32 *out) {
    Hdr *h = (Hdr *)(arg0 + *(u8 *)(arg0 + 0x24) * 16);
    Key *k;
    f32 zero[3];
    f32 v[3];
    f32 *p;

    k = (Key *)(h + 1);
    k = (Key *)((Hdr *)k + 1);
    k += idx;
    if (idx >= h->count) {
        zero[2] = zero[1] = zero[0] = 0.0f;
        func_00159AE0(dst, arg1, zero);
        *out = 0.0f;
        return;
    }
    k = (Key *)((char *)k + (idx / 45) * 16);
    p = v;
    p[0] = k->x * 0.0625f;
    p[1] = k->y * 0.0625f;
    p[2] = k->z * 0.0625f;
    func_00159AE0(dst, arg1, p);
    *out = k->w;
}
