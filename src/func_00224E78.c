typedef struct { s16 delta; s16 index; void (*fn)(void *, ...); } VEnt;
typedef struct {
    u8 p0[0x48];
    VEnt *vt;
    u8 p1[0xD0];
    s32 f11C;
    s32 f120;
} Obj;

void func_00224E78(Obj *o) {
    if ((o->f11C & 0x10) && o->f120 != 0) {
        VEnt *e = &o->vt[0x11];
        e->fn((char *)o + e->delta);
    }
}
