typedef struct { s32 id; s64 p; } E;
typedef struct { E e[2]; u8 pad[0x3E0]; } B;
void func_0014CBF4(s32, void *, s32);
void func_0016DB4C(u8 *a) {
    s32 i = 0;
    volatile B b;
    if (*(s32 *)(a + 0x9C4) > 0) {
    do {
        s32 n = *(s32 *)(a + 0x9C4);
        s32 f = *(s32 *)(a + 0x928);
        s32 ok;
        s32 off = i * 4;
        s32 *tab;
        s64 p0, p1;
        if (*(s32 *)(a + 0x990) == 0) ok = f >= (i << 12) / n;
        else ok = f >= (i << 12) / (n - 1);
        tab = *(s32 **)(a + 0x980);
        if (*(s32 *)(a + 0x928) != 0 && ok) { p0 = (s32)(a + 0x960); p1 = (s32)(a + 0x9A0); }
        else { p0 = (s32)(a + 0x970); p1 = (s32)(a + 0x9B0); }
        i++;
        b.e[0].p = p0; b.e[0].id = 0x6A;
        b.e[1].p = p1; b.e[1].id = 0x39;
        func_0014CBF4(*(s32 *)((u8 *)tab + off), (void *)&b, 2);
    } while (i < *(s32 *)(a + 0x9C4));
    }
}
