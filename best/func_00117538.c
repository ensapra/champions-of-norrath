extern s32 D_010C2B98[];
extern s32 D_010C2B94[];
extern s32 D_010C2B88[];
extern s32 D_001BD960[];
extern s32 D_001BD964[];
s32 func_00104F30(s32);
s32 func_001050A8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00105190(void *, void *);
s32 func_0014D240(s32);
void func_00105090(void);
void func_00117398(void);
void func_00117510(void);

void func_00117538(void) {
    s32 buf[48];
    void *cb;
    if ((u32)(D_010C2B98[0] - 2) >= 2) {
        if (D_010C2B94[0] != 0) {
            func_0014D240(D_010C2B94[0]);
        }
        func_00104F30(D_010C2B88[0]);
        D_010C2B98[0] = 3;
        func_001050A8(buf, D_010C2B88[0], 9, 0, 0xF, 0, D_001BD960[0], D_001BD964[0], 0, 0);
        cb = func_00117398;
        buf[42] = (s32)func_00105090;
        buf[43] = (s32)func_00117510;
        buf[44] = (s32)cb;
        func_00105190(buf, cb);
    }
}
