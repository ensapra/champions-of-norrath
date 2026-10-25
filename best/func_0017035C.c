extern char jtbl_004C006C[];
typedef struct { u64 a; u64 b; } Tag;
void func_001AF710(char *, ...);

void func_0017035C(Tag *t) {
    s32 i;
    s32 *p;
    u64 a = t->a;
    u64 b = t->b;
    u64 id = *((u16 *)t + 1);
    p = (s32 *)(t + 1);
    func_001AF710(jtbl_004C006C + 0xBC24,
                  (s32)(a & 0x7FFF),
                  (s32)((a >> 15) & 1),
                  (s32)id,
                  (s32)((a >> 32) & 0x3FFF),
                  (s32)((a >> 46) & 1),
                  (s32)((a >> 47) & 0x7FF),
                  (s32)((a >> 58) & 3),
                  (s32)(a >> 60),
                  (s32)(b >> 32),
                  (s32)(b & 0xFFFFFFFF));
    for (i = 0; i < (s32)(t->a >> 60); i++, p += 2)
        func_001AF710(jtbl_004C006C + 0xBCAC, i, p[1], p[0]);
}
