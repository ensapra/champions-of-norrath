s32 D_00484F44; u8 D_00484538;
void func_0026C190(void *, s32, f32, f32, f32);
void func_0026FAF8(void *, s32); void func_0026FB00(void *, s16); void func_0026FB08(void *, f32);
void func_003021B0(void *, s32, s32);

typedef struct {
    char pad0[0x38]; s32 f38;
    char pad1[0x44 - 0x3C]; s32 f44, f48, f4C, f50, idx, f58, f5C;
    char pad2[0x6C - 0x60]; s16 g[3]; char padg[2]; u16 f74;
    char pad3[0x8A - 0x76]; s16 f8A;
    char pad4[0x90 - 0x8C]; f32 f90;
    char pad5[0x98 - 0x94]; f32 f98, f9C, fA0, fA4;
    char pad6[0xB0 - 0xA8]; f32 v[4];
    f32 fC0, fC4, fC8, fCC, fD0, fD4;
    char pad7[0xDC - 0xD8]; f32 fDC, fE0, fE4, fE8, fEC, fF0;
    char pad8[0x100 - 0xF4]; char sub[0x61];
    s8 f161;
    char pad9[0x16C - 0x162]; s8 f16C, f16D, f16E;
} Obj;

void func_0026BE00(Obj *o, s32 a, s32 c) {
    if (a) {
        o->g[0] = 8000;
        o->g[1] = 10000;
        o->g[2] = 13000;
        o->v[0] = 170.0f;
        o->v[1] = 420.0f;
        o->v[2] = 500.0f;
        o->v[3] = 90.0f;
        o->fC4 = o->fC0 = 60.0f;
        o->fDC = 150.0f;
        o->fE0 = 40.0f;
        o->fE4 = 20.0f;
        o->fE8 = -20.0f;
        o->fF0 = o->fEC = -25.0f;
        o->fA4 = -1.0f;
        o->f50 = 0;
    }
    if (c) {
        o->f58 = 0;
        o->idx = 1;
        o->f161 = -1;
    }
    o->f8A = -8192;
    o->fA0 = 0.0f;
    o->f44 = -1;
    o->f5C = 1;
    o->f74 = o->g[o->idx];
    o->f16C = 0;
    o->f16D = 0;
    o->f90 = 1.0f;
    o->f38 = 0;
    o->f4C = 0;
    o->f98 = o->fA0;
    o->fC8 = o->fA0;
    o->fD0 = o->fA0;
    o->fD4 = o->fA0;
    o->fCC = o->fA0;
    o->f9C = o->fA0;
    if (D_00484F44 <= 0)
        o->f16E = D_00484538;
    else
        o->f16E = (u8)D_00484F44;
    func_003021B0(o->sub, 0, 0x60);
    func_0026FAF8(o, -8192);
    func_0026FB00(o, o->g[o->idx]);
    func_0026FB08(o, o->v[o->idx]);
    func_0026C190(o, 0, 0.0f, 0.0f, 0.0f);
    o->f48 = 1;
}
