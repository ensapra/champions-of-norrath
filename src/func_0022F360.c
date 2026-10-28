struct V3 { f32 x, y, z; };
struct O { char p0[0x48]; void *f48; char p1[0x58 - 0x4C]; V3 f58; s32 f64; s32 f68; s32 f6C; };
extern "C" s32 func_00153FD0(O *, V3, s32, s32);
extern "C" void func_00143830(O *);
extern "C" s32 D_0044F348[];
s32 D_004844A4;
extern "C" void func_0022F360(O *o, V3 a, V3 b, s32 a3, s32 a4) {
    func_00153FD0(o, a, a4, 0);
    o->f48 = D_0044F348;
    o->f58 = b;
    o->f64 = D_004844A4 + 0x12C;
    o->f68 = a3;
    o->f6C = 0;
    func_00143830(o);
}
