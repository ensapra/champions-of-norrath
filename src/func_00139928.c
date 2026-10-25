typedef struct { f32 x, y, z; } Vec3_139928;
typedef struct {
    s16 delta;
    s16 index;
    void *(*fn)();
} VtEnt_139928;
typedef struct {
    char pad0[0xC];
    s32 flags;
    char pad10[0x38];
    VtEnt_139928 *vt;
} Obj_139928;

extern f32 D_0047FC9C;
extern f32 D_0047FCA0;
void func_0013EF30(Vec3_139928 *, Vec3_139928 *, Obj_139928 **, s32);
s32 func_002FD2E0(void *, void *);
void func_002FF3C8(void);
void *func_00312CE0(void);
void *func_00312D30(void);
void *func_00312D80(void);

s32 func_00139928(void) {
    Obj_139928 *list[0x200];
    Vec3_139928 lo, hi;
    Vec3_139928 *pl = &lo, *ph = &hi;
    s32 i;
    Obj_139928 *o;
    void *t;

    pl->x = D_0047FC9C;
    pl->y = D_0047FC9C;
    pl->z = D_0047FC9C;
    ph->x = D_0047FCA0;
    ph->y = D_0047FCA0;
    ph->z = D_0047FCA0;
    func_0013EF30(pl, ph, list, 0x200);
    for (i = 0; list[i] != NULL; i++) {
        o = list[i];
        if ((*(volatile s32 *)&o->flags & 0x28) == 0x28) goto del;
        if (o) t = o->vt[0].fn(); else func_002FF3C8();
        if (func_002FD2E0(t, func_00312CE0())) goto del;
        if (o) t = o->vt[0].fn(); else func_002FF3C8();
        if (func_002FD2E0(t, func_00312D30())) goto del;
        if (o) t = o->vt[0].fn(); else func_002FF3C8();
        if (!func_002FD2E0(t, func_00312D80())) continue;
    del:
        if (!(o->flags & 0x40)) {
            if (o) {
                VtEnt_139928 *e = &o->vt[1];
                ((void (*)(void *, s32))e->fn)((char *)o + e->delta, 3);
            }
        }
    }
    return 0;
}
