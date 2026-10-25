void *func_001441B8(s32); void func_00194498(void *,void *); extern char D_0044D498[]; extern char D_0044C8C0[];
typedef struct { s32 pad[3]; s32 fC; s32 f10; s32 f14; s32 f18; f32 f1C; f32 f20; s32 f24; u8 f28; u8 f29; u8 pad2[2]; s32 f2C; f32 f30; s32 f34; u16 f38; u16 pad3a; f32 f3C; f32 f40; s32 f44; void *vt; u8 more[0x24]; } Obj;
void *func_00115D80(Obj *s) {
 Obj *d=func_001441B8(0x70); s32 ret=0;
 if(d) {
  d->vt=(void*)D_0044D498;
  func_00194498(d,s); func_00194498((char*)d+4,(char*)s+4); func_00194498((char*)d+8,(char*)s+8);
  d->fC=s->fC;
  __builtin_memcpy((char*)d+0x10,(char*)s+0x10,8);
  d->f18=s->f18; d->f1C=s->f1C; d->f24=s->f24; d->f20=s->f20;
  d->f28=s->f28; d->f29=s->f29; d->vt=(void*)D_0044C8C0;
  d->f30=s->f30; d->f34=s->f34; d->f38=s->f38; d->f3C=s->f3C;
  d->f44=s->f44; d->f2C=s->f2C; d->f40=s->f40;
  __builtin_memcpy((char*)d+0x4c,(char*)s+0x4c,16);
  d->more[0x10]=s->more[0x10]; d->more[0x14]=s->more[0x14]; d->more[0x18]=s->more[0x18];d->more[0x19]=s->more[0x19];
  *(s32*)((char*)d+0x64)=*(s32*)((char*)s+0x64); *(s32*)((char*)d+0x6c)=*(s32*)((char*)s+0x6c); *(s32*)((char*)d+0x68)=*(s32*)((char*)s+0x68);
  ret=(s32)d;
 }
 return (void*)ret;
}
