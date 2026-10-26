typedef struct { unsigned char pad0[4]; unsigned char *p; unsigned char pad8[4]; unsigned char phase; } Obj;
s32 func_002650C0(void*,s32,s32);
s32 func_002651E0(void*,s32,s32);
s32 func_002F1658(s32);
s32 func_002FB320(s32*,u32,f32);
s32 func_002FB5C0(s32,s32);
s32 func_002FB618(s64,s32);
s32 func_002FB908(s32,s32);
s32 func_002FBA48(s32,s32);
s32 func_002FBA98(s32);
f32 func_002FBC20(s32);
extern s32 D_00475748[];
extern s32 D_00475758[];
f32 func_002655E8(Obj *a,s32 b,s32 c) {
 f32 out=0.0f;
 if(c!=-1) {
  s32 off=b*5+0x50;
  s32 *p=(s32*)((a->p[off+0x11]+a->phase & 3)*4 + (char*)D_00475748);
  s32 x=func_002650C0(a,b,*p);
  s32 y=func_002651E0(a,b,*p);
  s32 q=func_002650C0(a,c,*((s32*)((a->p[off+0x11]+a->phase & 3)*4+(char*)D_00475758)));
  s32 r=func_002651E0(a,c,0);
  s32 dx=q-x,dy=r-y;
  s32 len=func_002FBA98(dx*dx+dy*dy);
  f32 angle=func_002FBC20(func_002FB908(func_002FBA98(dx),func_002F1658(len)));
  s32 idx=(a->p[off+0x11]+a->phase)&3;
  s32 res=func_002FB320(&D_00475748[idx],idx,angle*(f32)D_00475748[idx]+func_002FBC20(func_002FB908(func_002FBA98(dy),func_002F1658(len)))*(f32)D_00475758[idx]);
  if(func_002FBA48(res,0)<0) res=func_002FB618(0,res);
  out=func_002FBC20(func_002FB618(0xFFFFFFFFFFC00000LL,func_002FB5C0(res,res)));
 }
 return out;
}
