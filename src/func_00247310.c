s32 func_00111B90(void *, u8 *);
s32 func_00246598(void *);
s32 func_001092F0(void *, s32, f32, f32, f32, f32, f32);
f32 D_00484CAC;
#define READ(p,T) (p += sizeof(T), *(T *)(p - sizeof(T)))
s32 func_00247310(u8 *arg0, u8 *arg1) {
    f32 saved;
    u8 *start = arg1;
    s32 t;
    arg1 += func_00111B90(arg0, arg1);
    t = READ(arg1, s32);
    *(s8 *)(arg0 + 0x55) = t;
    *(s32 *)(arg0 + 0x450) = READ(arg1, s32);
    *(s32 *)(arg0 + 0x3C0) = READ(arg1, s32);
    *(s32 *)(arg0 + 0xD0) = READ(arg1, s32);
    if (READ(arg1, s8))
        *(s64 *)(arg0 + 0xA0) |= 0x400000;
    func_00246598(arg0);
    saved = D_00484CAC;
    D_00484CAC = (f32)*(s32 *)(arg0 + 0x450);
    func_001092F0(arg0, 0, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    D_00484CAC = saved;
    return arg1 - start;
}
