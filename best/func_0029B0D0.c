typedef struct { s8 f0; s32 f4, f8, fc, f10, f14; f32 f18; } Obj;
extern f32 D_004828BC;
extern u32 D_00483E5C;
extern char D_0044E670[], D_004510D0[], D_00477FF8[], D_00486228[];
extern s32 func_00165DC0(void *, void *, s32, s32);
extern s32 func_0024D308(s32, s32, f32);

s32 func_0029B0D0(Obj *o, s8 a, s32 b, s32 c) {
    u32 r;
    o->f0 = a;
    o->f14 = (s32)D_0044E670;
    o->f8 = c;
    o->fc = b;
    o->f4 = 0;
    r = D_00483E5C * 0x19660D + 0x3C6EF35F;
    D_00483E5C = r;
    o->f18 = D_004828BC;
    o->f10 = r >> 16;
    o->f14 = (s32)D_004510D0;
    return func_0024D308(func_00165DC0(D_00486228, D_00477FF8, b, c), b, 1.0f);
}
