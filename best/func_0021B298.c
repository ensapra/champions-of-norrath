typedef struct { u8 pad[0xC]; u32 flags; u8 pad2[0x3C0 - 0x10]; s32 idx; } Ent;
typedef struct {
    u8 pad0[0x10];
    f32 x, y, z, r;
} Obj;
void func_0013EF30(f32 *, f32 *, Ent **, s32);
void func_001CE218(Ent *, Obj *, f32, f32, s32, s32, s32, s32, s32, s32);

void func_0021B298(Obj *o) {
    Ent *list[128];
    f32 lo[3];
    f32 hi[3];
    s8 flags[4];
    Ent **p;
    s8 *q;
    s8 *fl;
    s8 *src;
    s8 *dst;
    s8 *b;
    f32 *pl = lo;
    f32 *ph = hi;
    s32 i;
    s32 j;
    pl[0] = o->x - o->r;
    pl[1] = o->y - o->r;
    pl[2] = o->z - o->r;
    ph[0] = o->x + o->r;
    ph[1] = o->y + o->r;
    ph[2] = o->z + o->r;
    func_0013EF30(pl, ph, list, 0x80);
    fl = flags;
    q = &flags[3];
    i = 3;
    do {
        i--;
        *q = 0;
        q--;
    } while (i >= 0);
    b = (s8 *)o + 0xC;
    if (list[0]) {
        p = list;
        do {
            Ent *e = *p;
            if ((e->flags & 0x48) == 0x40) {
                fl[e->idx] = 1;
                if (b[e->idx + 0x40] == 0)
                    func_001CE218(*p, o, 20.0f, 30.0f, 10000, 0, 0, 0, 0, 0);
            }
            p++;
        } while (*p);
    }
    src = fl;
    dst = b + 0x40;
    for (j = 0; j < 4; j++) *dst++ = src[j];
}
