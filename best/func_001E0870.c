typedef struct { s16 code, a, b, z; } W;
typedef struct { char pad[0x10]; s16 a[4]; s16 b[4]; s8 f0, f1; char pad2[2]; W w[4]; } Ctl;
typedef struct { char pad[0xC]; s32 flags; } Item;
typedef struct { char pad[0xC]; Item *it; } Mid;
typedef struct { char pad[0x4C]; Mid *m; } Ent;
s32 D_004844A4, D_00484CD8;
extern void func_001CE218(void *, f32, f32, s32, s32, s32, s32, s32, void *, s32);

static inline void Add(Ctl *c, s32 v) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (c->w[i].code == -1 || c->w[i].code == 0x15) {
            c->w[i].code = 0x15;
            c->w[i].z = 0;
            c->w[i].a = v;
            c->w[i].b = v;
            break;
        }
    }
}

void func_001E0870(Ent *e, Item *item) {
    Ctl c;
    s32 fl;
    s32 i;
    s16 *p;
    if (D_004844A4 % 20 != 0)
        return;
    fl = item->flags;
    if (e->m && (e->m->it->flags & 0x40) && (fl & 0x40))
        return;
    i = 3;
    p = &c.w[3].code;
    do {
        i--;
        *p = -1;
        p -= 4;
    } while (i >= 0);
    c.f0 = -1;
    c.f1 = -1;
    for (i = 0; i < 4; i++) {
        c.a[i] = 0;
        c.b[i] = 0;
    }
    if (fl & 0x40) {
        if (D_00484CD8 == 2)
            Add(&c, 2);
        else if (D_00484CD8 == 3)
            Add(&c, 3);
        else
            Add(&c, 1);
    } else if (fl & 0x20) {
        Add(&c, 8);
    }
    func_001CE218(item, 0.0f, 0.0f, 0, 10000000, 0, 0, 0x0100C040, &c, 0);
}
