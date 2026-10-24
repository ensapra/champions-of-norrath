extern s32 SetVTLBRefillHandler(s32, void *);
extern void *SetVCommonHandler(s32, void *);
extern void func_001B8600(void);
extern s32 jtbl_004C006C[];
s32 func_001B80D0(s32 a) {
    jtbl_004C006C[0x523C / 4] = a;
    SetVTLBRefillHandler(1, func_001B8600);
    SetVTLBRefillHandler(2, func_001B8600);
    SetVTLBRefillHandler(3, func_001B8600);
    return a;
}
u32 func_001B8130(s32 n, u32 v) {
    u32 *slot;
    u32 old;
    if ((u32)(n - 1) >= 13) return 0xFFFFFFFF;
    slot = (u32 *)((u8 *)jtbl_004C006C + 0x5244) + n;
    old = *slot;
    *slot = v;
    if ((u32)(n - 1) < 3) SetVTLBRefillHandler(n, (u8 *)func_001B8600 + 0x240);
    else SetVCommonHandler(n, (u8 *)func_001B8600 + 0x240);
    return old;
}
