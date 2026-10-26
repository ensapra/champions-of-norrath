typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; } SB0BAB0;
extern SB0BAB0 D_B0BAB0;
extern s32 D_B0BAA4[];

void func_0017EA70(s32, s32, s32);
void func_0017EAB8(s32, s32);
void func_0017EB08(s32, s32);

void func_00101DD4(void) {
    s32 v5 = 0x1E;
    s32 v6 = 3;
    switch (D_B0BAB0.f8) {
        case 0: v5 = 0x14; break;
        case 2: v5 = 0x2D; break;
        default: break;
    }
    switch (D_B0BAB0.fC) {
        case 0: v6 = 2; break;
        case 1: v6 = 3; break;
        case 2: v6 = 5; break;
        default: break;
    }
    func_0017EA70(D_B0BAA4[0], v5, v6);
    func_0017EAB8(D_B0BAA4[0], 1);
    func_0017EB08(D_B0BAA4[0], D_B0BAB0.f4);
}
