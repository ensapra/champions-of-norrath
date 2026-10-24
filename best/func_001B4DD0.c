extern s32 jtbl_004C006C[];
extern u8 D_0110B3E8[];
s32 func_001A2660(void *, s32, s32);
s32 func_001B4DD0(void) {
    jtbl_004C006C[0x3F4C / 4] = -1;
    func_001A2660(D_0110B3E8, 0, 4);
    return 0;
}
extern s32 D_0110B3C0[];
extern u8 D_0110B1C0[];
s32 func_001B4C40();
s32 func_001B4D40();
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
u32 func_001B5218(s32 a) {
    if (func_001B4C40() < 0) return 0xFFFF0000;
    if (func_001B4D40() != 0) return 0xFFFEFFFC;
    D_0110B3C0[0] = a;
    if (func_001B08B0(D_0110B1C0, 8, 0, D_0110B3C0, 4, D_0110B3C0, 4, 0, 0) < 0) return 0xFFFEFFFF;
    return D_0110B3C0[0];
}
s32 func_001B5FA0(s32 *d,s32 *s,u32 n){u32 i=0;n>>=2;if(n)do{ s32 v=*s; i++; s++; *d=v; d++;}while(i<n);return 0;}
