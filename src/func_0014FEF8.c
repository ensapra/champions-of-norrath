typedef struct { u8 b0; u8 b1; u8 b2; u8 b3; } T;
void func_0017E008(T *);
void func_0017E070(T *);
void func_0017E238(T *);
void func_0017E268(T *);

void func_0017E290(T *t, s32 d)
{
    s32 v;
    func_0017E008(t);
    v = t->b2 + d;
    if (v >= 0) {
        while (v >= 60) { v -= 60; func_0017E238(t); }
    } else {
        do { v += 60; func_0017E268(t); } while (v < 0);
    }
    t->b2 = v;
    func_0017E070(t);
}

extern u8 func_001C7330[];
void func_00150AA4(u8 *);
void func_0015030C(u8 *);
void func_001517DC(s32, u8 *, void *);
s32 D_0047FC38;
s32 D_0047FC3C;

void func_0014FFB4(u8 *a)
{
    u8 *tbl;
    func_00150AA4(a);
    tbl = func_001C7330 + 0x100;
    if (*(s32 *)(a + 0x868) != 0) {
        (*(void (**)(u8 *))(tbl + 0x74))(a);
    } else {
        (*(void (**)(u8 *))(tbl + 0x78))(a);
    }
    if (*(s32 *)(a + 0x620) != 0) {
        s32 msg[4];
        msg[0] = 0x18;
        func_001517DC(*(s32 *)(a + 0x620), a, msg);
    }
    if (*(s32 *)(a + 0x858) != 0) {
        func_0015030C(a);
    }
    D_0047FC3C = *(s32 *)(a + 0x860);
    D_0047FC38 = *(s32 *)(a + 0x85C);
}

void func_001504B8(u8 *);
void func_00152930(void *);
s32 D_0047FC30;
s32 D_0047FC34;

void func_0014FF14(u8 *a)
{
    u8 *vt;
    func_001504B8(a);
    func_00152930(a + 0x840);
    *(s32 *)(a + 0x854) = 0;
    *(s32 *)(a + 0x858) = 1;
    *(s32 *)(a + 0x820) = D_0047FC30 << 4;
    *(s32 *)(a + 0x824) = D_0047FC34 << 4;
    *(s32 *)(a + 0x810) = 0;
    *(s32 *)(a + 0x814) = 0;
    *(s32 *)(a + 0x818) = 0;
    *(s32 *)(a + 0x81C) = 0;
    *(s32 *)(a + 0x864) = 0;
    vt = *(u8 **)(a + 0x4C);
    (*(void (**)(u8 *, s32))(vt + 0x130))(a, 1);
    vt = *(u8 **)(a + 0x4C);
    (*(void (**)(u8 *))(vt + 0x12C))(a);
}

extern void func_0014B558(void *, void *, s32);
void func_0014FEF8(u8 *a)
{
    func_0014B558(a, a + 0x120, 7);
}
