typedef struct Q{char a[0x910];s32 x;char b[0x38c];s32 n;f32 f;char c[0x18];s32 g;}Q;
typedef struct Cmd{s32 id;s32 pad;long ptr;char rest[0x30];}Cmd;
void *func_0011B9A8(s32);void func_0011B9E0(void*);s32 func_0014CBF4(s32,Cmd*,s32);void func_00152CB8(f32,s32,void*,f32*);s32 func_00154654(s32);void func_00159084(Q*,void*);
void func_0015BE7C(Q*p){
 f32 r[4]; Cmd c; void *m; Cmd *cp;
 m=func_0011B9A8(((u32)(p->n+19)>>4)<<4);
 if(m){
  func_00159084(p,m);
  cp=&c;
  cp->id=198; c.ptr=(long)m;
  func_0014CBF4(p->x,cp,1);
  func_00152CB8(p->f,p->g,m,r);
  *(s32*)((char*)p+0xc48)=(s32)r[2];
  *(s32*)((char*)p+0xc4c)=(s32)r[0];
  *(s32*)((char*)p+0xc50)=(s32)(r[3]-r[2]);
  *(s32*)((char*)p+0xc54)=(s32)(r[1]-r[0]);
  *(s32*)((char*)p+0xc58)=func_00154654(p->x);
  func_0011B9E0(m);
 }
}
