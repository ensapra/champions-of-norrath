typedef struct 
{
  u32 x;
  u32 y;
  u32 z;
} P12;
typedef struct 
{
  u32 a;
  u32 b;
  f32 f;
  u32 c;
} S16;
extern S16 D_004F40D0;
extern u8 D_0037EF00[];
extern u16 D_00486858[4];
void func_00159B98(void *, void *, void *);
void *memcpy(void *, const void *, unsigned int);
void func_0013E818(P12 *a, u16 *b)
{
  P12 tmp;
  u16 *new_var;
  memcpy(&tmp, a, 12);
  D_00486858[0] = b[0];
  D_00486858[1] = b[1];
  D_00486858[2] = b[2];
  D_00486858[3] = new_var[3];
  func_00159B98(&D_004F40D0, D_0037EF00, &tmp);
  new_var = b;
  D_004F40D0.f = -D_004F40D0.f;
}
