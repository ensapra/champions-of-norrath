extern s32 sceSifDmaStat_2(s32);
extern s32 sceSifSetDma_2(void *, s32);
extern s32 D_008E59C0[];
s32 func_002E03D0(s32 a, s32 b, s32 c, s32 mode) {
    s32 result;
    if (mode == 0) return -1;
    D_008E59C0[0] = a; D_008E59C0[1] = b; D_008E59C0[2] = c; D_008E59C0[3] = 0;
    result = sceSifSetDma_2(D_008E59C0, 1);
    if (result == 0) return -1;
    if (mode == 1) {
        while (sceSifDmaStat_2(result) >= 0) ;
    }
    return 0;
}

extern s32 FlushCache_2(s32);
extern s32 func_002D70D0(void *);
extern s32 func_002D7908(s32);
extern s32 func_002D80A0(void *, s32, s32);
extern s32 D_00446020[], D_00446024[];
extern char D_0047B9A8[];
extern s32 D_008E5A40[];
s32 func_002E0320(void) {
    s32 i;
    func_002D7908(0);
    for (;;) {
        if (func_002D80A0(D_008E5A40, 0x80000701, 0) < 0) {
            func_002D70D0(D_0047B9A8);
            return -1;
        }
        for (i = 10000; i != -1; i--) ;
        if (D_008E5A40[9] != 0) break;
    }
    D_00446020[0] = 0;
    D_00446024[0] = 0;
    FlushCache_2(0);
    return 0;
}

extern s32 GetThreadId_2(void);
extern s32 func_002D84A8(void *, s32);
extern s32 func_002D8540(void *, s32, void *, void *, s32, s32, void *);
extern s32 func_002D8958(void *);
extern void func_002E0A98(void);
extern s32 D_008E6A80[], D_008E6AC0[], D_008E6AD8[];
void func_002E0A28(void) {
    func_002D7908(0);
    func_002D84A8(D_008E6AC0, GetThreadId_2());
    func_002D8540(D_008E6AD8, 0x80000704, func_002E0A98, D_008E6A80, 0, 0, D_008E6AC0);
    func_002D8958(D_008E6AC0);
}
