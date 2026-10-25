extern u8 D_010C5218[];
extern u8 D_010C5B78[];
extern u8 D_010C64D8[];
extern long D_010C51E0[];
extern s32 D_010C51B0[];
extern s32 D_010C6E3C[];
extern u8 D_004C90E0[];
extern u8 D_004C9128[];
extern u8 D_001C5700[];
extern u8 D_001C5800[];
extern u8 D_001C5900[];
extern s32 D_001C452C[];
void func_001A3D78(void *, void *, ...);
void func_0014CBF4(s32, void *, s32);
void func_0014D328(s32, s32);
void func_00138990(s32);
void func_00120658(void);
typedef struct 
{
  s32 id;
  s32 pad;
  s64 p;
  s64 q;
} Req;
void func_00120068(s32 *arg0)
{
  Req r;
  s64 *pp;
  s32 i;
  s32 off;
  s32 *p;
  if (arg0)
  {
    p = arg0;
    i = 0;
    off = 0;
    do
    {
      func_001A3D78((D_010C5218 + ((*D_010C6E3C) * 0x960)) + off, D_004C90E0, *(p++));
      pp = &r.p;
      *pp = (s32) ((D_010C5218 + ((*D_010C6E3C) * 0x960)) + off);
      r.id = 0x66;
      func_0014CBF4(D_010C51E0[((*D_010C6E3C) * 4) + i], &r, 1);
      off += 0x258;
      i++;
    }
    while (i < 4);
    if ((*D_010C6E3C) == 0)
    {
      func_001A3D78(D_001C5700, D_004C9128, D_010C5218, D_010C5218 + 0x258, D_010C5218 + 0x4B0, D_010C5218 + 0x708);
    }
    else
      if ((*D_010C6E3C) == 1)
    {
      func_001A3D78(D_001C5800, D_004C9128, D_010C5B78, D_010C5B78 + 0x258, D_010C5B78 + 0x4B0, D_010C5B78 + 0x708);
    }
    else
    {
      func_001A3D78(D_001C5900, D_004C9128, D_010C64D8, D_010C64D8 + 0x258, D_010C64D8 + 0x4B0, D_010C64D8 + 0x708);
    }
    func_00120658();
  }
  func_0014D328(D_010C51B0[*D_010C6E3C], 0xFF);
  func_00138990(D_010C51B0[*D_010C6E3C]);
  *D_001C452C = 0;
}
