typedef struct { s32 x, y, z; } V3;
typedef struct { char pad[0x10]; V3 pos; char pad2[0x48]; s16 ang; } Obj;
typedef struct { s32 a, b, c, d; } T4;
extern s32 D_0031F540[];
f32 D_00482964;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00157668(void *, void *, s16);
void func_003021B0(void *, s32, s32);
void func_0013E730(void *);
void func_0016AE78(s32, s32, s32, void *, void *, s32, s32, s32, s32);
void func_0013CB88(void);

void func_0029EE70(Obj *o) {
    char m[0x30];
    f32 v[8];
    V3 p;
    T4 t;
    V3 q;
    f32 s = D_00482964;
    s32 a = D_0031F540[2];
    s32 b = D_0031F540[3];
    v[0] = func_0015A070(o->ang) * s;
    v[1] = func_0015A100(o->ang) * s;
    *(s32 *)&v[2] = 0;
    p = o->pos;
    func_00157668(m, &p, o->ang - 0x4000);
    func_003021B0(&t, 0, 8);
    *(s16 *)((char *)&t + 4) = 0x80;
    func_0013E730(&t);
    q = o->pos;
    func_0016AE78(a, b, 1, &q, m, 0, -1, 0, 0);
    func_0013CB88();
}
