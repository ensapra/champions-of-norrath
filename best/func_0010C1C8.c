typedef struct { unsigned char pad[0x10]; f32 x,y,z; unsigned char tail[0x2c]; void *vptr; } ArgC1;
extern void func_0013EF30(void*, void*, void**, s32, f32, f32, f32, f32, f32, f32);
extern void func_002FF3C8(void); extern s32 func_002FD2E0(void*, void*);
s32 func_0010C1C8(ArgC1 *arg0, f32 radius) {
 f32 lo[3], hi[3]; void *list[0x100]; s32 i; void *p,*v;
 lo[0]=arg0->x-radius; lo[1]=arg0->y-radius; lo[2]=arg0->z-radius;
 hi[0]=arg0->x+radius; hi[1]=arg0->y+radius; hi[2]=arg0->z+radius;
 func_0013EF30(lo,hi,list,0x100,lo[0],lo[1],lo[2],hi[0],hi[1],hi[2]);
 for(i=0; list[i]; i++) {
  p=list[i];
  if ((*(s32*)((char*)p+0xC)&0x2A)==0x28 && (*(u16*)((char*)p+0x126)&0x80)) {
   v=*(void**)((char*)p+0x48);
   if(v) ((s32(*)(void*))((void**)(*(void**)v))[1])(v); else func_002FF3C8();
   v=*(void**)((char*)arg0+0x48);
   if(v) ((s32(*)(void*,void*))((void**)(*(void**)v))[1])(v,p); else func_002FF3C8();
   if(func_002FD2E0(p,arg0)) return (s32)list[i];
  }
 }
 return 0;
}
