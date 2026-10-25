typedef struct S124B80
{
  s32 unk00;
  s32 unk04;
  s32 unk08;
  s32 unk0C;
  u8 unk10[12];
  f32 unk1C;
  f32 unk20;
  s32 unk24;
  u8 unk28;
  u8 unk29;
  u8 pad2A[2];
  u32 unk2C;
  f32 unk30;
  s32 unk34;
  u16 unk38;
  u8 pad3A[2];
  f32 unk3C;
  f32 unk40;
  s32 unk44;
  u8 *unk48;
  u8 unk4C;
  u8 unk4D[4];
  u16 unk52;
  u16 unk54;
} S124B80;
extern u8 D_0044D498[];
extern u8 D_0044A420[];
extern void *func_001441B8(s32);
extern void func_00194498(void *, void *);
void *func_00124B80(S124B80 *arg0)
{
  register S124B80 *p;
  u8 *d;
  register u8 *s;
  s32 i;
  void *res;
  f32 f30;
  s32 new_var;
  u16 u38;
  s32 i2C;
  f32 f3C;
  s32 i34;
  s32 i44;
  f32 f40;
  p = func_001441B8(0x58);
  if (p != NULL)
  {
    p->unk48 = D_0044D498;
    func_00194498(&p->unk00, &arg0->unk00);
    func_00194498(&p->unk04, &arg0->unk04);
    func_00194498(&p->unk08, &arg0->unk08);
    p->unk0C = arg0->unk0C;
    __builtin_memcpy(p->unk10, arg0->unk10, 12);
    p->unk1C = arg0->unk1C;
    p->unk24 = arg0->unk24;
    p->unk20 = arg0->unk20;
    p->unk28 = arg0->unk28;
    p->unk29 = arg0->unk29;
    p->unk48 = D_0044A420;
    f30 = arg0->unk30;
    u38 = arg0->unk38;
    p->unk30 = f30;
    i2C = arg0->unk2C;
    f3C = arg0->unk3C;
    new_var = arg0->unk44;
    i34 = arg0->unk34;
    p->unk3C = f3C;
    i44 = new_var;
    f40 = arg0->unk40;
    p->unk2C = i2C;
    p->unk34 = i34;
    p->unk38 = u38;
    p->unk40 = f40;
    p->unk44 = i44;
    p->unk4C = arg0->unk4C;
    d = ((u8 *) p) + 0x4D;
    i = 3;
    s = ((u8 *) arg0) + 0x4D;
    do
    {
      *(d++) = *(s++);
    }
    while ((--i) != (-1));
    p->unk52 = arg0->unk52;
    p->unk54 = arg0->unk54;
    res = p;
  }
  else
  {
    res = NULL;
  }
  return res;
}
