typedef struct { f32 x, y, z; } V3;
typedef struct { V3 v; char pad[0x14]; } L __attribute__((aligned(16)));
typedef struct { char p0[0xC]; u32 fl; V3 pos; char p1[0x8]; void *own; char p2[0x10]; s16 s; char p3[0x66]; u64 bits; char p4[0x38]; f32 f; char p5[0x3C]; char arr[0x110]; f32 g; char p6[0x18C]; s32 st; } Obj;
extern void func_001DF298(s32,s32,void*,V3*,s16,s32,f32,f32);
extern void func_001E6088(s32,s32,void*,V3*,s16,s32,f32,f32);
extern s32 func_0024AF80(s32);
extern void func_0024EED0(char*,s32);
extern char D_0034B988[],D_00472FF8[],D_00473008[]; extern s32 D_00483F48;
void func_0023AD30(Obj *o, s32 b){
  L v1, v2;
  if (b == 1) {
    o->bits &= ~0x4000000ULL;
    o->fl &= 0xFEFFFFFF;
    __builtin_memcpy(D_0034B988, D_00472FF8, 10);
    D_00483F48 = (s32)o->g;
    func_0024AF80(0);
    func_0024EED0(D_00473008, 0x103);
  } else if (b == 0) {
    if (o->st) {
      v1.v = o->pos;
      func_001DF298(*(s32*)((char*)o->own + 0xC), *(s32*)((char*)o->own + 0x74), o->arr, &v1.v, o->s, 0, o->f, 0);
      o->st = 0;
    } else {
      o->st = 14;
      v2.v = o->pos;
      func_001E6088(*(s32*)((char*)o->own + 0xC), *(s32*)((char*)o->own + 0x74), o->arr, &v2.v, o->s, 0, o->f, 0);
    }
  }
}
