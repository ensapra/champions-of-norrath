extern f32 D_00485934;
extern f32 D_0048593C;
extern f32 D_0048200C;
extern u8 D_00474630[];
void func_0024F5B8(s32, s32, f32);
u8 *func_0024A1F0(s32);
void func_0024A660(s32, u8 *, s32, s32, s32, s32, s32, s32);

void func_0024A390(s32 arg0, s32 arg1) {
    u8 *skel;
    s32 a1 = arg1 | 2;
    if (D_00485934 < D_0048200C) {
        return;
    }
    func_0024F5B8(0, a1, D_0048593C * D_00485934 * 0.46875f);
    skel = func_0024A1F0(arg0);
    if (skel != 0) {
        s32 v90 = *(s32 *)(skel + 0x90);
        s32 v40 = *(s32 *)(skel + 0x40);
        if (v90 != v40) {
            func_0024A660(0, D_00474630, a1 | 0x20, v40, v90 - v40,
                          *(s32 *)(skel + 0x44), *(s16 *)(skel + 0x48), *(s32 *)(skel + 0x4C));
        }
    }
}

typedef struct { u8 pad[0x40]; s8 x40; u8 p1[0xF]; s32 x50; s32 x54; s32 x58; s32 x5C; s32 x60; u8 p2[0x4C]; s32 xB0; } Slot;
typedef struct { Slot slot[8]; } Dummy;
extern u8 D_007DD290[];
void func_0024A5D0(s32 arg0) {
    u8 *base = D_007DD290 + arg0 * 0x1C4;
    s32 *cnt = (s32 *)(base + 0x1C0);
    if (*cnt < 8) {
        u8 *s = base + *cnt * 0x30;
        s[0x40] = 0;
        *(s32 *)(s + 0x60 + 0xC) = 2;
        *(s32 *)(s + 0x50) = 0;
        *(s32 *)(s + 0x58) = 0;
        *(s32 *)(s + 0x5C) = 0;
        *(s32 *)(s + 0x54) = 0;
        (*cnt)++;
    }
}
