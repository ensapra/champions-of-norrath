extern s32 func_00151FA4(s32);
extern s32 func_00152320(s32);
extern s32 func_0014EE80(s32, s32, s32, s32, u8 *, s32, s32 *, s32 *);
extern s32 func_0014F02C(s32, s32, s32, s32, u8 *);

s32 func_0014D4EC(s32 a, s32 b, s32 c, s32 d, u8 *e)
{
    s32 sp[2];
    s32 r1 = func_00151FA4(b);
    s32 r2 = func_00152320(a);

    if (!*(s32 *)(e + 0xA4))
        goto fail;
    if (!*(s32 *)(e + 0x5F8))
        goto fail;
    if (*(s32 *)(e + 0xAC))
        goto fail;
    if (r1) {
        if (func_0014EE80(a, b, c, d, e, r2, &sp[0], &sp[1]))
            return 1;
    } else {
        if (func_0014F02C(a, b, c, d, e))
            return 1;
    }
fail:
    return 0;
}
