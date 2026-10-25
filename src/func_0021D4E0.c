typedef struct { f32 x, y, z; } V3;
extern "C" f32 func_0015A100(s32);
extern "C" void func_001815C8(V3, s32, s32, s32, s32, s32, s16, s32, f32, f32);
extern "C" s32 D_004844A4;
extern "C" s32 D_004844BC;
struct O { char pad[0x10]; V3 pos; };
extern "C" void func_0021D4E0(O *o) {
    f32 f = func_0015A100(D_004844A4 << 10) * 250.0f;
    func_001815C8(o->pos, 0x32, 0x64, 0xFF, 0x80, D_004844BC, (s16)((u16)D_004844A4 << 9), 3, 5.0f, f + 8000.0f);
}
