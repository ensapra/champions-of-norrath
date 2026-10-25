struct Vec3 { f32 x, y, z; };

struct VTbl {
    s32 pad0;
    s32 (*get)(void);
};

struct Ent {
    char pad0[0x10];
    Vec3 pos;
    char pad1C[0x48 - 0x1C];
    VTbl *vt;
    char pad4C[0x150 - 0x4C];
    u64 flags;
};

struct World {
    char pad0[0x5570];
    Ent *player;
    char pad5574[0xB320 - 0x5574];
    Ent *player2;
};

extern "C" {
extern World D_00408600;
f32 D_00484968;
s32 D_00486AB8;
Ent *D_00486ABC;
s32 func_002FF3C8(void) __attribute__((noreturn));
s32 func_0030DC58(void);
bool func_002FD2E0(s32, s32);
}

static inline bool Differ(Ent *e)
{
    return !func_002FD2E0(e ? e->vt->get() : func_002FF3C8(), func_0030DC58());
}

extern "C" void func_001B48B0(Ent *e)
{
    Ent *p;
    Vec3 *a, *b;
    f32 dx, dy, dz, d;

    if (Differ(e)) {
        return;
    }
    if (e->flags & 0x8000000000ULL) {
        return;
    }
    D_00486AB8++;
    p = D_00408600.player;
    if (p == 0) {
        p = D_00408600.player2;
        if (p == 0) {
            return;
        }
    }
    a = &p->pos;
    b = &e->pos;
    dx = a->x - b->x;
    dy = a->y - b->y;
    dz = a->z - b->z;
    d = __builtin_sqrtf(dx * dx + dy * dy + dz * dz);
    if (D_00484968 < d) {
        D_00484968 = d;
        D_00486ABC = e;
    }
}
