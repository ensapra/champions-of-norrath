static inline s32 TL(s32 c) {
    return (*(u8 *)(0x47E1F1 + c) & 1) ? c + 0x20 : c;
}
s32 func_00304E88(u8 *a, u8 *b, s32 n) {
    s8 x, y;
    if (n == 0)
        return 0;
    n--;
    do {
        x = *a;
        y = *b;
        if (n == -1 || TL(x) != TL(y))
            break;
        if (n == 0 || x == 0 || y == 0)
            break;
        n--;
        a++;
        b++;
    } while (1);
    return TL(*a) - TL(*b);
}
