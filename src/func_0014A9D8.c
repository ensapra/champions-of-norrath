#define F(p,o) (*(s32*)((char*)(p)+(o)))
s32 func_0011B9A8(s32);
void func_0014A8C4(void *);
void func_0014B0F0(void *);
void func_0014A9D8(void *a) {
    s32 n;
    s32 m;
    F(a, 0x928) = 0;
    n = (F(a, 0x940) << 5) + 0x80;
    m = func_0011B9A8(n * 2);
    F(a, 0x910) = m;
    F(a, 0x914) = m + n;
    F(a, 0x91C) = func_0011B9A8(F(a, 0x940) * 16);
    F(a, 0x920) = 1;
    F(a, 0x930) = F(a, 0x8E0);
    F(a, 0x924) = 2;
    func_0014B0F0(a);
    func_0014A8C4(a);
    F(a, 0x4D0) = 0;
}
