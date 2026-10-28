extern s32 D_010C2B98[];
extern s32 D_010C2B94[];
extern s32 D_010C2B88[];
extern s32 D_001BD960[];
extern s32 D_001BD964[];
typedef struct { u8 pad[0xA8]; void (*cb0)(void); void (*cb1)(void); void (*cb2)(void); u8 pad2[0xC]; } Req;
s32 func_00104F30(s32);
void func_001050A8(Req *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00105190(Req *);
void func_0014D240(s32);
void func_00105090(void);
void func_00117398(void);
void func_00117510(void);

void func_00117538(void) {
    Req r;
    if ((u32)(D_010C2B98[0] - 2) >= 2) {
        if (D_010C2B94[0] != 0) {
            func_0014D240(D_010C2B94[0]);
        }
        func_00104F30(D_010C2B88[0]);
        D_010C2B98[0] = 3;
        func_001050A8(&r, D_010C2B88[0], 9, 0, 0xF, 0, D_001BD960[0], D_001BD964[0], 0, 0);
        r.cb0 = func_00105090;
        r.cb1 = func_00117510;
        r.cb2 = func_00117398;
        func_00105190(&r);
    }
}
