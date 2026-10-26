typedef struct V { s32 x, y, z; } V;
typedef struct Row { s32 key; char pad[0x18]; } Row;
typedef struct Info {
    char p0[0x38];
    Row *rows;
    char p1[4];
    s32 x40;
} Info;
typedef struct Sub {
    Info *info;
    char p2[0x14];
    f32 f18;
    char p6[2];
    s16 idx;
} Sub;
typedef struct Ent {
    char p0[4];
    s8 active;
    char p1;
    u16 flags;
    Sub s;
    struct { char p[0xC]; struct { char q[0x10]; V v; } *v; } *x28;
    V v2C;
    u16 x38;
    s8 f3A;
    s8 f3B;
    s8 f3C;
    char p4[3];
    f32 f40;
    char p5[0x4C - 0x44];
} Ent;
typedef struct Slot { char p[4]; u16 flags; s16 a; s16 b; char q[0x14 - 10]; } Slot;
extern Ent D_007D8110[];
extern Slot D_007D8F20[];
extern V D_0037EE80;
s32 D_0048595C;
f32 D_00485960;
s32 func_001D0E70(void);
void func_0024CF80(s32);
void func_001639C8(Ent *, V *, s32, s32);

void func_0024D878(void) {
    s32 i, j;
    s32 r = func_001D0E70();
    for (i = 0; i < 0x20; i++) {
        Ent *e = &D_007D8110[i];
        if (e->active == 0) continue;
        if (e->f3C == 0) {
            Sub *s = &e->s;
            Row *rows = s->info->rows;
            if (rows == 0 || rows[s->idx].key == 0x7FFFFFFF || (e->flags & 0x80)) {
                e->active = 0;
                for (j = 0; j < 0x2B; j++) {
                    Slot *t = &D_007D8F20[j];
                    if (t->flags & 4) {
                        if (t->flags & 0x10) {
                            if (t->a == i) {
                                if (t->b == e->x38)
                                    func_0024CF80(j);
                            }
                        }
                    }
                }
                continue;
            }
        } else {
            Sub *s = &e->s;
            if ((f32)s->info->x40 < s->f18) s->f18 = 0.0f;
        }
        if (r == 0 || e->f3B != 0) {
            if (e->x28) e->v2C = e->x28->v->v;
            if (e->f3A) e->v2C = D_0037EE80;
            D_00485960 = e->f40;
            D_0048595C = i;
            func_001639C8(e, &e->v2C, 0, 0);
        }
    }
    D_0048595C = -1;
    D_00485960 = 1.0f;
}
