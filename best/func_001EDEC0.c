struct VTbl {
    s32 pad0;
    s32 (*get)(void);
};

struct Ent {
    char pad0[0x48];
    VTbl *vt;
};

struct Link {
    char pad0[0xC];
    Ent *ent;
};

struct Obj {
    char pad0[0x4C];
    Link *link;
    char pad50[0xCC - 0x50];
    s8 state;
    char padCD[0xD4 - 0xCD];
    s32 unkD4;
    s32 unkD8;
    s32 unkDC;
    s32 unkE0;
    s32 unkE4;
};

static inline void InitParams(char *b)
{
    char *q;
    s32 i, k;
    s16 m = -1;

    for (i = 3; i >= 0; i--) {
        ((s16 *)b)[0x12 + i * 4] = m;
    }
    q = b + 8;
    b[0x20] = -1;
    b[0x21] = -1;
    for (i = 3, k = 0x10; i >= 0; i--, k += 2) {
        *(s16 *)(b + k) = 0;
        *(s16 *)(q + k) = 0;
    }
}

static inline void AddParam(char *b, s32 id, s32 x, s32 y, s32 z)
{
    s16 *c;
    s16 *a;
    s32 n;

    n = 0;
    a = (s16 *)(b + (s32)0x24);
    c = (s16 *)(b + 0x2A);
    do {
        s16 t = *a;
        if (t == -1 || t == id) {
            *c = z;
            *a = id;
            c[-1] = y;
            c[-2] = x;
            break;
        }
        n++;
        c += 4;
        a += 4;
    } while (n < 4);
}

extern "C" {
s32 func_002FF3C8(void) __attribute__((noreturn));
bool func_002FD2E0(s32, s32);
s8 func_001CE218(Ent *, Obj *, s32, s32, s32, s32, void *, s32, f32, f32);
}

static inline bool Differ(Ent *e, Ent *p)
{
    return !func_002FD2E0(e ? e->vt->get() : func_002FF3C8(), p ? p->vt->get() : func_002FF3C8());
}

extern "C" void func_001EDEC0(Obj *o, Ent *e)
{
    s8 r;

    if (o->state == 0) {
        Ent *p = o->link ? o->link->ent : 0;
        r = 0;
        if (p == 0 || Differ(e, p)) {
            s16 l[38];
            InitParams((char *)l);
            AddParam((char *)l, 0x15, o->unkD4, o->unkD8, 0);
            r = func_001CE218(e, o, o->unkE4, o->unkDC, o->unkE0, 0x20, l, 0, 0.0f, 0.0f);
        }
        if (r == 1) {
            o->state = r;
        } else {
            o->state = 2;
        }
    }
}
