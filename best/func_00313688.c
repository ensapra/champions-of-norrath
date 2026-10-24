typedef struct {
    s16 delta;
    s16 idx;
    void (*fn)();
} VtEnt313688;

typedef struct {
    u8 pad0[0x60];
    VtEnt313688 *vt;
} Obj313688;

void func_00313688(Obj313688 *obj, s32 a, s32 b, s32 *c)
{
    VtEnt313688 *t;
    if (c != 0 && (c[3] & 0x40)) {
        t = obj->vt + 11;
        t->fn((u8 *)obj + t->delta, a, b);
        return;
    }
    t = obj->vt + 12;
    t->fn((u8 *)obj + t->delta, a, b);
}
