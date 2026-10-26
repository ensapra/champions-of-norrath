typedef struct O {u8 p[0xC]; s32 a; u8 q[0x10]; struct D *d; u8 r[0x20]; struct V *v; u8 s[0xB0]; s32 out; u8 t[0x138]; s16 state; u8 u[0xEA]; s32 time;} O;
typedef struct D {u8 p[0x1c]; s32 a; u8 q[0x1c]; s32 b; u8 r[0x14]; s32 c; u8 s[0x10]; s32 d; u8 t[0x18]; s32 e; u8 u[0x44]; s32 f; } D;
typedef struct V {u8 p[0xB8]; s16 off; void *fn;} V;
extern s32 func_001129F0(void*); extern void func_0010D250(void*,void*,s32); extern void func_00113460(O*); extern u32 func_00153FA8(O*);
extern void func_00160010(void*,s32,s32,f32,f32); extern void func_00160128(void*,s32,s32,u32,f32); extern void func_001639E8(void*);
extern s32 D_004844A4; extern f32 D_00481D38,D_00481D3C,D_00481D40,D_00481D44,D_00481D48,D_00481D4C,D_00481D50,D_00481D54,D_00481D58,D_00481D5C;
void func_0023F470(O *o,u32 mode) {
 u32 s; u8 b1[16]; u8 b2[16]; s=mode;
 if(func_001129F0(&s)==0) {
 switch(s) {
 case 0: {u32 h; h=func_00153FA8(o)%120; o->out=o->time+h; func_00160128((u8*)o+0x120,o->d->e,3,h,D_00481D38);break;}
 case 1: {u8 *p; p=(u8*)o+0x120;func_00113460(o);func_0010D250(b1,o,0xc8); __builtin_memcpy(b2,b1,12); __builtin_memcpy((u8*)o+0x110,b2,12);func_00160128(p,o->d->d,0x803,0,D_00481D3C);func_001639E8(p);break;}
 case 3: {u8*p; p=(u8*)o+0x120;func_00113460(o);func_00160128(p,o->d->d,0x803,0,D_00481D40);func_001639E8(p);break;}
 case 5: func_00160128((u8*)o+0x120,o->d->a,3,0,D_00481D44);break;
 case 14: case 15: case 16: case 17: {f32 f; s32 v; f=D_00481D48;v=o->d->b;func_00160128((u8*)o+0x120,o->d->a,3,0,f);func_00160010((u8*)o+0x120,v,0x808,f,f);o->out=func_00153FA8(o)%20;break;}
 case 13: func_00160010((u8*)o+0x120,o->d->f,0x808,D_00481D58,D_00481D58);break;
 case 8: case 9: s=o->state; break;
 case 10: o->out=D_004844A4+3;o->a|=0x400d;func_00160128((u8*)o+0x120,o->d->f,6,(u32)o->d,D_00481D5C);break;
 default: break;
 }
 o->state=s;
 }
}
