typedef struct {
    u8 pad_00[0x10];
    u16 ox;
    u16 pad_12;
    u16 oy;
    u8 pad_16[0xA];
    s64 : 32;
    s64 y0 : 11;
    s64 : 5;
    s64 y1 : 11;
    s64 : 5;
} Rec;

s32 D_0047FC20;
s32 D_0047FC34;
s32 D_0047FC38;
s32 D_0047FC3C;
s32 D_0047FC48;

void func_00150AA4(u8 *arg0) {
    s32 v = *(s32 *)(arg0 + 0x4EC);
    s32 t = ((0x800 - (D_0047FC34 >> 1)) << 4) - *(s32 *)(arg0 + 0x82C);
    u8 *p = arg0 + v * 0xA0;
    s32 f20 = D_0047FC20;
    Rec *q = (Rec *)(p + 0x690);
    s32 f8;
    u16 w;

    if (D_0047FC48) q = (Rec *)(p + 0x640);
    if (f20 != 0) t += 8;
    q->oy = t;
    w = t;
    *(u16 *)(arg0 + v * 0x50 + 0x794) = w;
    f8 = f20 << 3;
    q->y0 = (*(s32 *)(arg0 + 0x834) + f8) >> 4;
    q->y1 = ((*(s32 *)(arg0 + 0x83C) + f8 + 7) >> 4) - 1;
    *(s32 *)(arg0 + 0x85C) = D_0047FC38;
    *(s32 *)(arg0 + 0x860) = D_0047FC3C;
    D_0047FC38 = q->ox;
    D_0047FC3C = q->oy;
}
