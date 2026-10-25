typedef struct Node
{
  char pad[0x1C];
  s16 f1C;
  s16 pad2;
  f32 f20;
  f32 f24;
  s32 pad3;
  f32 f2C;
  f32 f30;
} Node;
typedef struct Slot
{
  void *f0;
  Node *f4;
  f32 f8;
  s32 fC;
  f32 f10;
  s32 f14;
  f32 f18;
  u16 f1C;
  u16 pad;
} Slot;
typedef struct Obj
{
  void *f0;
  s8 count;
  u8 pad[3];
} Obj;
void func_00161528(void *);
extern u32 D_00483E58;
void func_001601F8(Obj *arg0)
{
  float new_var;
  if (arg0->count)
  {
    Slot *e = (Slot *) ((((u8 *) arg0) + ((((s32) arg0->count) - 1) << 5)) + 8);
    u32 seed = (D_00483E58 * 0x19660D) + 0x3C6EF35F;
    new_var = (((f32) ((s32) (seed >> 16))) * 0.0000152587890625f) * ((f32) (*((s32 *) (((u8 *) e->f0) + 4))));
    D_00483E58 = seed;
    e->f18 = new_var;
    if (e->f1C & 0x800)
    {
      Node *q;
      f32 dt;
      f32 a;
      f32 b;
      f32 c;
      f32 d;
      func_00161528(e);
      q = e->f4;
      dt = e->f18 - ((f32) q->f1C);
      c = q->f2C;
      d = q->f30;
      a = q->f20;
      b = q->f24;
      q->f20 = a - (a + (c * dt));
      q->f24 = b - (b + (d * dt));
    }
  }
}
