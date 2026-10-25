extern u8 jtbl_004C006C[];
extern s32 func_0016E4A0(u8 *, u8 *, s32, s32);
extern s32 func_0014D2FC(s32, s32, s32, s32, s32);
extern void func_001AF710(void *);

s32 func_0016E3B4(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    if (*(s32 *)(arg0 + 0x920))
        return func_0016E4A0(arg0, arg1, arg2, arg3);
    switch (*(u16 *)arg1) {
    case 1: case 3: case 5: case 7: case 9: case 11: case 13: case 15:
        if (func_0014D2FC(*(s32 *)(arg0 + 0x918), arg2, arg3, *(s32 *)(arg1 + 0x14), *(s32 *)(arg1 + 0x18)))
            func_001AF710((u8 *)jtbl_004C006C + 0xBB14);
        return 1;
    case 2: case 4: case 6: case 8: case 10: case 12: case 14: {
        s32 v;
        if (func_0014D2FC(*(s32 *)(arg0 + 0x918), arg2, arg3, *(s32 *)(arg1 + 0x14), *(s32 *)(arg1 + 0x18))) {
            v = *(s32 *)(arg1 + 0x14) - *(s32 *)(arg0 + 0x5A0);
            *(s32 *)(arg0 + 0x920) = 1;
            *(s32 *)(arg0 + 0x924) = v;
        }
        return 1;
    }
    }
    return 0;
}
