typedef struct S { s32 o0,o4,o8; u16 fl; s16 e; s32 o10,o14,o18,o1C; s32 (*o20)(s32,s32,s32); s32 pad[3],o30,pad2,o38,o3C,o40[5],o54; } S;
typedef struct T { s32 pad[14]; s32 o38; } T;
extern s32 D_00448480[];
s32 func_002FFDE8(S *); void func_003001A8(void *); void func_00300608(s32,s32); void func_00301088(s32,void *); void func_003011C0(S *); void func_00303648(void);
s32 func_00303680(S *s) {
 T *t;
 if (s->o54 == 0) s->o54 = D_00448480[0];
 t=(T*)s->o54;
 while(t->o38==0) {func_003001A8(t); break;}
 s->o4=0;
 if(s->fl&0x20)return -1;
 if(!(s->fl&4)) {
  if(!(s->fl&0x10))return -1;
  if(s->fl&8) {if(func_002FFDE8(s))return -1; s->o8=0; s->o18=0; s->fl &= 0xFFF7;}
  s->fl |= 4;
 } else if(s->o30) {
  if(s->o30!=(s32)&s->o40)func_00300608(s->o54,s->o30);
  s->o30=0; s->o4=s->o3C;
  if(s->o3C){s->o0=s->o38;return 0;}
 }
 if(s->o10==0)func_003011C0(s);
 if(s->fl&3)func_00301088(s->o54,func_00303648);
 s->o0=s->o10;
 {s32 r=s->o20(s->o1C,s->o10,s->o14); s->fl &= 0xDFFF; s->o4=r;
 if(r>0)return 0;
 if(r==0)s->fl |= 0x20; else {s->o4=0;s->fl |= 0x40;}
 return -1;}
}
