typedef struct { f32 x, y, z; } Vec3;

typedef struct {
    u8 pad0[0x348];
    f32 f348;
    u8 pad1[0x11C];
    f32 f468;
    f32 f46C;
    f32 f470;
    u8 pad2[0x49C];
    void *p910;
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

s32 D_00484F44;
f32 D_0047FC90;
extern u8 D_00408600[];
extern s32 D_0042A3E8[];

s32 func_00138F20(void) {
    s32 i;
    Obj *obj;
    Parent *par;
    Vec3 v;
    Vec3 *nrm;
    Entry *arr;
    f32 dot;

    i = 0;
    if (D_00484F44 > 0) {
        arr = (Entry *)D_00408600;
        for (; i < D_00484F44; i++) {
            obj = arr[D_0042A3E8[i]].obj;
            if (obj == NULL) continue;
            if (obj->flags & 8) continue;
            par = obj->parent;
            if (par == NULL) continue;
            if (!(par->f348 > 2.0f)) continue;
            v.x = -par->f468;
            v.y = -par->f46C;
            v.z = -par->f470;
            nrm = (Vec3 *)((f32 *)par->p910 + 3);
            dot = v.x * nrm->x + v.y * nrm->y + v.z * nrm->z;
            if (dot > 0.0f) return 1;
            if (dot < D_0047FC90) return -1;
        }
    }
    return 0;
}
