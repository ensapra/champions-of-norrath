typedef struct { s32 w, y, h, z; } Rc;
extern s32 D_001BB6BC[];
extern s32 D_010C5120[], D_010C5128[], D_010C5134[];
extern s32 func_0011BA18(s32);
extern s32 func_00110770(s32, s32, s32, s32);
extern void func_001A42B8(void *, s32);
extern void func_001A3D78(void *, s32, void *);
extern s32 func_0010F6B0(s32, void *, void *);
extern void func_0011EAA8(void);
void func_0011E438(void) {
    Rc r;
    char a[16];
    char b[0x80];
    char *bp;
    s32 *p;
    s32 y, i;
    D_010C5120[0] = func_00110770(func_0011BA18(0x13B), 0, 0, 0);
    r.w = 0x78; r.h = 0x1A4; r.z = 0x16;
    if (D_001BB6BC[0] != 0) {
        func_001A42B8(a, func_0011BA18(0xE));
    } else {
        func_001A42B8(a, func_0011BA18(0xD));
    }
    for (i = 0, p = D_010C5128, bp = b, y = 0x2D; i < 3; i++) {
        r.y = y;
        func_001A3D78(bp, func_0011BA18(0x13C + i), a);
        y += 0x16;
        *p++ = func_0010F6B0(D_010C5120[0], &r, bp);
    }
    D_010C5134[0] = 0;
    func_0011EAA8();
}
