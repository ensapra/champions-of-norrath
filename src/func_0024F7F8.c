typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
void func_0024CD38(P12 *, f32 *, f32 *, f32, f32);
void func_0024CC10(s32, f32, f32);
void func_0024F7F8(s32 id, P12 *p, f32 s) {
 f32 xy[8] __attribute__((aligned(16)));
 P12 c __attribute__((aligned(16)));
 if (id != -1) {
  c = *p;
  func_0024CD38(&c, &xy[0], &xy[1], s * 360.0f, s * 840.0f);
  func_0024CC10(id, xy[0], xy[1]);
 }
}
