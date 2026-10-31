/* identical to func_002E1668 (matched), with its names changed by decompdecomp */
extern s32 func_002D7908(s32);
extern s32 GetThreadId_2(void);
extern s32 func_002D84A8(void *, s32);
extern s32 func_002D8540(void *, s32, void *, void *, s32, s32, void *);
extern s32 func_002D8958(void *);
extern void func_002E0A98(void);
extern s32 D_008E6A80[], D_008E6AC0[], D_008E6AD8[];
void func_002E0A28(void) {
    s32 *p = D_008E6AC0;
    func_002D7908(0);
    func_002D84A8(p, GetThreadId_2());
    func_002D8540(D_008E6AD8,0x80000704,func_002E0A98,D_008E6A80,0,0,p);
    func_002D8958(p);
}

extern s32 SignalSema_2(s32);
extern s32 PollSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_002E0DE0(void);
extern s32 D_00446070[];
extern s32 D_00446074[];
extern s32 D_008E6B40[];
extern s32 D_008E6BC0[];
extern s32 D_008E8100[];

s32 func_002E10D8(s32 arg0) {
    s32 *p = D_008E6B40;
    s32 r;

    if (p[9] == 0) {
        return -100;
    }
    if (PollSema_2(D_00446074[0]) < 0) {
        return -200;
    }
    D_008E6BC0[0] = arg0;
    r = func_002D8270(p, 3, 1, D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0);
    if (r == 0) {
        D_00446070[0] = 3;
    } else {
        SignalSema_2(D_00446074[0]);
    }
    return r;
}

extern s32 func_001AD750(s32);
extern s32 *D_008E6B68[];
extern s32 *D_008E6B6C[];
extern s32 *D_008E6B70[];
extern s32 D_00446078[];

void func_0017A910(s32 arg0) {
    u8 *base = (u8 *)(arg0 | 0x20000000);
    if (D_008E6B68[0] != NULL) {
        *D_008E6B68[0] = *(s32 *)(base + 0);
    }
    if (D_008E6B6C[0] != NULL) {
        *D_008E6B6C[0] = *(s32 *)(base + 4);
    }
    if (D_008E6B70[0] != NULL) {
        *D_008E6B70[0] = *(s32 *)(base + 0x90);
    }
    func_001AD750(D_00446078[0]);
}

extern s32 func_002D70D0(char *);
extern char D_0047BA60[];

s32 func_002E1840(void) {
    if (func_002D8270(D_008E6B40, 0x35, 0, D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0) != 0) {
        func_002D70D0(D_0047BA60);
        return -1;
    }
    return D_008E8100[0];
}
