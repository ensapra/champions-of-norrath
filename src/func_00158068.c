extern s16 D_006021C8[256];
f32 *func_00158068(f32 *out, s32 a, s32 b) {
    s32 c = a + b;
    s32 d = c + b;
    f32 fa = (a & 0xF) * 0.0625f;
    f32 fc = (c & 0xF) * 0.0625f;
    f32 fd = (d & 0xF) * 0.0625f;
    s32 ia = a >> 4, ic = c >> 4, id = d >> 4;
    out[0] = (D_006021C8[ia & 0xFF] * (1.0f - fa) + D_006021C8[(ia + 1) & 0xFF] * fa) * (1.0f / 32768.0f);
    out[1] = (D_006021C8[ic & 0xFF] * (1.0f - fc) + D_006021C8[(ic + 1) & 0xFF] * fc) * (1.0f / 32768.0f);
    out[2] = (D_006021C8[id & 0xFF] * (1.0f - fd) + D_006021C8[(id + 1) & 0xFF] * fd) * (1.0f / 32768.0f);
    return out;
}
