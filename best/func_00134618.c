typedef struct { s32 x, y, w, h; } Rect;
extern s32 D_010CE2B0[];
extern s32 D_010CE2B4[];
extern u8 D_010CE2B8[];
extern s32 D_010CE2C0[];
extern s32 D_010CE2C8[];
extern s32 D_010CE2D0[];
extern u8 D_010CE2D8[];
extern s32 D_010CE2DC[];
extern s32 D_001C536C[];
s32 func_0011BA18();
s32 func_001107E8(s32, void *, s32, s32, void *);
s32 func_001104A8(s32, s32, s32);
s32 func_0010F6B0(s32, void *, s32);
s32 func_001105B0(s32, void *);
s32 func_0010FB78(s32, void *, s32);
void func_0010DE10(s32, s32);
void func_0014CD0C(s32, s32, void *, s32);
void func_00134B28(void *);
extern u8 func_00134828[], func_001348B8[], func_00134908[];

void func_00134618(void) {
    Rect r;
    s32 i, y, n;
    y = 0x2D;
    D_010CE2B0[0] = func_001107E8(func_0011BA18(0xB9), D_010CE2B8, 2, 0, D_010CE2D8);
    D_010CE2B4[0] = func_001104A8(D_010CE2B0[0], 0x6A, 3);
    r.x = 0x78;
    r.w = 0x1A4;
    r.h = 0x16;
    for (i = 0; i < 2; i++) {
        r.y = y;
        D_010CE2C0[i] = func_0010F6B0(D_010CE2B0[0], &r, func_0011BA18(0xBA + i));
        y += 0x16;
    }
    r.w = 0x17C;
    r.h = 0x19;
    r.x = 0;
    y = 0;
    n = 0;
    for (i = 0; i < 2; i++) {
        r.y = y;
        y += 0x19;
        D_010CE2C8[i] = func_001105B0(D_010CE2B4[0], &r);
        r.y = 0;
        D_010CE2D0[i] = func_0010FB78(D_010CE2C8[i], &r, func_0011BA18(0xBC + i));
        func_0014CD0C(D_010CE2D0[i], 0x58, func_00134828, n);
        func_0014CD0C(D_010CE2D0[i], 6, func_00134908, n);
        func_0014CD0C(D_010CE2D0[i], 7, func_001348B8, n++);
        func_0010DE10(D_010CE2D0[i], func_0011BA18(0xBE + i));
    }
    D_010CE2DC[0] = 0;
    D_001C536C[0] = -1;
    func_00134B28(0);
}
