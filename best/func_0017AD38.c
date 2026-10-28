typedef struct { s32 id; s32 arg; char pad[8]; void *buf; char text[0x400]; } Req;
typedef struct { char pad[0x24]; s32 ready; } Dev;
extern Dev D_010EB640;
extern char D_010EBC00[];
extern char D_010ECC00[];
extern Req D_010EB6F0;
extern s32 D_001D0480[];
extern s32 D_001D0484[];
extern void func_0017ACA8(void);
extern s32 PollSema(s32);
extern s32 SignalSema(s32);
extern void func_001A4738(char *, char *, s32);
extern void func_001AFE98(void *, s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);

s32 func_0017AD38(s32 a0, s32 a1, char *str, s32 a3) {
    s32 r;
    Dev *dev = &D_010EB640;
    if (dev->ready == 0) return -100;
    if (PollSema(D_001D0484[0]) < 0) return -200;
    if (str == 0 || *str == 0) {
        SignalSema(D_001D0484[0]);
        return -210;
    }
    D_010EB6F0.id = a0;
    D_010EB6F0.buf = D_010EBC00;
    D_010EB6F0.arg = a1;
    func_001A4738(D_010EB6F0.text, str, 0x3FF);
    ((char *)&D_010EB6F0)[0x413] = 0;
    func_001AFE98(D_010EBC00, 0x400);
    r = func_001B08B0(dev, 0xC, 1, &D_010EB6F0, 0x414, D_010ECC00, 4, func_0017ACA8, a3);
    if (r == 0) {
        D_001D0480[0] = 0xC;
    } else {
        SignalSema(D_001D0484[0]);
    }
    return r;
}
