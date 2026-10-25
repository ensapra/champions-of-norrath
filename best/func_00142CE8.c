extern u8 *D_0048689C;
extern u8 *D_004868A0;
typedef struct { u16 h; u16 pad; s32 a; s32 b; } Hdr;
s32 func_00142880(void *, s32, void *, s32, s32 *, s32 *);
void func_00301FFC(void *, void *, s32);

s32 func_00142CE8(u8 *arg0, s32 arg1) {
    Hdr hdr;
    u8 small[0x1388];
    u8 big[0xCB20];
    u8 *out;
    s32 n, len, i;
    u8 *p;
    out = arg0 + 8;
    i = -1;
    for (;;) {
        i++;
        D_0048689C = small;
        D_004868A0 = small;
        hdr.b = 0;
        hdr.a = 0;
        n = func_00142880(big, 0xCB20, &hdr, i, &hdr.a, &hdr.b);
        if (n == -1) continue;
        if (n > 0xCB20) return -2;
        len = D_004868A0 - D_0048689C;
        if (len >= 0x1388) return -2;
        if (arg1 >= n + len + 8 || hdr.a >= i) {
            if (hdr.a != 0 && i < hdr.a) return -1;
            break;
        }
    }
    len = D_004868A0 - D_0048689C;
    func_00301FFC(out, big, n);
    func_00301FFC(out + n, small, len);
    p = arg0 + n + 8;
    *(u16 *)arg0 = hdr.h;
    *(u16 *)(arg0 + 2) = 1;
    *(s32 *)(arg0 + 4) = n + 8;
    D_0048689C = p;
    p += len;
    D_004868A0 = p;
    while (((u32)p - (u32)arg0) & 3) {
        p++;
        D_004868A0 = p;
    }
    return p - arg0;
}
