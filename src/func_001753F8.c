typedef struct { u8 pad[0x18]; s16 f; u8 pad2[0xE]; } T;
extern s32 D_010E4920[];
extern T D_010EA1E0[];

s16 func_001753F8(s32 i) {
    if (D_010E4920[i] == 0) return 0;
    return D_010EA1E0[i].f;
}
