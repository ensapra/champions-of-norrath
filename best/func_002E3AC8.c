typedef struct { s32 a, b, c; u8 d0, d1, d2; u8 pad; void *p0; void *p1; } Req;
extern Req D_00446180;
extern s32 D_00446090[], D_004460A8[], D_004460B4[], D_004460B8[], D_004460D8[];
extern u8 D_00447180[], D_00447240[], D_00447250[], D_0047BC78[];
extern void func_002E23F8(void);
s32 SignalSema_2(s32);
s32 func_002D70D0(void *);
s32 func_002D7858(void *, s32, void *, void *);
s32 func_002D8270(void *, s32, s32, void *, s32, s32, s32, void *, s32 *);
s32 func_002E2CD0(s32);
s32 func_002E2E40(void);

s32 func_002E3AC8(s32 a, s32 b, s32 c, u8 *d) {
    Req *r = &D_00446180;
    if (!(D_004460B8[0] & 1)) {
        if (func_002E2E40() == 6) return 0;
    }
    if (func_002E2CD0(5)) {
        r->a = a;
        r->b = b;
        r->c = c;
        r->d0 = d[0];
        r->d1 = d[1];
        r->d2 = d[2];
        r->p0 = D_00447180;
        r->p1 = D_00447240;
        func_002D7858(r, 24, D_00447180, D_00447240);
        D_004460D8[0] = 1;
        D_004460B4[0] = 1;
        if (func_002D8270(D_00447250, 13, 1, r, 24, 0, 0, func_002E23F8, D_004460D8) >= 0) {
            if (D_00446090[0] > 0) func_002D70D0(D_0047BC78);
            return 1;
        }
        D_004460D8[0] = 0;
        D_004460B4[0] = 0;
        SignalSema_2(D_004460A8[0]);
    }
    return 0;
}
