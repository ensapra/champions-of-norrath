typedef struct 
{
  s32 x;
  s32 y;
  s32 z;
} P12;
typedef struct 
{
  u8 pad[0x10];
  P12 p;
} SP20;
typedef struct { s32 a; s16 b; s16 c; s32 d; s32 e; } SP30;
typedef struct 
{
  u8 pad0[0x10];
  P12 p10;
  u8 pad1C[0x1C];
  u16 f38;
  u8 pad3A[0x12];
  s32 f4C;
  s32 f50;
  u8 pad54[0x94];
  s64 fE8;
  u8 padF0[0x14];
  s32 f104;
  u8 pad108[0x08];
  u8 buf110[0x30];
  u16 f140;
} Obj154828;
extern s32 D_004844A4;
void func_00157668(void *a, P12 *b, s16 c);
void *func_003021B0(void *a, s32 b, s32 c);
void func_0013E730(void *a);
s32 func_0016AE78(s32 a0, s32 a1, s32 a2, P12 *a3, void *a4, s32 a5, s64 a6, s32 a7, s32 a8);
void func_0013CB88(void);
void func_00154828(Obj154828 *o)
{
  s32 t = o->f140;
  SP20 sp20;
  SP30 sp30;
  if ((t ^ 1) & 1)
  {
    sp20.p = o->p10;
    func_00157668(o->buf110, &sp20.p, (s16) (o->f38 + 0x4000));
  }
  if ((D_004844A4 - 3) < o->f104)
  {
    func_003021B0(&sp30, 0, 8);
    sp30.c = 0x20;
    func_0013E730(&sp30);
  }
 do { { P12 sp40 = o->p10; func_0016AE78(o->f4C, o->f50, 1, &sp40, o->buf110, 0, o->fE8, 0, 0); } } while (0);
  if ((D_004844A4 - 3) < o->f104)
  {
    func_0013CB88();
  }
}
