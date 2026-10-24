extern void *SetVTLBRefillHandler(s32, void *);
extern void *SetVCommonHandler(s32, void *);
extern u8 func_001B8600[];
extern s32 jtbl_004C006C[];
u32 func_001B8130(s32 n, u32 v) {
    u32 *slot;
    u32 old;
    if ((u32)(n - 1) >= 13) return 0xFFFFFFFF;
    slot = (u32 *)((u8 *)jtbl_004C006C + 0x5244) + n;
    old = *slot;
    *slot = v;
    if ((u32)(n - 1) < 3) SetVTLBRefillHandler(n, func_001B8600 + 0x240);
    else SetVCommonHandler(n, func_001B8600 + 0x240);
    return old;
}

extern u8 func_01000000[];

s32 func_00140500(u8 *dst) {
    u8 *base = func_01000000 + 0xD1340;
    s32 i;
    for (i = 0; i < 6; i++) {
        dst[i] = base[0x14 + i];
    }
    return *(s32 *)base;
}

s32 func_001404F0(void) {
    return *(s32 *)(func_01000000 + 0xD1340);
}

void func_001B0AA8(void *);

void func_001404D0(void) {
    func_001B0AA8(func_01000000 + 0xD12C0);
}
