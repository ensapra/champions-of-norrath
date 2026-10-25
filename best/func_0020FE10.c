s32 func_002FD2E0(s32,s32); s32 func_002FF3C8(void); typedef s32(*GetFn)(void);
void func_0020FE10(void *p,void *q){void *t; s32 a,b;
 if(*(void**)((u8*)p+0x4c)){
  if(q) a=((GetFn)(*(void**)((u8*)*(void**)((u8*)q+0x48)+4)))(); else func_002FF3C8();
  t=*(void**)((u8*)*(void**)((u8*)p+0x4c)+0xc);
  if(t)b=((GetFn)(*(void**)((u8*)*(void**)((u8*)t+0x48)+4)))();else func_002FF3C8();
  if(func_002FD2E0(a,b)==0)return;
 }
 if(p) a=((GetFn)(*(void**)((u8*)*(void**)((u8*)p+0x48)+4)))(); else func_002FF3C8();
 if(q)b=((GetFn)(*(void**)((u8*)*(void**)((u8*)q+0x48)+4)))(); else func_002FF3C8();
 if(func_002FD2E0(a,b)==0)*(s32*)((u8*)p+0x98)=1;
}
