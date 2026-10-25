struct Vec3 { f32 x, y, z; Vec3() {} };
extern "C" {
extern void func_001411F0(void *, Vec3 *, s32, s32);
extern void func_00143830(void *);
extern s32 func_00165DC0(char *, char *);
extern void func_00194390(void *, s32, s32, s32);
extern void func_0024D308(s32, void *, f32);
extern void ovl_ntgui2_func_0013D230(void *, Vec3, s32, s32, s32);
extern char D_0044E3A0[], D_0046EF48[], D_00485278[];
extern f32 D_00481068;
extern s32 D_004844A4;

void func_001FD7E0(char *t, Vec3 pos, s16 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    char *sub = t + 0x144;
    func_001411F0(t, &pos, 0, 0);
    Vec3 q = pos;
    *(char **)(t + 0x48) = D_0044E3A0;
    *(s32 *)(t + 0x50) = 0;
    *(s32 *)(t + 0x54) = 0;
    *(s8 *)(sub + 9) = 0;
    *(Vec3 *)(t + 0x174) = q;
    *(f32 *)(sub + 0x28) = D_00481068;
    *(s16 *)(sub + 0x12) = 0x73;
    *(s16 *)(sub + 0x14) = 0xF;
    *(f32 *)(sub + 0x20) = D_00481068;
    *(s16 *)(sub + 0xA) = 0x73;
    *(s16 *)(sub + 0xC) = 0xF;
    *(f32 *)(sub + 0x24) = 156.0f;
    *(s16 *)(sub + 0x18) = -0x20;
    *(f32 *)(sub + 0x1C) = 156.0f;
    *(s32 *)(sub + 0x2C) = 0;
    *(s16 *)(sub + 0xE) = 0;
    *(s16 *)(sub + 0x10) = -0x20;
    *(s16 *)(sub + 0x16) = 0;
    *(s8 *)(sub + 8) = 0;
    ovl_ntgui2_func_0013D230(sub, q, 0x73, 0xF, -0x20);
    *(s32 *)(t + 0x188) = 0;
    *(s32 *)(t + 0x18C) = a6;
    *(s32 *)(t + 0xC) |= 1;
    *(s16 *)(t + 0x38) = a2;
    *(s32 *)(t + 0x58) = D_004844A4;
    *(s32 *)(t + 0x4C) = a4;
    *(f32 *)(t + 0x1C) = 24.0f;
    *(s8 *)(t + 0x180) = a5;
    if (a3 != 0) func_00194390(t + 0x188, a3, a3, D_004844A4);
    *(s8 *)(t + 0x182) = 4;
    *(s32 *)(t + 0x5C) = 0x15E;
    *(s8 *)(t + 0x181) = 0;
    func_00143830(t);
    func_0024D308(func_00165DC0(D_00485278, D_0046EF48), t, 1.0f);
}
}
