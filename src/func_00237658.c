struct Vec3 { f32 x, y, z; Vec3() {} };
typedef struct { s32 a, b; } Pair;
typedef struct { s32 p0, p4, p8, c, p10, e; } Model;
typedef struct {
  u8 pad0[0x10];
  Vec3 pos;
  u8 pad1[8];
  Model *model;
  u8 pad2[0x38 - 0x28];
  s16 s38;
  u8 pad3[0x120 - 0x3a];
  u8 b120[0x23c - 0x120];
  s16 s23c;
  u8 pad4[0x3c4 - 0x23e];
  s32 n;
  u8 b3c8[0x408 - 0x3c8];
  u8 b408[0x450 - 0x408];
  s32 n2;
} Obj;
extern "C" {
void func_001DC2C0(void *, s32, void *, Vec3, s32, s32, void *, s32, f32, f32, s32, s32);
s32 func_00109808(Obj *, s32, s32, s32);
void func_0016CBF8(Vec3);
void func_0013E730(void *);
void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0013CB88(void);
void func_0016CD20(void);

void func_00237658(Obj *o) {
  s32 r;
  if (o->n) {
    Model *m = o->model;
    Pair *x = (Pair *)m;
    func_001DC2C0(o->b408, x[o->n].b, o->b3c8, o->pos, o->s38, m->c, o->b120, o->s23c == 6, 0.5f, 1.0f, 0, 0);
  }
  r = func_00109808(o, o->model->c, o->model->e, 0);
  if (o->n) {
    func_0016CBF8(o->pos);
    func_0013E730((u8 *)o + 0x420);
    Pair *p = (Pair *)(o->n * 8 + (s32)o->model);
    func_0016C060(p[0].b, p[1].b, 0, o->model->c, r, -1, -1, 0);
    func_0013CB88();
    func_0016CD20();
  }
}
}
