s8 D_00484318; extern char D_00485858[],D_00485838[],D_0034B6B1[],D_00485860[],D_00472128[]; extern f32 D_004819CC;
s32 func_00304168(void*,void*); s64 func_0016C970(s32,s64); s32 func_00165DC0(void*,void*); s64 func_00160128(void*,s32,s32,f32); s32 func_001137B0(void*,s32);
s64 func_002325B0(void*p,s32 v) {
 if(D_00484318 && func_00304168((char*)p+0x42c,D_00485858)==0) {
  if(v) *(s32*)((char*)p+0xf4)=2; else *(s32*)((char*)p+0xf4)=0;
  s64 x=func_0016C970(*(s32*)((char*)p+0x420),*(s32*)((char*)p+0xf4));
  *(s64*)((char*)p+0x228)=x; return x;
 }
 if(func_00304168((char*)p+0x42c,D_00485838)==0 && func_00304168(D_0034B6B1,D_00485860)==0) {
  *(s32*)((char*)p+0x470)=1;
  return func_00160128((char*)p+0x120,func_00165DC0((char*)p+0x3c0,D_00472128),3,D_004819CC);
 }
 return func_001137B0(p,v);
}
