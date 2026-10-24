typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E;
    char pad1[4];
    volatile f32 f24, f28, f2C, f30;
} Obj4;
f32 D_00482EE8;
void func_002BA110(Obj4 *a) {
    f32 two = 2.0f;
    f32 three = 3.0f;
    f32 g = D_00482EE8;
    f32 q = 0.25f;
    a->f18 = 0x32;
    a->f30 = q;
    a->f24 = two;
    a->f1A = 0x23;
    a->f28 = three;
    a->f1C = 3;
    a->f2C = g;
    a->f14 = 1;
    a->f1E = 2;
    a->f0E = 1;
    a->f10 = 1;
    a->f12 = 1;
}
typedef struct {
    char *name;
    s32 a, b;
    s16 c;
    char pad[0x52];
    void *data;
} T0E0;
extern char D_00452CF0[];
extern char D_00479658[];
unsigned short func_002BA0E0(T0E0 *p) {
    *((volatile s16 *)&p->c) = 0xB4;
    *((void *volatile *)&p->data) = D_00452CF0;
    *((char *volatile *)&p->name) = D_00479658;
    *((volatile s32 *)&p->a) = 0;
    *((volatile s32 *)&p->b) = 0;
}
