typedef struct { f32 x, y, z; } V3;
typedef struct { char p0[0xC]; s32 flags; char p10[0xC]; f32 f1C, f20; } O;
extern s32 func_00140F60(void *, char *, s32);
extern s32 func_001411F0(void *, V3 *, s32);
extern s32 func_00143A80(void *, char *, s32);
extern char D_0044C830[], D_00470830[], D_00485400[], D_00485408[];
void func_00216600(O *o, V3 *in, s16 c) {
    V3 v;
    v = *in;
    func_001411F0(o, &v, 0);
    *(void **)((char *)o + 0x48) = D_0044C830;
    o->f1C = 24.0f;
    *(s16 *)((char *)o + 0x38) = c;
    if (func_00143A80(o, D_00485400, 0))
        o->f1C = (f32)func_00140F60(o, D_00485400, 0);
    if (func_00143A80(o, D_00485408, 0))
        o->f1C = (f32)func_00140F60(o, D_00485408, 0);
    if (func_00140F60(o, D_00470830, 0)) {
        o->f20 = 1.0f;
        o->flags |= 0x10;
    }
    if (o->f1C == 0.0f)
        o->flags |= 0x205;
    o->flags |= 2;
}
