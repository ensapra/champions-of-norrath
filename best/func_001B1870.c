extern u8 jtbl_004C006C[];
typedef struct { s32 a; s32 flags; s32 c; s32 d; } Ent;
extern Ent D_0110AD00[];
extern u8 D_004C3EF8[];
extern void *D_004C3FB0[];
extern u8 D_0110AF28[];
s32 WaitSema(s32);
s32 SignalSema(s32);
void func_001B0FD8(void);
s32 func_001A2418(void *, void *, s32);

void func_001AFF44(void) {
}

Ent *func_001B1038(void) {
    Ent *e;
    func_001B0FD8();
    WaitSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
    for (e = D_0110AD00; e < D_0110AD00 + 32; e++) {
        if (e->flags == 0) {
            e->flags = 0x10000000;
            SignalSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
            return e;
        }
    }
    SignalSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
    return 0;
}

Ent *func_001B10C0(u32 i) {
    Ent *e;
    func_001B0FD8();
    WaitSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
    if (i >= 32) {
        SignalSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
        return 0;
    }
    e = &D_0110AD00[i];
    SignalSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
    return e;
}

s32 func_001B1870(void) {
    u8 *a = D_004C3EF8;
    u8 *b = D_0110AF28;
    s32 r = 0;
    if (func_001A2418(b, a, 4) &&
        func_001A2418(b, D_004C3FB0[0], 4)) {
        r = func_001A2418(a, D_004C3FB0[0], 4) != 0;
    }
    return r;
}
