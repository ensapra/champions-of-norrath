typedef struct { f32 x, y, z; } Vec3;
extern char D_004737A8[];
extern char D_004858E8[];
s32 func_00165DC0(char *, char *);
void func_00163830(void *, s32, s32);
void func_001D98B8(Vec3 *, f32);
void func_0024D308(s32, void *, f32);

typedef struct {
    u8 p0[0xC];
    s32 flags;
    Vec3 pos;
    u8 p1[8];
    void *model;
    u8 p2[0x78];
    s64 bits;
    u8 p3[0x78];
    u8 name[8];
    u8 p4[0x29C];
    s32 f3C4;
} Obj;

void func_00243748(Obj *o) {
    struct { s64 pad[2]; Vec3 v; } fr;
    fr.v = o->pos;
    func_001D98B8(&fr.v, 4.0f);
    func_0024D308(func_00165DC0(D_004858E8, D_004737A8), o, 1.0f);
    o->f3C4 = 0;
    o->name[4] = 0;
    func_00163830(o->name, *(s32 *)((u8 *)o->model + 0x1C), 1);
    o->flags &= ~1;
    o->bits &= ~0x100000LL;
}
