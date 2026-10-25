struct V { f32 x, y, z; };
extern "C" {
extern f32 D_0047FD34;
s32 func_0016CD50(s32);
void func_0016C238(s32, void *, V, s32, s32, void *, void *, s32, f32);
}
struct B {
  char p0[0x10]; V pos; char p1[0x38 - 0x1C]; s16 f38; char p2[0x48 - 0x3A];
  virtual ~B();
  virtual s32 f2(); virtual s32 f3(); virtual s32 f4(); virtual s32 f5(); virtual s32 f6(); virtual s32 f7(); virtual s32 f8();
  virtual s32 f9(); virtual s32 f10(); virtual s32 f11(); virtual s32 f12(); virtual s32 f13(); virtual s32 f14(); virtual s32 f15();
  virtual s32 Get();
};
struct E : B {
  char p3[0xE0 - 0x4C];
  f32 fE0;
};
struct O { char p[0x10]; V pos; };
extern "C" s32 func_00147278(O *out, E *o) {
  s32 n = 0, h;
  if (!o) return 0;
  h = o->Get();
  if (h) n = func_0016CD50(h);
  if (!n) return 0;
  {
      f32 best = D_0047FD34;
      f32 mx = 0.0f;
      s32 i;
      V out1;
      f32 r10[4];
      s32 bi = 0;
      V *op;
      for (i = 0; i < n; i++) {
        func_0016C238(h, (char *)o + 0x120, o->pos, o->f38, i, &out1, r10, 0, o->fE0);
        if (mx < r10[0]) mx = r10[0];
      }
      op = &out->pos;
      for (i = 0; i < n; i++) {
        V out2;
        V *q = &out2;
        func_0016C238(h, (char *)o + 0x120, o->pos, o->f38, i, q, r10, 0, o->fE0);
        if (r10[0] < mx * 0.75f) continue;
        {
          f32 dx = op->x - q->x, dy = op->y - out2.y, dz = op->z - out2.z;
          f32 d = dx * dx + dy * dy + dz * dz;
          if (d < best) { best = d; bi = i; }
        }
      }
      return bi;
  }
}
