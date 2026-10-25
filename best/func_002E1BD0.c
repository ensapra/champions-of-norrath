s32 SignalSema_2(s32);
s32 PollSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern s32 D_00446070;
extern s32 D_00446074;
extern s32 D_008E6B40[];
extern s32 D_008E6BC0[];
extern s32 D_008E8100[];
void func_002E0DE0();

s32 func_002E1BD0(s32 arg0, s32 arg1) {
    s32 r;

    if (D_008E6B40[9] == 0) {
        return -100;
    }
    if (PollSema_2(D_00446074) < 0) {
        return -200;
    }
    D_008E6BC0[1] = arg0;
    D_008E6BC0[2] = arg1;
    r = func_002D8270(D_008E6B40, 0x10, 1, D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0);
    if (r == 0) {
        D_00446070 = 0x10;
    } else {
        SignalSema_2(D_00446074);
    }
    return r;
}
