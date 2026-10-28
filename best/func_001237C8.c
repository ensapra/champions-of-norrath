s32 D_010C7650[];
u8 D_004C9CE0[];
s32 D_001BB6C0[];
s32 D_001BB6B8[];
s32 D_001BD8B8[];

s32 func_001169E8(void);
void func_0010B378(s32, void*);
s32 func_0014D49C(s32, s32);
s32 func_0010A5B8(s32);
s32 func_0010A4D0(s32, s32, s32);

s64 func_001237C8(s32 a, s64 i) {
    s32 n = (s32)i;
    if (func_001169E8() == 2) {
        func_0010B378(D_010C7650[n], D_004C9CE0);
        if (D_001BB6C0[0] != 0) {
            D_001BB6B8[0] = 0;
            func_0014D49C(a, 0);
            D_001BB6C0[0] = 0;
            if (func_0010A5B8(D_001BD8B8[0]) != 0) {
                if (D_001BD8B8[0] != 0) {
                    return func_0010A4D0(D_001BD8B8[0], 0, 0);
                }
            }
        }
    }
}
