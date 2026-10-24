typedef struct {
    u32 a;
    u8 p0[0xC];
    s32 sz;
    u8 p1[0x8];
    s32 off;
    s32 z;
} Ent;

typedef struct {
    u8 p0[0x98];
    s32 st;
    u8 p1[0xB80 - 0x9C];
    Ent *ents;
    u8 p2[8];
    s32 lo;
    u8 p3[4];
    s32 hi;
    s32 tot;
    s32 c9c;
    s32 ca0;
    u8 p4[0xBF0 - 0xBA4];
    s32 count;
    u8 p5[0xD10 - 0xBF4];
    s32 d10;
} Obj;

void func_0015B6F4(Obj *o) {
    if (o->lo > o->hi) {
        o->lo = o->hi;
    }
}

void func_0015B248(Obj *o) {
    s32 k = 0;
    s32 n = o->count;
    Ent *e;
    s32 i, off;

    o->tot = 0;
    o->ca0 = 0;
    o->c9c = 0;
    e = o->ents;
    if (n != 0) {
        off = 0;
        i = 0;
        if (n > 0) {
            do {
                u32 t = e->a;
                s32 sz = e->sz;
                if (t < 0x80) {
                    k = 1;
                } else if (t < 0xE0) {
                    k = 2;
                } else if (t < 0xF0) {
                    k = 3;
                } else if (t < 0xF8) {
                    k = 4;
                }
                e->off = off;
                off += sz;
                e->z = 0;
                i += k;
                e += k;
                o->tot += sz;
            } while (i < o->count);
        }
    }
}

void func_0015BBCC();
void func_0015B210(Obj *);
void func_0015AFAC(Obj *);
void func_0015BA94(Obj *);

s32 func_0015B174(Obj *o) {
    if (o->lo < o->hi) {
        func_0015BBCC();
        func_0015B210(o);
        o->st = 2;
    }
    if (o->count > o->lo) {
        o->lo = o->count;
        func_0015B210(o);
        o->st = 2;
        if (o->d10 == 0) {
            func_0015AFAC(o);
            return 1;
        }
        func_0015BA94(o);
        return 1;
    }
    return 0;
}

typedef struct {
    s32 p0[2];
    s32 state;
    s32 p1;
    s32 nused;
} Pool;
extern volatile Pool D_004C4F50[];

s32 func_001B7038(s32 *used, s32 *avail) {
    volatile Pool *p = D_004C4F50;
    if (p->state < 0) {
        return 0x80008001;
    }
    if (used) {
        *used = p->nused;
    }
    if (avail) {
        *avail = 0x80 - p->nused;
    }
    return 0;
}
