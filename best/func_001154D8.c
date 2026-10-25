typedef struct 
{
  s32 a;
  f32 b;
  f32 c;
} V3i;
typedef struct 
{
  s32 a;
  s32 b;
} V2i;
typedef struct 
{
  s32 x;
} Str;
typedef struct S
{
  Str s0;
  Str s4;
  Str s8;
  s32 unkC;
  V3i unk10;
  f32 unk1C;
  f32 unk20;
  s32 unk24;
  u8 unk28;
  u8 unk29;
  void *unk2C;
  f32 unk30;
  s32 unk34;
  u16 unk38;
  f32 unk3C;
  f32 unk40;
  s32 *unk44;
  s32 (**vt)();
  s32 unk4C;
  s32 unk50;
  s32 unk54;
  s32 unk58;
  s32 unk5C;
  s32 unk60;
  s32 *unk64;
  s32 *unk68;
  V2i unk6C;
  s32 unk74;
  s32 unk78;
  u8 unk7C;
  s32 unk80;
} S;
extern s32 (*D_0044CCB8[])();
extern s32 (*D_0044D498[])();
void *func_001441B8(s32);
volatile long long func_00194498(Str *, Str *);
S *func_001154D8(S *src)
{
  S *p = func_001441B8(0x84);
  s32 *new_var2;
  S *r = NULL;
  s32 new_var;
  if (p != NULL)
  {
    p->vt = D_0044D498;
    func_00194498(&p->s0, &src->s0);
    func_00194498(&p->s4, &src->s4);
    func_00194498(&p->s8, &src->s8);
    p->unkC = src->unkC;
    p->unk10 = src->unk10;
    p->unk1C = src->unk1C;
    p->unk20 = src->unk20;
    p->unk24 = src->unk24;
    p->unk28 = src->unk28;
    p->unk29 = src->unk29;
    p->unk2C = src->unk2C;
    p->unk30 = src->unk30;
    p->unk34 = src->unk34;
    p->unk38 = src->unk38;
    p->unk3C = src->unk3C;
    p->unk40 = src->unk40;
    p->unk44 = src->unk44;
    p->vt = D_0044CCB8;
    p->unk4C = (new_var = src->unk4C);
    p->unk50 = src->unk50;
    p->unk54 = src->unk54;
    p->unk58 = src->unk58;
    p->unk5C = src->unk5C;
    p->unk60 = src->unk60;
    new_var2 = src->unk68;
    p->unk64 = src->unk64;
    p->unk68 = new_var2;
    p->unk6C = src->unk6C;
    p->unk74 = src->unk74;
    p->unk78 = src->unk78;
    p->unk7C = src->unk7C;
    p->unk80 = src->unk80;
    r = p;
  }
  return r;
}
