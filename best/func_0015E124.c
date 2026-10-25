typedef struct { s32 a, b, c, d; char pad[0x80]; s32 e, f, g, h; } ItemA __attribute__((aligned(8)));
typedef struct { s32 a, b, c, d; char pad[0x150]; s32 e, f, g, h; } ItemB __attribute__((aligned(8)));
typedef struct {
    char pad[0x910];
    ItemA a1, a1c, a2, a2c;
    ItemB b1, b1c;
} Obj __attribute__((aligned(8)));
void func_0015E474(void);
void func_0015E584(Obj *);
void func_0015E6A4(Obj *);
s32 func_00170894(s32, s32, s32, s32);

void func_0015E124(Obj *o) {
    ItemA *d;
    ItemB *e;
    func_0015E474();
    o->a1.b = 0;
    o->a1.c = 0;
    o->a1.a = 0x10000007;
    o->a1.d = func_00170894(0x50, 0, 7, 0);
    d = &o->a1c;
    o->a1.f = 0; o->a1.g = 0; o->a1.h = 0;
    o->a1.e = 0x60000000;
    *d = o->a1;
    func_0015E584(o);
    o->a2.a = 0x10000007;
    o->a2.b = 0;
    o->a2.c = 0;
    o->a2.d = func_00170894(0x50, 0, 7, 0);
    d = &o->a2c;
    o->a2.f = 0; o->a2.g = 0; o->a2.h = 0;
    o->a2.e = 0x60000000;
    *d = o->a2;
    func_0015E6A4(o);
    o->b1.a = 0x10000015;
    o->b1.b = 0;
    o->b1.c = 0;
    o->b1.d = func_00170894(0x50, 0, 0x15, 0);
    e = &o->b1c;
    o->b1.f = 0; o->b1.g = 0; o->b1.h = 0;
    o->b1.e = 0x60000000;
    *e = o->b1;
}
