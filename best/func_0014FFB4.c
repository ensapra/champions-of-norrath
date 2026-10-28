extern u8 func_001C7330[];
void func_00150AA4(u8 *);
void func_0015030C(u8 *);
void func_001517DC(s32, u8 *, void *);
s32 D_0047FC38;
s32 D_0047FC3C;

typedef struct Tbl {
    u8 pad[0x74];
    void (*f74)(u8 *, struct Tbl *);
    void (*f78)(u8 *, struct Tbl *);
} Tbl;

void func_0014FFB4(u8 *a)
{
    Tbl *t;
    s32 h;
    s32 x, y;
    func_00150AA4(a);
    t = (Tbl *)(func_001C7330 + 0x100);
    if (*(s32 *)(a + 0x868) != 0) {
        t->f74(a, t);
        h = *(s32 *)(a + 0x620);
    } else {
        t->f78(a, t);
        h = *(s32 *)(a + 0x620);
    }
    if (h != 0) {
        s32 msg[4];
        msg[0] = 0x18;
        func_001517DC(h, a, msg);
    }
    if (*(s32 *)(a + 0x858) != 0) {
        func_0015030C(a);
    }
    y = *(s32 *)(a + 0x85C);
    x = *(s32 *)(a + 0x860);
    D_0047FC3C = x;
    D_0047FC38 = y;
}
