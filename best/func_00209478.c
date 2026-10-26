typedef struct Obj { unsigned char p00[0x24]; struct Data *data; unsigned char p28[0x20]; struct Vtbl *vt; unsigned char p4c[0x64]; f32 value; unsigned char pb4[0x4c]; s32 out; unsigned char p104[0x22]; u16 flags; unsigned char p128[0x114]; s16 state; unsigned char p23e[0xea]; s32 time; s32 unk; } Obj;
typedef struct Data { unsigned char p00[0x3c]; s32 a; s32 b; unsigned char p48[4]; s32 c; unsigned char p50[4]; s32 d; unsigned char p58[4]; s32 e; unsigned char p60[8]; s32 f; unsigned char p6c[0x30]; s32 g; unsigned char p9c[0x60]; s32 h; } Data;
typedef struct Vtbl { unsigned char p00[0xc0]; s16 off; void *fn; } Vtbl;
extern s32 func_001129F0(void*, void*);
extern s32 func_00153FA8(Obj*);
extern void func_00160128(void*, f32, s32, s32);
extern void func_00160010(void*, f32, f32, s32);
extern void func_00113460(Obj*);
extern void func_0010D250(void*, void*, s32);
extern void func_0010C338(Obj*, void*, f32, f32, f32, f32, f32, f32, f32, char*);
extern void func_0024C6A8(s32, void*, f32, f32, f32);
extern void func_00163BA0(void*);
extern f32 D_00481380,D_00481384,D_00481388,D_0048138C,D_00481390,D_00481394,D_00481398,D_0048139C,D_004813A0;
extern char D_0046FEA0[];
void func_00209478(Obj *o, s32 mode) {
  s32 n;
  n=mode;
  if (func_001129F0(o, &mode)) return;
  if (n != 3 && n < 11) o->value=((f32 (*)(Obj*))(o->vt->fn))(o);
  if ((u32)n >= 11) { o->state=mode; return; }
  switch(n) {
  case 0: { s32 t; t=func_00153FA8(o); o->out=o->time+t%300+0x78; func_00160128((char*)o+0x120,D_00481380,o->data->a,3); break; }
  case 1: func_00113460(o); func_0010D250(&mode,o,0xc8); func_00160128((char*)o+0x120,D_00481384,o->data->b,3); break;
  case 3: o->value=((f32 (*)(Obj*))(o->vt->fn))(o); func_00113460(o); func_00160128((char*)o+0x120,D_00481388,o->data->c,3); break;
  case 4: func_00160128((char*)o+0x120,D_0048138C,o->data->d,3); break;
  case 5: func_00160128((char*)o+0x120,D_00481390,o->data->d,3); func_00160010((char*)o+0x120,D_00481390,D_00481390,8); o->out=0; break;
  case 6: case 7: case 8: { func_00153FA8(o); func_0024C6A8(o->data->h,(char*)o+0x10,1,1,0); func_00160010((char*)o+0x120,D_00481394,D_00481394,0x10); break; }
  case 9: { func_0010C338(o,(char*)&mode+0x30,10,2,D_00481398,D_0048139C,0.25f,D_00481398,D_00481398,D_0046FEA0); if (!(o->unk&2)) { func_00153FA8(o); func_0024C6A8(o->data->h,(char*)o+0x10,1,1,0); } func_00160128((char*)o+0x120,D_004813A0,o->data->f,6); if(o->unk&2) func_00163BA0((char*)o+0x120); ((void(*)(Obj*))(o->vt->fn))(o); break; }
  }
}
