extern char D_00452D80[];
extern char D_0044E670[];
u32 D_00483E5C;
s32 D_004844A4;
volatile unsigned long long func_002BA028(void *p, s32 a1, s32 a2, s32 a3, void *h)
{
  u32 temp;
  s32 (*fp)(void *, s32, s32);
  s16 off;
  void *new_var2;
  s32 r;
  u8 *new_var;
  *((s8 *) p) = a1;
  {
    void *base = D_0044E670;
    temp = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
    *((void **) (((u8 *) p) + 20)) = base;
  }
  *((s32 *) (((u8 *) p) + 12)) = a3;
  *((s32 *) (((u8 *) p) + 8)) = (s32) h;
  *((s32 *) (((u8 *) p) + 4)) = 0;
  D_00483E5C = temp;
  new_var = (u8 *) p;
  *((void **) (new_var + 20)) = D_00452D80;
  *((u32 *) (new_var + 16)) = temp >> 16;
  {
    char *sub = ((char *) (*((void **) (((u8 *) (new_var2 = h)) + 0x60)))) - -0x58;
    off = *((s16 *) sub);
    fp = *((s32 (**)(void *, s32, s32)) (sub + 4));
    r = fp(((u8 *) new_var2) + off, 2, a1);
  }
  *((s32 *) (new_var + 24)) = D_004844A4;
  *((s32 *) (new_var + 24)) = (*((s32 *) (new_var + 24))) + (r * 60);
  *((s32 *) (new_var + 28)) = a2;
}
