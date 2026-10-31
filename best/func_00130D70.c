/* identical to func_00129B00 (matched), with its names changed by decompdecomp */
extern s32 D_010CB038[];
extern s32 D_010CB040[];
extern u8 jtbl_004C006C[];
extern s32 D_001BB6B4[];
extern s32 D_001BB6C4[];
extern s32 D_001BB720[];
extern s32 D_001C4D74[];

extern void func_0014CE44(s32, s32, s32);
extern void func_00129D10(s32, s32);
extern void func_00129B30(s64);
extern void func_0010B378(s32, void *, s32);
extern s32 func_001167E0(void);
extern void func_0013BBD0(void);

void func_00130D70(s32 arg0, u8 *arg1) {
    func_0014CE44(D_010CB038[*(s32 *)(arg1 + 0x80)], 0x10, 6);
}

void func_00129CA8(s32 arg0, u8 *arg1) {
    if (*(s32 *)(arg1 + 0x1C) >= 3) {
        s32 n = *(s32 *)(arg1 + 0x80);
        func_00129D10(D_010CB038[n], n);
        *(s32 *)(arg1 + 0xAC) = 0;
    }
}

void func_00129DA0(s32 arg0, s64 arg1) {
    s32 n = (s32)arg1;
    func_0010B378(D_010CB038[n], jtbl_004C006C + 0xA214, 0);
}

void func_00129DD8(s32 arg0, s64 arg1) {
    s32 n = (s32)arg1;
    if (func_001167E0() == 2) {
        s32 v = D_010CB040[n];
        D_001C4D74[0] = n;
        D_001BB6C4[0] = v;
        func_0010B378(D_010CB038[n], D_001BB720, v);
        func_0013BBD0();
        if (D_001BB6B4[0] != 0) {
            func_00129B30(n);
        }
    }
}
