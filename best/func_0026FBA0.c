struct S26Sub {
    char pad[0xB0];
    f32 arr[8];
};

static inline void fb08(u8 *arg0, f32 x) {
    f32 lo = *(f32 *)(arg0 + 0xB0);
    S26Sub *tab = (S26Sub *)(arg0 + 0xC);
    f32 one = 1.0f;
    f32 t;
    f32 a;
    *(f32 *)(arg0 + 0x8C) = x;
    *(f32 *)(arg0 + 0xD8) = one - (x - lo) / (*(f32 *)(arg0 + 0xB8) - lo);
    t = one <? *(f32 *)(arg0 + 0x90);
    a = tab->arr[*(s32 *)(arg0 + 0x58)];
    *(f32 *)(arg0 + 0xFC) = a + (tab->arr[*(s32 *)(arg0 + 0x54)] - a) * t;
}

extern "C" void func_0026FBA0(u8 *p, s32 i, f32 v) {
    ((S26Sub *)p)->arr[i] = v;
    if (i == *(s32 *)(p + 0x54)) {
        fb08(p, v);
    }
}
