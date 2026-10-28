typedef struct { f32 x, y, z; } V3;
typedef struct {
  char p0[0xC]; u32 fl; char p1[0xC]; f32 f1c; char pq[4]; void *own2; char p2[0x20]; void *vt; char p3[0xC]; f32 arr[5]; char p4[0x34]; u64 bits; f32 fa8; char p5[4]; s32 fb0; char p6[0xC]; s32 fc0; char p7[0x1C]; f32 fe0; char p8[8]; s32 fec; char p9[8]; s32 ff8; char p10[4]; s32 f100; char p11[0x1C]; char sub[0x110]; f32 f230; char p12[8]; s16 f23c;
} Obj;
extern void ovl_ntgui2_func_00108E58(void*, V3*, s16, char*, f32, s32);
extern void func_001092F0(void*, s32, f32, f32, f32, f32, f32);
extern void func_001091B0(void*); extern void func_001438A0(void*); extern void func_001637A8(void*); extern void func_00163830(void*, s32, s32);
extern char D_0042D0C0[], D_0044F4C8[]; extern const f32 D_00481A08, D_00481A0C, D_00481A10; extern s32 D_004844A4;
void func_002332A0(Obj *o, V3 *p, s16 c, s32 d) {
  V3 v = *p;
  s32 i;
  void *t;
  ovl_ntgui2_func_00108E58(o, &v, c, D_0042D0C0, 10.0f, d);
  o->f1c = 15.0f;
  o->fa8 = D_00481A08;
  o->ff8 = D_004844A4;
  o->fl |= 0x1000008;
  o->bits |= (u64)0x8001 << 18;
  o->fb0 = 0;
  o->fc0 = 0;
  o->fec = 0;
  o->f23c = 0;
  o->f100 = 0;
  o->vt = D_0044F4C8;
  for (i = 4; i >= 0; i--) o->arr[i] = 1.0f;
  o->fe0 = 1.0f;
  t = o->sub;
  func_001092F0(o, 1, D_00481A0C, D_00481A10, 1.0f, 1.0f, 1.0f);
  o->f230 = 1000.0f;
  func_001637A8(t);
  func_00163830(t, *(s32*)((char*)o->own2 + 0x1C), 1);
  func_001438A0(o);
  func_001091B0(o);
}
