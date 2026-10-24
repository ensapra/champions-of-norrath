extern s32 D_010E4920[];

void func_00174658(s32 i) {
    D_010E4920[i] = 0;
}

typedef struct {
    u8 pad0[0xC];
    s16 a;
    u8 pad1[0xC];
    s16 b;
    u8 pad2[8];
} EntB;

extern EntB D_010EA1E8[];

s32 func_00174358(s32 i) {
    if (i == 0xFFFF) {
        return -1;
    }
    return D_010EA1E8[i].a;
}

s32 ovl_ntgui2_func_00174328(s32 i) {
    if (i == 0xFFFF) {
        return -1;
    }
    return D_010EA1E8[i].b;
}
