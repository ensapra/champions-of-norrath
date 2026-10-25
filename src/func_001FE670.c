typedef struct { f32 x, y, z; } V3;
extern f32 D_00481074, D_00481078;
extern s32 D_004844A4, D_00484F74;
extern f32 func_0015A100(s32);
extern void func_001815C8(V3 *, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_001FE670(u8 *o) {
    V3 unused;
    V3 p;
    f32 k, a, s;
    s32 t = D_004844A4;
    k = (f32)(*(s32 *)(o + 0x58) - t + 180) * D_00481074;
    if (k > 1.0f) k = 1.0f;
    s = func_0015A100((t % 32768) * 0xA8D);
    a = k * D_00481078;
    p = *(V3 *)(o + 0x10);
    func_001815C8(&p, 0x50, 0, 0, (s32)(k * 128.0f), D_00484F74, (s16)(D_004844A4 << 10), 1,
                  0.0f, (f32)(s32)(a + s * (f32)(s32)(a * 0.25f)));
}
