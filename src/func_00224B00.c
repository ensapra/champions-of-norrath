extern void func_00163830(void *, s32, s32);
extern void func_00163BA0(void *);
s32 func_00224B00(u8 *g, char *s) {
    char *p = s;
    s32 a, d; s16 b; s8 c, e;
    s += 4;
    a = *(s32 *)(s - 4);
    s += 2;
    b = *(s16 *)(s - 2);
    s += 1;
    *(s64 *)(g + 0xC8) = a;
    *(s16 *)(g + 0xDC) = b;
    c = s[-1];
    s += 1;
    *(s8 *)(g + 0xE4) = c;
    e = s[-1];
    s += 4;
    *(s8 *)(g + 0xE5) = e;
    d = *(s32 *)(s - 4);
    *(s32 *)(g + 0xD8) = d;
    if (d != 0) {
        func_00163830(g + 0x98, *(s32 *)(g + 0xF4), 0x204);
        func_00163BA0(g + 0x98);
        if (*(s16 *)(g + 0xDC) <= 0)
            *(s32 *)(g + 0xC) &= 0xFFEFFFFF;
    }
    return s - p;
}
