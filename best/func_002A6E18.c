typedef struct 
{
  u8 pad[0x0E];
  volatile s16 f0E;
  volatile s16 f10;
  volatile s16 f12;
  volatile s16 f14;
  volatile s16 f16;
  volatile s16 f18;
  volatile s16 f1A;
  volatile s16 f1C;
  volatile s16 f1E;
  volatile s16 f20;
  u8 pad2[2];
  volatile f32 f24;
  volatile s32 f28;
  volatile f32 f2C;
  volatile f32 f30;
  volatile f32 f34;
} ObjParam3;
extern f32 D_00482AE8;
void func_002A6E18(ObjParam3 *o)
{
  f32 a = 10.0f;
  f32 b = D_00482AE8;
  f32 c = 1.0f;
  s32 new_var;
  s32 one = 1;
 do { o->f18 = 0x5A; o->f34 = c; o->f24 = a; o->f1A = 0x1E; o->f2C = b; } while (0);
  new_var = one;
  o->f20 = new_var;
  o->f0E = new_var;
  o->f10 = new_var;
  o->f28 = 0;
  o->f12 = new_var;
  o->f1C = new_var;
  o->f16 = new_var;
}
