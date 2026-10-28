typedef struct { f32 x, y, z; } Vec3;

typedef struct {
    u8 pad0[0x348];
    f32 f348;
    u8 pad1[0x11C];
    Vec3 pos;
    u8 pad2[0x49C];
    f32 *p910;
} Parent;

typedef struct {
    u8 pad0[0xC];
    s32 flags;
    u8 pad1[0x520];
    Parent *parent;
} Obj;

typedef struct {
    u8 pad0[0x5570];
    Obj *obj;
    u8 pad1[0x83C];
} Entry;

extern s32 D_00484F44;
extern f32 D_0047FC90;
extern Entry D_00408600[];
extern s32 D_0042A3E8[];

static inline f32 dot3(Vec3 *a, Vec3 *b) {
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

s32 func_00138F20(void) {
    s32 i;
    Obj *obj;
    Parent *par;
    Vec3 v;
    f32 x, y, z;
    f32 d;

    for (i = 0; i < D_00484F44; i++) {
        obj = D_00408600[D_0042A3E8[i]].obj;
        if (obj == NULL) continue;
        if (obj->flags & 8) continue;
        par = obj->parent;
        if (par == NULL) continue;
        if (!(par->f348 > 2.0f)) continue;
        x = par->pos.x;
        y = par->pos.y;
        z = par->pos.z;
        v.x = -x;
        v.y = -y;
        v.z = -z;
        d = dot3(&v, (Vec3 *)(par->p910 + 3));
        if (d > 0.0f) return 1;
        if (d < D_0047FC90) return -1;
    }
    return 0;
}
