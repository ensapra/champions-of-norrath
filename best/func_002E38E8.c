typedef struct { s32 a, b, c; u8 d, e, f, pad; void *p, *q; } Cmd;
extern Cmd D_00446180[];
extern s32 D_00446090[], D_004460A8[], D_004460B4[], D_004460B8[], D_004460D8[];
extern u8 D_00447180[], D_00447240[], D_00447250[], D_0047BC50[], D_0047BC68[];
void SignalSema_2(s32);
void func_002D70D0(void *);
void func_002D7858(void *, s32);
s32 func_002D8270(void *, s32, s32, void *, s32, s32, s32, void *, void *);
s32 func_002E2CD0(s32);
s32 func_002E2E40(void);
void func_002E2638(void);

s32 func_002E38E8(s32 a0, s32 a1, s32 *a2, u8 *a3) {
    Cmd *c = D_00446180;
    s32 n;
    if (!(D_004460B8[0] & 1) && func_002E2E40() == 6) return 0;
    if (func_002E2CD0(4) == 0) return 0;
    c->a = a0;
    c->b = a1;
    c->c = (s32)a2;
    c->d = a3[0];
    c->e = a3[1];
    c->f = a3[2];
    c->p = D_00447180;
    c->q = D_00447240;
    switch (a3[2]) {
    case 1:
        n = a1 * 0x918;
        break;
    case 2:
        n = a1 * 0x924;
        break;
    default:
        n = a1 << 11;
        break;
    }
    *(s32 *)D_00447240 = 0;
    if (!(D_004460B8[0] & 2)) func_002D7858(a2, n);
    func_002D7858(D_00447180, 0x90);
    func_002D7858(c, 0x18);
    func_002D7858(D_00447240, 4);
    if (D_00446090[0] > 0) func_002D70D0(D_0047BC50);
    D_004460D8[0] = 1;
    D_004460B4[0] = 1;
    if (func_002D8270(D_00447250, 1, 1, c, 0x18, 0, 0, func_002E2638, D_00447180) < 0) {
        D_004460D8[0] = 0;
        D_004460B4[0] = 0;
        SignalSema_2(D_004460A8[0]);
        return 0;
    }
    if (D_00446090[0] > 0) func_002D70D0(D_0047BC68);
    return 1;
}
