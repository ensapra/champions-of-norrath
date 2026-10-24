extern s32 func_00143C38(void *);
s32 func_002331A0(u8 *arg0, s32 *p) {
    s32 *start = p;
    *p = func_00143C38(arg0 + 0x3C0);
    p++;
    *p = func_00143C38(arg0 + 0x3E0);
    p++;
    *p = func_00143C38(arg0 + 0x400);
    p++;
    *p = *(s16 *)(arg0 + 0x42A);
    p++;
    *p = *(s32 *)(arg0 + 0xF4);
    p++;
    *(f32 *)p = *(f32 *)(arg0 + 0xB0);
    p++;
    return (u8 *)p - (u8 *)start;
}
