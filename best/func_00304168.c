extern u8 D_0047E1F1;
static inline s32 TL(s32 c) {
    return (*(&D_0047E1F1 + c) & 1) ? c + 0x20 : c;
}
s32 func_00304168(char *a, char *b) {
    while (*a && TL(*a) == TL(*b)) {
        a++;
        b++;
    }
    return TL(*(u8 *)a) - TL(*(u8 *)b);
}
