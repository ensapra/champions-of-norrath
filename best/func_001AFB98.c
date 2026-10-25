typedef struct __attribute__((aligned(16))) { s32 a, b, c, d; } DmaT;
typedef struct { u32 w0; s32 w4; s32 w8; } Hdr;
extern s32 D_01107D60[];
extern s32 sceSifSetDma(void *, s32);
extern s32 isceSifSetDma(void *, s32);
extern void func_001AFE98(void *, s32);
s32 func_001AFB98(s32 x, u32 flags, Hdr *h, u32 size, s32 p, s32 q, s32 n) {
    DmaT t[2];
    s32 cnt;
    if (size - 16 > 0x60) return 0;
    cnt = 0;
    if (n > 0) {
        t[0].a = p;
        h->w0 = *(u8 *)h | (n << 8);
        t[0].b = q;
        h->w4 = q;
        cnt = 1;
        t[0].c = n; t[0].d = 0;
        if (flags & 4) func_001AFE98((void *)p, n);
    } else {
        h->w4 = 0;
        h->w0 = *(u8 *)h;
    }
    t[cnt].a = (s32)h; t[cnt].b = D_01107D60[0]; t[cnt].c = size;
    h->w8 = x;
    *(u8 *)h = size;
    t[cnt].d = 0x44;
    func_001AFE98(h, size);
    cnt++;
    if (flags & 1) return isceSifSetDma(t, cnt);
    return sceSifSetDma(t, cnt);
}
