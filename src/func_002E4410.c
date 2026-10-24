extern s32 D_00446090[];
extern char D_0047BD90[];
extern u8 D_008E83D8[];

extern s32 func_002E4458(s32, s32, s32, s32, void *);

s64 func_002E4410(void) {
    if (D_00446090[0] > 0) {
        func_002D70D0(D_0047BD90);
    }
    return func_002E4458(0, 0, 0, 6, D_008E83D8);
}
