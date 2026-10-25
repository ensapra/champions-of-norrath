typedef struct { char c[32]; } B32;
typedef struct {
    char pad[0x5C]; void *r5C;
    char pad2[4]; void *r64;
    char pad3[4]; void *r6C;
    char pad4[4]; void *r74;
} Res;
typedef struct {
    char pad0[0x24];
    Res *res;
    char pad1[0x120 - 0x28];
    char g[4];
    s8 st;
    char pad2[3];
    B32 saved;
    char pad3[0x1A8 - 0x148];
    char padx[8];
    f32 f1;
    f32 f2;
    f32 f3;
} Obj;
extern void func_001640D0(void *);
extern void ovl_ntgui2_func_001638B8(void *, void *, s32, f32, f32, f32, f32, f32);
f32 D_00480CB0;

void func_001EEC00(Obj *o) {
    B32 tmp;
    func_001640D0(o->g);
    tmp = o->saved;
    o->st = 0;
    ovl_ntgui2_func_001638B8(o->g, o->res->r74, 0x201, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f);
    ovl_ntgui2_func_001638B8(o->g, o->res->r5C, 0x201, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    ovl_ntgui2_func_001638B8(o->g, o->res->r64, 0x201, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    ovl_ntgui2_func_001638B8(o->g, o->res->r6C, 0x201, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    *(B32 *)((char *)o + 0x1A8) = tmp;
    o->f1 = 1.0f;
    o->f3 = 1.0f;
    o->st = 5;
    o->f2 = D_00480CB0;
}
