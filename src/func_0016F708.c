/* identical to func_0016F6BC (matched), with its names changed by decompdecomp */
extern u8 D_001C98F8[];
void func_0014D370(s32, s32);
void func_0016FB0C(void *);
void func_0014CE60(s32, s32, s32);
void func_0014CF0C(s32, s32, s32);

typedef struct {
    u8 pad0[0x5A0];
    s32 x5A0;
    s32 x5A4;
    s32 x5A8;
    s32 x5AC;
    s32 x5B0;
    u8 pad1[0x5D4 - 0x5B4];
    s32 x5D4;
    u8 pad2[0x918 - 0x5D8];
    s32 x918;
    u8 pad3[0x980 - 0x91C];
    s32 x980;
    s32 x984;
    s32 x988;
    s32 x98C;
    u8 x990[0xA10 - 0x990];
    s32 xA10;
    s32 xA14;
    s32 xA18;
    s32 xA1C;
} S_0016F754;

void func_0016F65C(S_0016F754 *arg0) {
    s32 val;
    u8 *p = D_001C98F8;
    p = *(u8 **)(p + 0x5E8);
    val = arg0->x918;
    ((void (*)(void *))p)(arg0);
    if (val != arg0->x918) {
        arg0->x988 = 1;
        func_0016FB0C(arg0->x990);
    }
}

void func_0016F708(S_0016F754 *arg0, s32 arg1) {
    u8 *p = D_001C98F8;
    p = *(u8 **)(p + 0x5C0);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D370(arg0->x980, arg1);
    func_0014D370(arg0->x984, arg1);
}

void func_0016F754(S_0016F754 *arg0) {
    s32 x;
    x = arg0->x5A0 + arg0->x5D4 + arg0->xA1C;
    func_0014CE60(arg0->x984, x, arg0->x5A4 + arg0->x5D4 + ((arg0->x5B0 - arg0->xA10) >> 1));
    func_0014CE60(arg0->x980, x + (arg0->xA10 + arg0->xA1C), arg0->x5A4 + arg0->x5D4);
}

void func_0016F7D8(S_0016F754 *arg0) {
    func_0014CF0C(arg0->x984, arg0->xA10, arg0->xA10);
    func_0014CF0C(arg0->x980, arg0->x5AC - (arg0->xA1C * 2 + arg0->xA10), arg0->x5B0);
}
