typedef struct { s32 f00; s32 f04; s32 f08; s32 size; s32 f10; s32 f14; void *buf; void *work; s32 pad[4]; } Req;
s32 SignalSema_2(s32);
s32 PollSema_2(s32);
void func_002D7858(void *, s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern s32 D_00446070;
extern s32 D_00446074;
extern s32 D_008E6B40[10];
extern Req D_008E6BC0;
extern u8 D_008E7040[192];
extern u8 D_008E8100[64];
void func_002E1278(void);

s32 func_002E1310(s32 arg0, void *arg1, s32 arg2) {
    s32 ret;

    if (D_008E6B40[9] == 0) {
        return -100;
    }
    if (PollSema_2(D_00446074) < 0) {
        return -200;
    }
    D_008E6BC0.f00 = arg0;
    D_008E6BC0.work = D_008E7040;
    D_008E6BC0.buf = arg1;
    D_008E6BC0.size = arg2;
    func_002D7858(arg1, arg2);
    func_002D7858(D_008E7040, 0xC0);
    ret = func_002D8270(D_008E6B40, 5, 1, &D_008E6BC0, 0x30, D_008E8100, 4, func_002E1278, D_008E7040);
    if (ret == 0) {
        D_00446070 = 5;
    } else {
        SignalSema_2(D_00446074);
    }
    return ret;
}
