void func_0014CE60(s32, s32, s32);
#define F(o) (*(s32*)((char*)p+(o)))
void func_0016F754(void *p)
{
  s32 x = F(0x5A0) + F(0x5D4);
  s32 y = (F(0x5A4) + F(0x5D4)) + ((F(0x5B0) - F(0xA10)) >> 1);
  x += F(0xA1C);
  func_0014CE60(F(0x984), x, y);
  func_0014CE60(F(0x980), x + (F(0xA10) + F(0xA1C)), F(0x5A4) + F(0x5D4));
}
