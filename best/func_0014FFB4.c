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
    } else {
        t->f78(a, t);
    }
    h = *(s32 *)(a + 0x620);
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

void func_001504B8(void *);
void func_00152930(void *);
s32 D_0047FC30;
s32 D_0047FC34;

typedef struct Obj Obj;
typedef struct {
    u8 pad[0x12C];
    void (*f12C)(Obj *);
    void (*f130)(Obj *, s32);
} ObjVt;
struct Obj {
    u8 pad0[0x4C];
    ObjVt *vt;
    u8 pad50[0x810 - 0x50];
    s32 x810, x814, x818, x81C, x820, x824;
    u8 pad828[0x840 - 0x828];
    u8 x840[0x14];
    s32 x854, x858;
    u8 pad85C[8];
    s32 x864;
};

void func_0014FF14(Obj *a)
{
    s32 t0, t1;
    func_001504B8(a);
    func_00152930(a->x840);
    a->x854 = 0;
    t1 = D_0047FC34 << 4;
    t0 = D_0047FC30 << 4;
    a->x858 = 1;
    a->x820 = t0;
    a->x824 = t1;
    a->x810 = 0;
    a->x814 = 0;
    a->x818 = 0;
    a->x81C = 0;
    a->x864 = 0;
    a->vt->f130(a, 1);
    a->vt->f12C(a);
}
