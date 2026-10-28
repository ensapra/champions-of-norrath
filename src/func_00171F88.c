typedef struct {
    s32 mode; u8 p4[0x14];
    s32 x18; s32 x1c; s32 x20; s32 x24; s32 x28; s32 x2c;
} Gs;
extern s32 D_001D0224[];
extern Gs D_001D0228[];

s32 func_00171F88(void) {
    D_001D0228[0].x2c = 0;
    if (D_001D0228[0].mode == 1) {
        return D_001D0224[0];
    }
    return 0;
}
