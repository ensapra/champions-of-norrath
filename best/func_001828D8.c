typedef struct {
    s16 id;
    s16 f2;
    u8 f4, f5, f6, f7;
    s16 f8;
    u8 fA, fB, fC, fD;
    u8 fE, fF;
    char pad[0x410 - 0x10];
} Entry1828;
typedef struct { char hdr[0x400]; Entry1828 e[64]; } Mgr1828;
extern Mgr1828 D_00780B00;
extern s32 D_00484310;

s16 func_001828D8(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 f) {
    s32 i;

    for (i = 0; i < 64; i++) {
        if (D_00780B00.e[i].id == 0)
            break;
    }
    if (i == 64)
        return 0;
    D_00780B00.e[i].fA = a3;
    D_00780B00.e[i].fB = a4;
    D_00780B00.e[i].fC = a5;
    D_00780B00.e[i].fD = a6;
    D_00780B00.e[i].f8 = f * 60.0f;
    D_00780B00.e[i].id = (D_00484310++ << 8) | i;
    D_00780B00.e[i].fF = a1 >> 2;
    D_00780B00.e[i].f6 = a0;
    D_00780B00.e[i].f7 = a2;
    D_00780B00.e[i].f5 = 0;
    D_00780B00.e[i].f4 = 0;
    D_00780B00.e[i].f2 = 0;
    return D_00780B00.e[i].id;
}
