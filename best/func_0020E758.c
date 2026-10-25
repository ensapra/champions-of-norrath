struct Vec3 { f32 x, y, z; Vec3() {} Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
extern char D_00449C20[];
extern char D_00470358[];
extern char D_00485330[];
extern s32 D_004844A4;
void func_001411F0(void *, Vec3, s32, s32);
void func_00143830(void *, void *);
s32 func_00165DC0(char *, char *);

struct Obj {
    char pad0[0xC]; u32 fC;
    Vec3 pos;
    char pad1[0x28 - 0x1C]; s8 f28, f29;
    char pad2[0x48 - 0x2A]; char *f48; s32 f4C, f50;
    Vec3 v54;
    char pad3[0x6C - 0x60];
    Vec3 v6C, v78;
    u8 f84; char pad4[3];
    s32 f88, f8C, f90, f94, f98, f9C;
};

void func_0020E758(Obj *o, Vec3 a, Vec3 b) {
    func_001411F0(o, a, 0, 0);
    o->f4C = 0;
    o->f48 = D_00449C20;
    o->v54 = b;
    o->f84 = 0;
    o->f29 = -1;
    o->f28 = -1;
    o->f9C = 0;
    o->f84 = 0x32;
    o->f98 = 1;
    Vec3 sum(o->pos.x + o->v54.x, o->pos.y + o->v54.y, o->pos.z + o->v54.z);
    o->f50 = D_004844A4 + 0x258;
    o->fC |= 1;
    Vec3 half(sum.x * 0.5f, sum.y * 0.5f, sum.z * 0.5f);
    o->f88 = 0;
    o->f94 = 0;
    o->v6C = half;
    o->v78 = o->v6C;
    func_00143830(o, &o->v54);
    o->f8C = func_00165DC0(D_00485330, D_00470358);
    o->f90 = 0;
}
