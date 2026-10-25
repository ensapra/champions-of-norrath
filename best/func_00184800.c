typedef struct { char pad0[0x404]; s32 f404; char pad1[0x5BD0 - 0x408]; s32 f5bd0; char pad2[0x5C60 - 0x5BD4]; s32 f5c60; } St;
extern char func_001D1C80[];
extern char func_001D7EB0[];
#define S ((St *)(func_001D1C80 + 0x6C0))
s32 func_001864E0(s32, s32);
s32 func_001864F8(s32, s32);
s32 func_00186A80(s32);
s32 func_001874D0(s32, void *);
s32 func_0019706C();
s32 func_001973D0(s32, void *);
s32 func_001982EC(s32, s32);
s32 func_0019B1B0();
s64 func_00184800(s32 a, s32 b, s32 c) {
    if (S->f5c60 != 0) {
        if (S->f404 != 0) {
            func_001864E0(0, 0);
            func_001864F8(a, 0);
            func_001982EC(-b, -c);
        } else {
            func_001864E0(b, c);
        }
        if (func_0019706C() == 0) {
            func_00186A80(a);
        } else {
            func_001973D0(a, (char *)S + 0x470 + S->f5bd0 * 0xE90);
        }
        if (S->f404 == 0) {
            func_0019B1B0();
            return func_001874D0(a, func_001D7EB0 + 0x100);
        }
    }
}
