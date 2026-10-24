extern void func_001B5C80(void);
extern void func_001B5CD8(void);
typedef struct Req { u8 pad[0x3C]; struct Req *next; } Req;
typedef struct { s32 id; s32 busy; s32 f8; Req *head; } ReqQ;
Req *func_001B0D78(ReqQ *q);
s32 SleepThread(void);
void func_001B0DD0(Req *);
void func_001B0F98(ReqQ *q) {
    Req *r;
    for (;;) {
        while ((r = func_001B0D78(q)) != 0)
            func_001B0DD0(r);
        SleepThread();
    }
}

typedef struct { u32 *base; u32 *cur; s32 qwc; s32 pad; } Pkt;
void *func_00179280(s32, s32);

s32 func_00178C50(Pkt *pk, s32 n, u32 flag) {
    u32 *p = func_00179280(0x40, (n * 16 + 0x3F) / 0x40 * 0x40);
    pk->base = p;
    if (p == NULL) return 1;
    p = (u32 *)((u32)p | flag);
    pk->qwc = n;
    pk->base = p;
    pk->cur = p;
    p[0] = 0x70000000;
    p[3] = 0;
    p[2] = 0;
    p[1] = 0;
    return 0;
}

extern Pkt D_010EB600[];
extern s32 D_010EB620[];
extern Pkt *D_010EB5F8[];

s32 func_00178D20(Pkt *);
s32 func_00178D40(s32 *out) {
    *out = func_00178D20(D_010EB5F8[0]);
    return 0;
}

s32 func_00178E88(s32 n) {
    s32 r;
    D_010EB620[0] = 0;
    r = func_00178C50(&D_010EB600[0], n, 0) != 0;
    if (r) return r;
    D_010EB600[0].qwc = n;
    r = func_00178C50(&D_010EB600[1], n, 0) != 0;
    if (r) return r;
    D_010EB600[1].qwc = n;
    D_010EB5F8[0] = &D_010EB600[D_010EB620[0]];
    return 0;
}
