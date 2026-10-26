typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  char pad[0x10];
  V3 pos;
} O;
extern s32 func_00153FA8(void *);
extern void func_00180DA0(void *, V3 *, V3 *, f32);
extern char D_0042C028[];
void func_00208480(O *o)
{
  V3 pos;
  V3 v;
  V3 out;
  f32 z;
  V3 *p;
  V3 *po;
  if (((*((s32 *) (((char *) o) + 0x328))) % 3) == 0)
  {
    do
    {
      v.x = ((((f32) func_00153FA8(o)) * (1.0f / 65536.0f)) * 2.0f) - 1.0f;
      v.y = ((((f32) func_00153FA8(o)) * (1.0f / 65536.0f)) * 2.0f) - 1.0f;
      v.z = ((((f32) func_00153FA8(o)) * (1.0f / 65536.0f)) * 2.0f) - 1.0f;
    }
    while ((((v.x * v.x) + (v.y * v.y)) + (v.z * v.z)) > 1.0f);
    pos = v;
    p = &o->pos;
    po = &out;
    pos.x = (pos.x * 10.0f) + p->x;
    pos.y = (pos.y * 10.0f) + p->y;
    pos.z = (pos.z * 10.0f) + p->z;
    po->x = (z = 0.0f);
    po->y = z;
    po->z = z;
    func_00180DA0(D_0042C028, &pos, po, z);
  }
}
