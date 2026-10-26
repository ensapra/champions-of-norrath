typedef struct { s32 f0, f4, f8, fC; } Ent;
typedef struct { s32 a0, a4, a8, aC, a10, a14; Ent e[2]; s32 a38, cur; } Q;
extern Q D_00790FF0[];
extern u8 D_01FC0000[];
extern char D_00464328[];
extern char D_00464268[];
s8 D_004866CC;
s32 D_004844A8;
s32 D_004843E4;
s32 D_0048446C;
s32 D_00486A5C;
s32 D_00484470;
s32 D_0048440C;
s32 D_00486A38;
s8 D_004865F8;
volatile s32 D_00484438;
volatile u8 D_0048443C;
s32 D_00486A60;
void func_0015FAA0(void);
void func_002D1F38(s32, s32);
void ovl_ntgui2_func_00172690(void);
void func_001913A0(s32);
void func_002D70D0(char *, char *, s32);
s32 WaitSema_2(s32);
s32 PollSema_2(s32);
void func_002DD640(void);
void func_002DD698(void);
void func_0018FE00(s32, s32, s32);
#define S D_00790FF0[0]

void func_00190A48(s32 arg) {
    s32 i, x, v16, v17, v18, idx;
    s32 *p;
    if (!D_004866CC) {
        u8 *b = D_01FC0000;
        for (i = 0; i < 0x1400; ) {
            u8 c = *(b + i);
            i++;
            if (c != 0xA5) {
                func_002D70D0(D_00464328, D_00464268, 0x4DD);
                *(s32 *)0 = 0;
            }
        }
    }
    func_0015FAA0();
    func_002D1F38(0, 0);
    D_004844A8++;
    ovl_ntgui2_func_00172690();
    if (D_004843E4) {
        x = *(s32 *)0x10000000;
        if (x >= 0x2627) {
            D_0048446C = 0;
        } else {
            D_0048446C = D_0048446C - x + 0x2626;
            if (D_0048446C >= 0x7273) {
                func_001913A0(0);
            }
        }
    } else {
        D_0048446C = 0;
    }
    p = &S.e[S.cur].f4;
    if (*p) {
        WaitSema_2(D_00486A5C);
    }
    while (PollSema_2(D_00486A5C) == D_00486A5C)
        ;
    func_002DD640();
    v18 = 0;
    if (S.a10 == 0 && S.e[0].f4 == 0) {
        v18 = S.e[1].fC < S.e[0].fC;
        idx = v18;
        v17 = (S.e[v18].fC ^ S.a38) == 0;
    } else {
        v17 = 1;
        idx = 0;
    }
    S.e[idx].f0 = 1;
    S.e[idx].f4 = S.a10;
    S.e[idx].f8 = S.a14;
    S.e[idx].fC = D_004844A8;
    if (S.e[idx].f4) {
        S.e[v18 ? 0 : 1].fC = 0;
    }
    S.aC = 0;
    func_002DD698();
    v16 = S.a10;
    if (v17) {
        WaitSema_2(D_00486A5C);
        D_00484470 = 0;
    } else {
        if (D_00484470++ >= 0x1F) {
            func_001913A0(1);
            D_00484470 = 0;
        }
    }
    if (D_0048440C > 0) D_0048440C--;
    x = *(s32 *)0x10000000;
    *(s32 *)0x10000000 = 0;
    D_00486A38 = (u32)(x + 0x1314) / 0x2626;
    func_0018FE00(v18, v16, arg);
    if (D_004865F8) {
        D_0048440C = 0x3E8;
        for (;;) {
            v16 = D_00484438;
            while (D_00484438 == v16) WaitSema_2(D_00486A60);
            D_0048443C;
        }
    }
}
