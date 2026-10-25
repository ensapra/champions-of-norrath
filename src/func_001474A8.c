struct V { f32 x, y, z; };
extern "C" {
s32 func_00144CB8(void *, V);
void func_001639C8(void *, void *, s32, s32);
f32 func_00175FE0(s32, V, f32);
void func_001D5630(s32, V);
void func_0024C6A8(s32, void *, f32, f32, f32);
void func_0024F7F8(s32, void *, f32);
}
extern s32 D_004844A0;
extern s32 D_004844A4;
struct B {
  char p0[0x10]; V pos; char p1[0x48-0x1C];
  virtual ~B();
  virtual s32 f2(); virtual s32 f3(); virtual s32 f4(); virtual s32 f5(); virtual s32 f6(); virtual s32 f7(); virtual s32 f8();
  virtual s32 f9(); virtual s32 f10(); virtual s32 f11(); virtual s32 f12(); virtual s32 f13(); virtual s32 f14(); virtual s32 f15(); virtual s32 f16();
  virtual s32 Get();
};
struct E : B {
  char p2[8];
  s8 flag; s32 cnt; s32 p5c; V q; s32 p6c;
  void func_001474A8();
};
void E::func_001474A8() {
  func_001639C8((char*)this + 0x70, &pos, 0, 0);
  q.z -= 10.0f;
  s32 r = func_00144CB8(this, q);
  if (r == 0) {
  } else if (r == 2 && flag) {
    cnt = 0;
    func_001D5630(Get(), pos);
    if (p6c) func_0024C6A8(p6c, &pos, 1.0f, 1.0f, 0.0f);
  } else if (r == 1) {
    cnt = 0;
    f32 t = func_00175FE0(D_004844A0, pos, 0.0f);
    if (pos.z < t) pos.z = t;
    func_001D5630(Get(), pos);
    if (p6c) func_0024C6A8(p6c, &pos, 1.0f, 1.0f, 0.0f);
  }
  if (p5c) func_0024F7F8(p5c, &pos, 1.0f);
  if (D_004844A4 >= cnt && this) delete this;
}
