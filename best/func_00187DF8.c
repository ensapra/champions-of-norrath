typedef struct { u8 pad0[0xE4]; s32 (*f_e4)(s32); s32 (*f_e8)(s32); u8 pad1[0x10]; void (*f_fc)(void); } Vt;
extern Vt *D_010F4530[];
typedef struct { s32 a; s32 b; s16 pad; s16 pad2; u16 x; u16 y; } R;

void func_00187DF8(u8 *o, s32 a1, s32 a2) {
    s32 x, y;
    R *p, *q;
    p = (R *)(o + 0x10);
    D_010F4530[0]->f_fc();
    x = a1 - D_010F4530[0]->f_e8(0x20);
    y = a2 - D_010F4530[0]->f_e4(0x20);
    if (x < 0) x = 0;
    if (y < 0) y = 0;
    p->y = y;
    q = p;
    p = (R *)(o + 0x40);
    *(s16 *)(o + 0x3C) = x;
    *(s32 *)(o + 0x24) = y + q->b;
    p->y = y;
    p->x = x;
    q = p;
    p = (R *)(o + 0x50);
    p->x = x;
    p->b = y + q->b;
    q = p;
    p = (R *)(o + 0x60);
    p->a = q->a + q->x;
    q = p;
    p = (R *)(o + 0x70);
    p->y = y;
    q = p;
    p->a = ((R *)(o + 0x60))->a;
    p = (R *)(o + 0x80);
    p->b = q->b + q->y;
    p->a = q->a;
}
