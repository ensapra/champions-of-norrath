typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } V12;
typedef struct {
    char p0[0xC]; s32 s0C; char p1[0x28-0x10]; s8 s28; char p2[0x38-0x29]; s16 s38;
    char p3[0x48-0x3A]; void *p48; f32 f4C; f32 f50; char p4[0x58-0x54]; s8 s58; s8 s59;
} Obj;
extern s64 D_0046D0C0[2];
extern char D_0044A390[];
s32 func_001411F0(Obj *, V12 *, s32, s32);
s32 func_00143830(Obj *);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_002FB320(f32);
s32 func_002FB680(s32, s64);
f32 func_002FBC20(s32);
void func_001E5700(Obj *o, V12 *p, s32 ang) {
    s64 k = D_0046D0C0[0];
    V12 t = *p;
    func_001411F0(o, &t, 0, 0);
    o->p48 = D_0044A390;
    o->s28 = -0x10;
    o->s38 = ang;
    o->f4C = func_002FBC20(func_002FB680(func_002FB320(func_0015A070(ang)), k));
    o->f50 = func_002FBC20(func_002FB680(func_002FB320(func_0015A100(o->s38)), k));
    o->s0C = 9;
    func_00143830(o);
    o->s58 = 0;
    o->s59 = 0;
}
