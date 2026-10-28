extern s32 func_00113DD0(s32);
extern s32 func_0011C6C8(void);
extern s32 func_0011C6F0(void);
extern void func_00138990(s32);
extern void func_0014CE84(s32, s32 *, s32 *);
extern s32 D_001BD934[], D_001BD944[];
extern s32 D_010C2A60[], D_010C2AC8[], D_010C2B0C[], D_010C2B10[], D_010C2B1C[], D_010C2B20[];
#define A D_001BD934[0]
#define B D_001BD944[0]

s32 func_00114560(void) {
    s32 sp[2];
    s32 t;
    switch (D_010C2A60[0]) {
    case 0:
        t = func_00113DD0(A);
        if (t) func_0014CE84(t, &sp[0], &sp[1]);
        if ((func_0011C6C8() & 0x4000) && !(func_0011C6F0() & 0x4000)) {
            if (D_010C2B0C[0] > D_010C2AC8[0]) {
                if (B < sp[1]) {
                    D_010C2B20[0] = 1;
                    D_010C2B1C[0] -= B;
                    D_010C2B10[0] = 1;
                    return 1;
                }
            }
            t = func_00113DD0(A + 1);
            if (t) func_00138990(t);
            return 1;
        }
        if (!(func_0011C6C8() & 0x1000)) return 0;
        if (func_0011C6F0() & 0x1000) return 0;
        if (D_010C2B0C[0] > D_010C2AC8[0]) {
            if (sp[1] <= 0) {
                D_010C2B10[0] = 1;
                D_010C2B1C[0] += B;
                D_010C2B20[0] = 1;
                return 1;
            }
        }
        t = func_00113DD0(A - 1);
        if (t) func_00138990(t);
        return 1;
    default:
        return 1;
    case 1:
        return 0;
    case 2:
        return 0;
    case 3:
        return 0;
    }
}
