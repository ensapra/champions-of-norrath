void func_0014CE60(s32, s32, s32);

typedef struct {
    u8 pad0[0x5A0];
    s32 x5A0;
    s32 x5A4;
    s32 x5A8;
    s32 x5AC;
    s32 x5B0;
    u8 pad1[0x5D4 - 0x5B4];
    s32 x5D4;
    u8 pad2[0x980 - 0x5D8];
    s32 x980;
    s32 x984;
    u8 pad3[0xA10 - 0x988];
    s32 xA10;
    s32 xA14;
    s32 xA18;
    s32 xA1C;
} S_0016F754;

void func_0016F754(S_0016F754 *arg0) {
    s32 x;
    x = arg0->x5A0 + arg0->x5D4 + arg0->xA1C;
    func_0014CE60(arg0->x984, x, ((arg0->x5B0 - arg0->xA10) >> 1) + (arg0->x5A4 + arg0->x5D4));
    func_0014CE60(arg0->x980, x + (arg0->xA10 + arg0->xA1C), arg0->x5A4 + arg0->x5D4);
}
