s32 func_0014F02C(s32 a, s32 b, s32 c, s32 d, u8 *obj) {
    void *p;
    if (*(s32 *)(obj + 0x9C) == 0)
        return 0;
    p = *(void **)(obj + 0x4C);
    p = *(void **)((u8 *)p + 0xBC);
    return ((s32 (*)(void *))p)(obj);
}

void func_0014F18C(s32 a0, s64 a1) {
    s32 p = (s32)a1;
    *(s32 *)(p + 0x564) = 0;
    *(s32 *)(p + 0x560) = 0;
}

typedef struct { s32 a, b, c; } Msg14F;
extern s32 func_0014D29C(s32);
extern void func_0014F288(s32, s32);
extern s32 func_0014F200(s32, u64, s64, void *);
extern void func_001517DC(s32, s32, Msg14F *);
void func_0014F0F4(s32 a0, s64 a1) {
    s32 p = (s32)a1;
    s32 q;
    Msg14F m;
    if (*(s32 *)(p + 0xC8) != 0)
        func_0014F288(func_0014D29C(p), *(s32 *)(p + 0xC8));
    *(s32 *)(p + 0xC8) = func_0014F200(func_0014D29C(p), *(u32 *)(p + 0x604), p, func_0014F0F4);
    q = *(s32 *)(p + 0x59C);
    if (q != 0) {
        m.a = 9;
        m.b = *(s32 *)(p + 0x4FC);
        m.c = *(s32 *)(p + 0x500);
        func_001517DC(q, p, &m);
    }
}
