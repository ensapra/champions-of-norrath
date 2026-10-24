typedef struct { u8 pad[0x20]; s16 x20; u8 pad2[6]; } EntC;
extern EntC D_010EA1E0[];
extern u8 func_001CE218[];
typedef struct {
    s32 mode; u8 p4[0x14];
    s32 x18; s32 x1c; s32 x20; s32 x24; s32 x28; s32 x2c;
} Gs;
#define GS ((Gs *)(func_001CE218 + 0x2010))
s32 func_00171A70(s32);

s32 func_001742F8(s32 i) {
    if (i == 0xFFFF) {
        return -1;
    }
    return D_010EA1E0[i].x20;
}

s32 func_00171F88(void) {
    GS->x2c = 0;
    if (GS->mode == 1) {
        return *(s32 *)(func_001CE218 + 0x200C);
    }
    return 0;
}

void func_00171FB8(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 v = 0;
    if (GS->mode == 1) {
        if (func_00171A70(0) == 0) {
            v = GS->x28;
        } else {
            v = GS->x28 == 0;
        }
    }
    *arg0 = (GS->x20 - (GS->x18 >> 1)) * 16;
    *arg1 = (GS->x24 - (GS->x1c >> 1)) * 16 + v * 8;
    *arg2 = v;
    GS->x2c = 1;
}
