#define F(p,o) (*(s32*)((char*)(p)+(o)))
s32 func_0014CE60(s32,s32,s32);
void func_00157CC0(void *p) {
    func_0014CE60(F(p,0x890), F(p,0x5a0) + F(p,0x5d4) - F(p,0x880), F(p,0x5a4) + F(p,0x5d4) - F(p,0x888));
    func_0014CE60(F(p,0x894), F(p,0x5a0) + F(p,0x5d4), F(p,0x5a4) + F(p,0x5d4) - F(p,0x930) * 3 / 2);
}
