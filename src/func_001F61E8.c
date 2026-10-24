s32 func_001119D8(void *, void *);
s32 func_001F61E8(void *a, u8 *b) {
    u8 *base = b;
    s32 n = func_001119D8(a, b);
    b += n;
    *(s32 *)b = *(s32 *)((u8 *)a + 0x3C0);
    b += 4;
    *(s32 *)b = *(s8 *)((u8 *)a + 0x450);
    b += 4;
    return b - base;
}

s32 func_00111B90(void *, void *);
s64 func_0016C970(s32, s32);
s32 func_001F6240(void *a, u8 *b) {
    u8 *base = b;
    u8 *p;
    s32 v;
    s32 n = func_00111B90(a, b);
    p = b + n;
    p += 4;
    *(s32 *)((u8 *)a + 0x3C0) = *(s32 *)(p - 4);
    p += 4;
    v = *(s32 *)(p - 4);
    *(s8 *)((u8 *)a + 0x9C) = 0;
    *(s32 *)((u8 *)a + 0xF4) = 0;
    *(s8 *)((u8 *)a + 0x450) = v;
    if (*(s8 *)((u8 *)a + 0x450) == 2) {
        *(s8 *)((u8 *)a + 0x9C) = 6;
        *(s32 *)((u8 *)a + 0xF4) = 1;
    }
    *(s64 *)((u8 *)a + 0x228) = func_0016C970(*(s32 *)(*(u8 **)((u8 *)a + 0x24) + 0xC), *(s32 *)((u8 *)a + 0xF4));
    if (*(s16 *)((u8 *)a + 0x23C) == 10) {
        *(s32 *)((u8 *)a + 0x3C0) = 0;
    }
    return p - base;
}

void func_00109808(void *, s32, s32, s32);
void func_001F2DC8(void *a) {
    void (*fp)(void *, s32, s32, s32) = func_00109808;
    u8 *t = *(u8 **)((u8 *)a + 0x24);
    s8 idx = *(s8 *)((u8 *)a + 0x3C0);
    fp(a, *(s32 *)(t + 0xC), *(s32 *)(t + idx * 8 + 0x14), 0);
}
