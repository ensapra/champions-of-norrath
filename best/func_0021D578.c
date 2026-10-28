struct V3 { f32 x, y, z; };
struct O { char p0[0xC]; s32 f0C; V3 pos; char p1[0x38 - 0x1C]; s16 f38; char p2[0x48 - 0x3A]; void *f48; char p3[0x74 - 0x4C]; s32 f74; s32 f78; s8 f7C; };
extern "C" s32 func_001411F0(O *, V3, s32, s32);
extern "C" s32 func_0017DB78(f32, s32, V3, s32);
extern "C" s32 D_0044CCB8[];
extern "C" s32 D_004844A0;
extern "C" void func_0021D578(O *o, V3 src, s16 a2, s32 a3) {
    func_001411F0(o, src, 0, a3);
    o->f48 = D_0044CCB8;
    o->f0C |= 0x10;
    o->f38 = a2;
    o->f78 = -1;
    o->f74 = 0;
    o->f7C = func_0017DB78(12.0f, D_004844A0, o->pos, 0);
}
