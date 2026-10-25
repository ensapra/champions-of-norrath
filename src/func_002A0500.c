struct Vec3_2A0500 {
    f32 x, y, z;
    Vec3_2A0500() {}
    Vec3_2A0500(f32 ax, f32 ay, f32 az) { x = ax; y = ay; z = az; }
};
typedef struct { f32 m[12]; } Mtx_2A0500;
typedef struct { s32 a; s16 b; s16 c; } Attr_2A0500;
typedef struct { char pad[0x10]; Vec3_2A0500 pos; char pad1c[0x64 - 0x1C]; s16 ang; } Obj_2A0500;
typedef struct { s32 a; s32 b; s32 c; s32 d; } Tbl_2A0500;
extern "C" {
extern Tbl_2A0500 D_0031F540;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00157668(Mtx_2A0500 *, Vec3_2A0500, s16);
void *func_003021B0(void *, s32, s32);
void func_0013E730(Attr_2A0500 *);
void func_0016AE78(s32, s32, s32, Vec3_2A0500, Mtx_2A0500 *, s32, s32, s32, s32);
void func_0013CB88(void);
void func_002A0500(Obj_2A0500 *o);
}

void func_002A0500(Obj_2A0500 *o)
{
    Mtx_2A0500 m;
    Vec3_2A0500 off;
    Vec3_2A0500 *pos = &o->pos;
    s32 a = D_0031F540.c;
    s32 b = D_0031F540.d;

    off.x = func_0015A070(o->ang) * 8.0f;
    off.y = func_0015A100(o->ang) * 8.0f;
    off.z = 0.0f;
    func_00157668(&m, Vec3_2A0500(pos->x + off.x, pos->y + off.y, pos->z), o->ang - 0x4000);
    Attr_2A0500 attr;
    func_003021B0(&attr, 0, 8);
    attr.b = 0x80;
    func_0013E730(&attr);
    func_0016AE78(a, b, 1, *pos, &m, 0, -1, 0, 0);
    func_0013CB88();
}
