/* identical to func_00133E20 (matched), with its names changed by decompdecomp */
/* ---- func_00132FE0 ---- */
extern s32 D_001BB6C4[];
extern s32 D_001BB710[];
extern s32 D_010CDB60[];
extern s32 D_010CDB70[];
extern void func_0010B378(s32, void *);
extern void func_0013BBD0(void);

void func_00132FE0(s32 arg0, s64 arg1) {
    s32 n = (s32)arg1;
    s32 v = D_010CDB60[n];
    D_001BB6C4[0] = v;
    func_0010B378(D_010CDB70[n], D_001BB710);
    func_0013BBD0();
}

/* ---- func_00133E70 ---- */
extern u8 D_004CAD40[];
extern s32 D_010CDB30[];
extern s32 D_010CDB34[];
extern s32 D_010CDB7C[];
extern s32 D_010CDB80[];
extern u8 D_010CDB88[];
extern u8 D_010CDDE0[];
extern u8 D_010CE038[];
extern s32 D_010CE290[];
extern s32 D_010CE2A8[];
extern s32 func_001107E8(s32, void *, s32, void *, void *);
extern s32 func_0011BA18(s32);
extern void func_0011E420(s32, s32, s32, s32);
extern void func_0011CEF0(s32, s32, s32);

void func_00133E70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 d = D_010CE2A8[0];
    if (d >= 0 && d < 7) {
        s32 r = func_001107E8(func_0011BA18(0xC0), D_010CDB34, 3, D_010CDB7C, D_010CDB80);
        u8 b = D_004CAD40[0];
        D_010CE038[0] = b;
        D_010CDB30[0] = r;
        D_010CE290[0] = 0;
        D_010CDB88[0] = b;
        D_010CDDE0[0] = b;
    }
    func_0011E420(D_010CDB7C[0], D_010CDB80[0], arg2, arg3);
    func_0011CEF0(D_010CDB30[0], d, 5);
}

/* ---- func_00133D88 ---- */
extern s32 D_001BB6C0[];
extern s32 D_001C5334[];
extern u8 jtbl_004C006C[];
extern s32 func_001169E8(void);
extern void func_0014D49C(s32, s32);

void func_00133D88(s32 arg0, s64 arg1) {
    s32 n = (s32)arg1;
    if (func_001169E8() == 2) {
        func_0010B378(D_010CDB70[n], jtbl_004C006C + 0xACC4);
        if (D_001BB6C0[0] != 0 && D_001C5334[0] == 0) {
            func_0014D49C(arg0, 0);
            D_001BB6C0[0] = 0;
        }
        D_001C5334[0] = 0;
    }
}

/* ---- func_00133FE8 ---- */
extern void func_0014D240(s32);
extern void func_0014D270(s32);

void func_00133FE8(s32 a) {
    if (a != 0) {
        func_0014D240(D_010CDB30[0]);
        return;
    }
    func_0014D270(D_010CDB30[0]);
}
