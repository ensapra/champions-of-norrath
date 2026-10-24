extern s32 func_0014D29C(s32);
extern void func_0014F288(s32, s32);
extern s32 func_0014F200(s32, u64, s64, void *);
extern void func_001517DC(s32, s32, s32 *);
void func_0014F0F4(s32 a0, s64 a1) {
    s32 p = (s32)a1;
    s32 q;
    s32 m[3];
    if (*(s32 *)(p + 0xC8) != 0)
        func_0014F288(func_0014D29C(p), *(s32 *)(p + 0xC8));
    *(s32 *)(p + 0xC8) = func_0014F200(func_0014D29C(p), *(u32 *)(p + 0x604), p, func_0014F0F4);
    q = *(s32 *)(p + 0x59C);
    if (q != 0) {
        m[1] = *(s32 *)(p + 0x4FC);
        m[2] = *(s32 *)(p + 0x500);
        m[0] = 9;
        func_001517DC(q, p, m);
    }
}
