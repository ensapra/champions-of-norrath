void func_0026FB08(u8 *arg0, f32 x) {
    f32 lo = *(f32 *)(arg0 + 0xB0);
    f32 *tab = (f32 *)(arg0 + 0xC);
    f32 one = 1.0f;
    f32 t;
    f32 a;
    *(f32 *)(arg0 + 0x8C) = x;
    *(f32 *)(arg0 + 0xD8) = one - (x - lo) / (*(f32 *)(arg0 + 0xB8) - lo);
    t = one <? *(f32 *)(arg0 + 0x90);
    a = tab[*(s32 *)(arg0 + 0x58) + 0x2C];
    *(f32 *)(arg0 + 0xFC) = a + (tab[*(s32 *)(arg0 + 0x54) + 0x2C] - a) * t;
}
