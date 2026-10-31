extern u8 D_0047E1F1[];

static inline s32 TL(s32 c)
{
    return (*(D_0047E1F1 + c) & 1) ? c + 0x20 : c;
}

s32 func_00304168(s8 *a, s8 *b)
{
    s32 c1, c2;
    s32 d1, d2;

    c1 = *a;
    if (c1 == 0) goto done;
    c2 = *b;
    if (TL(c1) != TL(c2)) goto done;
    a++;
    for (;;) {
        b++;
        d1 = *a;
        if (d1 == 0) goto done;
        d2 = *b;
        if (TL(d1) != TL(d2)) goto done;
        a++;
    }
done:
    return TL(*(u8 *)a) - TL(*(u8 *)b);
}
