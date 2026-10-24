extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern void func_0011B968(s32);
extern void func_001403B8(void);
extern void func_00140690(s32, s32);
extern s32 func_00140020(void);
extern void func_0013FFF8(void);
extern s32 D_001C6828[];
extern s32 D_001C6834[];
extern s32 D_010D1248[];
extern s32 D_010D124C[];
extern s32 D_010D1250[];
s32 func_0013F6B0(u8 *o);
s32 func_0013F510(u8 *o);
s32 ovl_ntgui2_func_0013F708(u8 *o);

s32 func_0013F638(u8 *o) {
    s32 v;
    if (func_001404D0() != 0) return 0;
    v = func_001404F0();
    D_010D1248[0] = v;
    if (v < 0) {
        func_0011B968(D_001C6828[0]);
        D_001C6828[0] = 0;
        D_001C6834[0] = 0;
    }
    *(void **)(o + 0x18) = func_0013F6B0;
    return 0;
}

s32 func_0013F6B0(u8 *o) {
    if (func_001404D0() != 0) return 0;
    func_001403B8();
    func_00140690(1, D_010D1250[0]);
    *(void **)(o + 0x18) = ovl_ntgui2_func_0013F708;
    return 0;
}

s32 func_0013F488(u8 *o) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010D124C[0] > 0) {
        D_010D124C[0]--;
        return 0;
    }
    func_001403B8();
    func_00140690(0, D_010D1250[0]);
    *(void **)(o + 0x18) = func_0013F510;
    return 0;
}

void func_0013F460(void) {
    func_0013FFF8();
    D_010D124C[0] = 3;
}
