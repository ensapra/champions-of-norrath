extern s32 func_001404D0(void);
extern s32 func_0013B6F0(void *, s32);
extern void func_0013B738(void *);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern void func_001377D8(void);
extern s32 D_001C6840[];
extern s32 D_001C686C[];
extern s32 D_001BAC84[];
extern s32 D_001BAC80[];
extern s32 D_001BB6B0[];
extern s32 D_001BB6C4[];
extern u8 D_004CAE68[];

s32 func_001377E8(void) {
    s32 *out;
    if (func_001404D0() != 0) return 0;
    {
        s32 v = D_001C6840[0];
        s32 r;
        void *p;
        if (v >= 0) {
            if (v >= 3) {
                if (v == 3) {
                    if ((D_001BAC84[0] & 6) == 6) {
                        p = D_004CAE68;
                        r = func_0013B6F0(p, -1);
                        if (r == 1) {
                            if (!(D_001BAC80[0] & 1)) {
                                func_0013B738(p);
                                func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x49), func_001377D8, D_001BB6C4[0]);
                                D_001BB6B0[0] = r;
                            }
                        }
                    }
                }
            }
        }
    }
    out = D_001C686C;
    *out = -1;
    return 0;
}
