typedef struct { s16 delta; s16 index; void (*fn)(void *, ...); } VEnt;
extern char D_0034B988[];
extern char D_00473798[];
s32 D_00483F48;
void func_00113618(void);

typedef struct {
    u8 p0[0x48];
    VEnt *vt;
    u8 p1[0x1E4];
    f32 f230;
    f32 f234;
    u8 p2[0x1B8];
    s32 f3F0;
} Obj;

void func_00243628(Obj *o) {
    func_00113618();
    __builtin_memcpy(D_0034B988, D_00473798, 12);
    D_00483F48 = (s32)o->f230;
    if (o->f230 < o->f234 * 0.5f && o->f3F0 == 0) {
        VEnt *e = &o->vt[0x17];
        e->fn((char *)o + e->delta, 0x15);
        o->f3F0 = 1;
    }
}
