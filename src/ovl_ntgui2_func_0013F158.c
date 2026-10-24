extern s32 D_010D1230[];
extern s32 D_010D1234[];
extern s32 D_010D1238[];
extern s32 D_010D123C[];
extern s32 D_010D1240[];
extern s32 D_010D1224[];

void ovl_ntgui2_func_0013F158(s32 a) { D_010D1238[0] = a; }

void func_0013F128(void) {
    D_010D1230[0] = 0;
    D_010D1234[0] = 0;
    D_010D1238[0] = 0;
    D_010D123C[0] = -1;
    D_010D1240[0] = -1;
}

void func_00140010(void *);

void func_0013F0F0(void *arg0) {
    void (*fn)(s32);
    func_00140010(arg0);
    fn = *(void (**)(s32))((u8 *)arg0 + 8);
    if (fn != NULL)
        fn(D_010D1224[0]);
}
