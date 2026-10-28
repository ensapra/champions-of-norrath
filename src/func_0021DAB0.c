extern s32 D_0042C8A0[];
extern void func_00163830(void *, s32, s32);
extern void func_00163BA0(void *);
extern void func_00143BB0(void *, s32);
s32 func_0021DAB0(u8 *g, char *s) {
    char *p = s;
    s32 a, d; s16 b; s8 c, e;
    s += 4;
    a = *(s32 *)(s - 4);
    s += 2;
    b = *(s16 *)(s - 2);
    s += 1;
    *(s32 *)(g + 0x54) = a;
    *(s16 *)(g + 0x4C) = b;
    c = s[-1];
    s += 1;
    *(s8 *)(g + 0x58) = c;
    e = s[-1];
    s += 4;
    *(s8 *)(g + 0x59) = e;
    d = *(s32 *)(s - 4);
    *(s32 *)(g + 0x84) = d;
    if (d != 0) {
        func_00163830(g + 0x5C, *(s32 *)(*(u8 **)(g + 0x24) + 0x1C), 0x204);
        func_00163BA0(g + 0x5C);
        if (*(s16 *)(g + 0x4C) <= 0)
            *(s32 *)(g + 0xC) &= 0xFFEFFFFF;
    }
    func_00143BB0(g, D_0042C8A0[*(s8 *)(g + 0x59)]);
    return s - p;
}
