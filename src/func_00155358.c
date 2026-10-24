#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void func_00155358(u8 *o, s32 a) {
    s32 base = F(o, s32, 0x5D4);
    s32 x, y;
    x = F(o, s32, 0x810) + F(o, s32, 0x880);
    x += base + F(o, s32, 0x5A0);
    y = F(o, s32, 0x814) + F(o, s32, 0x888);
    y += base + F(o, s32, 0x5A4);
    x += F(o, s32, 0x878);
    y += F(o, s32, 0x87C);
    ((void (*)(s32, s32, s32, void *))F(F(o, void *, 0x4C), void *, 0x124))(a, x, y, o + 0x818);
}
