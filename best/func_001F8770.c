typedef struct { s32 x,y,z; } V3;
typedef struct { s32 w[64]; } Tbl;
typedef struct { s16 off; s16 pad; void (*fn)(void *); } VEnt;
typedef struct Obj { char p0[0xC]; s32 flags; V3 v10; char p1c[8]; Tbl *tbl; char p28[0x10]; s16 s38; char p3a[0xE]; char *p48; char p4c[0xB4]; s32 s100; char p104[0xC]; V3 v110; char p11c[4]; char sub[6]; u16 f126; char p128[0x114]; s16 s23C; char p23e[0xEA]; s32 s328; char p32c[0x94]; s32 s3C0; } Obj;
typedef struct { u32 st; char p0[12]; V3 a; char p1[4]; V3 b; char p2[4]; V3 d; char p3[4]; V3 c; } Loc;
extern s32 func_001129F0(Obj *,u32 *);
extern void func_0010D250(V3 *,Obj *,s32);
extern void func_00113460(Obj *);
extern u32 func_00153FA8(Obj *);
extern void func_00160010(void *,s32,s32,f32,f32);
extern void func_00160128(void *,s32,s32,f32);
extern void func_001639E8(void *);
extern void func_0010C338(Obj *,V3 *,s16,s32,f32,f32,f32,f32,f32,f32);
extern f32 D_00480F18,D_00480F1C,D_00480F20,D_00480F24,D_00480F28,D_00480F2C,D_00480F30,D_00480F34,D_00480F38,D_00480F3C,D_00480F40,D_00480F44,D_00480F48;
#define SUB(o) ((void *)((char *)(o)+0x120))
void func_001F8770(Obj *o,u32 arg) {
 Loc L; L.st=arg; if(func_001129F0(o,&L.st)!=0)return;
 switch(L.st) {
 case 0: o->s100=o->s328+func_00153FA8(o)%120; func_00160128(SUB(o),o->tbl->w[0x3c/4],3,D_00480F18); break;
 case 1: { void *s=SUB(o); func_00113460(o); func_0010D250(&L.a,o,0xc8); L.b=L.a; o->v110=L.b; o->s100=o->s328+func_00153FA8(o)%120+0x12c; func_00160128(s,o->tbl->w[0x7c/4],0x803,D_00480F1C); func_001639E8(s); break; }
 case 3: { void *s=SUB(o); func_00113460(o); func_00160128(s,o->tbl->w[0x5c/4],0x803,D_00480F20); func_001639E8(s); break; }
 case 5: func_00160128(SUB(o),o->tbl->w[0x44/4],3,D_00480F24); break;
 case 13: {void *s=SUB(o); f32 f=D_00480F28; func_00160128(s,o->tbl->w[0x44/4],3,f); func_00160010(s,o->tbl->w[0x6c/4],0x808,f,f); break;}
 case 14: {void *s=SUB(o); f32 f=D_00480F2C; func_00160128(s,o->tbl->w[0x44/4],3,f); func_00160010(s,o->tbl->w[0x74/4],0x808,f,f); break;}
 case 6: {void *s=SUB(o); func_00160128(s,o->tbl->w[0x44/4],3,D_00480F30); func_00160010(s,o->tbl->w[0x2c/4+(func_00153FA8(o)&1)*2],8,0.5f,0.5f); o->s100=func_00153FA8(o)%12; break;}
 case 15: {void *s=SUB(o); func_00160128(s,o->tbl->w[0x44/4],3,D_00480F34); func_00160010(s,o->tbl->w[0x24/4],8,0.5f,0.5f); o->s100=func_00153FA8(o)%20; break;}
 case 8: if((o->s23C!=6||!(o->f126&8))&&o->s23C!=9)func_00160010(SUB(o),o->tbl->w[0x54/4],0x10,D_00480F38,D_00480F38);else L.st=o->s23C;break;
 case 9: func_00160128(SUB(o),o->tbl->w[0x3c/4],3,D_00480F3C);break;
 case 10: {L.c=o->v10;func_0010C338(o,&L.c,o->s38,0,36.0f,2.0f,D_00480F40,D_00480F44,2.0f,0.25f);func_00160128(SUB(o),o->tbl->w[0x4c/4],6,D_00480F48);VEnt *e=(VEnt *)(o->p48+0xc0);e->fn((char *)o+e->off);break;}
 } o->s23C=(u16)L.st;
}
