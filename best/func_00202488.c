struct Obj {
    char pad[0x48];
    virtual s32 v1(); virtual s32 v2(); virtual s32 v3(); virtual s32 v4(); virtual s32 v5(); virtual s32 v6();
    virtual s32 v7(); virtual s32 v8(); virtual s32 v9(); virtual s32 v10(); virtual s32 v11(); virtual s32 v12();
    virtual s32 v13(); virtual s32 v14(); virtual s32 v15(); virtual s32 v16(); virtual s32 v17(); virtual s32 v18();
    virtual s32 v19(); virtual s32 v20(); virtual s32 v21(); virtual s32 v22();
    virtual s32 Notify(s32 x);
};
extern "C" {
extern s8 D_00484318;
s32 func_00113730(void *, void *);
u32 func_00153FA8(void *);
void func_00194300(void *);
void func_00194390(void *, void *, void *);
s32 func_002FD2E0(s32, s32);
s32 func_0030F1D0(void);
void func_00202488(u8 *a0, u8 *a1) {
    if (D_00484318 == 0) {
        if (*(s32 *)(a0 + 0x3CC) < *(s32 *)(a0 + 0x328)) {
            if (a1) {
                s32 x = (*(s32 (**)(void))(*(u8 **)(a1 + 0x48) + 4))();
                s32 y = func_0030F1D0();
                if (func_002FD2E0(x, y)) {
                    if (*(s32 *)(a1 + 0x3CC) < *(s32 *)(a1 + 0x328)) {
                        u8 *q = a0 + 0x3C8;
                        func_00194300(q);
                        func_00194390(q, a1, a1);
                        ((Obj *)a0)->Notify(13);
                        *(s32 *)(a0 + 0x3CC) = *(s32 *)(a0 + 0x328) + func_00153FA8(a0) % 180 + 180;
                    }
                }
            }
        }
    }
    func_00113730(a0, a1);
}
}
