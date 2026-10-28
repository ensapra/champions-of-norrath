struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct ArgC1 { unsigned char pad[0x10]; f32 x, y, z; unsigned char tail[0x2c]; void *vptr; };
extern "C" {
void func_0013EF30(V3 *, V3 *, void **, s32);
s32 func_002FF3C8(void);
s32 func_002FD2E0(s32, s32);
s32 func_0010C1C8(ArgC1 *arg0, f32 radius) {
 V3 lo = V3(arg0->x - radius, arg0->y - radius, arg0->z - radius);
 V3 hi = V3(arg0->x + radius, arg0->y + radius, arg0->z + radius);
 void *list[0x100]; s32 i; void *p; s32 a, b;
 func_0013EF30(&lo,&hi,list,0x100);
 for(i=0; list[i]; i++) {
  p=list[i];
  if ((*(s32*)((char*)p+0xC)&0x2A)==0x28 && (*(u16*)((char*)p+0x126)&0x80)) {
   if(p) a=((s32(*)())((void**)(*(void**)((char*)p+0x48)))[1])(); else a=func_002FF3C8();
   if(arg0) b=((s32(*)())((void**)(*(void**)((char*)arg0+0x48)))[1])(); else b=func_002FF3C8();
   if(func_002FD2E0(a,b)) return (s32)list[i];
  }
 }
 return 0;
}
}
