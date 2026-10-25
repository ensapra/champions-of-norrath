typedef struct { s32 a; s32 b; s32 c; s32 pad[2]; char name[0x3FF]; char term; } Req2;
s32 SignalSema_2(s32);
s32 PollSema_2(s32);
void func_00305118(char *, char *, s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern s32 D_00446070;
extern s32 D_00446074;
extern s32 D_008E6B40[10];
extern char D_008E6C04[];
extern u8 D_008E8100[64];
void func_002E0DE0(void);

s32 func_002E0F78(s32 arg0, s32 arg1, char *name, s32 arg3) {
    s32 ret;
    Req2 *r;

    if (D_008E6B40[9] == 0) {
        return -100;
    }
    if (PollSema_2(D_00446074) < 0) {
        return -200;
    }
    if (name == 0 || *name == 0) {
        SignalSema_2(D_00446074);
        return -210;
    }
    func_00305118(D_008E6C04, name, 0x3FF);
    r = (Req2 *)(D_008E6C04 - 0x14);
    r->a = arg0;
    r->c = arg3;
    r->b = arg1;
    r->term = 0;
    ret = func_002D8270(D_008E6B40, 2, 1, r, 0x414, D_008E8100, 4, func_002E0DE0, 0);
    if (ret == 0) {
        D_00446070 = 2;
    } else {
        SignalSema_2(D_00446074);
    }
    return ret;
}
