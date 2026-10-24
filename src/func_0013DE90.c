extern s32 D_010CFC68[];
extern s32 D_010CFC6C[];
extern s32 D_010CFC78[];
extern void func_001A42B8(void *, s32);

void func_0013DE70(s32 a) {
    D_010CFC6C[0] = a;
}

void func_0013DE80(s32 a) {
    D_010CFC68[0] = a;
}

void func_0013DE90(s32 a) {
    func_001A42B8(D_010CFC78, a);
}

extern u8 jtbl_004C006C[];
s64 func_001B6DC0(void);
s32 func_001B6A60(void *);
s32 func_001B68D0(s64);

s32 func_001B70E8(u32 a) {
    u8 *p = (u8 *)((a >> 10) << 6);
    s64 t;
    s32 f;
    if ((s32)a < 0 || (a & 1023) != *(s32 *)(p + 8))
        return 0x80008002;
    if (*(u32 *)(jtbl_004C006C + 0x4EE4 + 0x1C) == a)
        return 0x80000010;
    if (*(s32 *)(p + 12) & 1)
        return 1;
    t = func_001B6DC0();
    *(s64 *)(p + 16) = t;
    f = *(s32 *)(p + 12) | 1;
    *(s32 *)(p + 12) = f;
    if (f & 2) {
        func_001B6A60(p);
        func_001B68D0(t);
    }
    return 0;
}
