typedef struct 
{
  char c[11];
} S11;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
void func_0013CCC8(V3 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
unsigned int func_00165B30(void *);
void func_00191490(void *, s32, void *, s32);
void func_001C7DA0(s32);
void func_001C7DB8(s32);
void func_0026FA88(s32, s32);
extern S11 D_00476198;
extern S11 D_004761A8;
extern S11 D_004761B8;
extern S11 D_004761C8;
extern S11 D_008D5A98;
extern char D_004761D8[];
extern char func_0027A658[];
s8 D_004844B4;
s32 D_00484F50;
s32 D_00485EC4;
s8 D_00486D88;
inline static V3 *vset(V3 *p, f32 x, f32 y, f32 z)
{
  p->x = x;
  p->y = y;
  p->z = z;
  return p;
}

void func_00279CB8(void)
{
  V3 v;
  f32 zero;
  D_00486D88 = 1;
  func_001C7DA0(1);
  func_001C7DB8(0);
  func_0026FA88(D_00484F50, 0);
  zero = 0.0f;
  func_0013CCC8(vset(&v, zero, zero, -1.0f), 0x80, 0, 0, 0x80, 0, 0, 0, 0, 0x80);
  func_00165B30(&D_00476198);
  if (D_004844B4 == 3)
  {
    D_008D5A98 = D_004761A8;
  }
  else
    if (D_004844B4 == 4)
  {
    D_008D5A98 = D_004761B8;
  }
  else
  {
    D_008D5A98 = D_004761C8;
  }
  func_00165B30(&D_008D5A98);
  func_00191490(func_0027A658, 9, D_004761D8, 1);
  D_00485EC4 = 1;
}
