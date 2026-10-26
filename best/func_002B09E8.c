extern f32 D_00482CE4; s32 D_004844A4; extern f32 D_008D78B0[];
f32 func_0015A100(s32,s32); s32 func_0015E948(void*);
void func_00157668(void*,void*,s16,s32,f32,void*);
void func_001803C0(s32,void*); void func_00180338(s32); void func_00180380(s32);
s32 func_0016CD50(s32); void func_0016C238(s32,void*,f32*,s32,s32,void*,s32,s32,f32);
void func_00180DA0(void*,void*,void*,s32,s32,s32);
void func_002B09E8(void *a, void *b) {
 s32 *x=(s32*)a, t; f32 p[3],q[3],v[3],r1,r2,r3; void *o;
 __builtin_memcpy(p,b,12);
 if(D_004844A4<x[6]) {
  f32 f=func_0015A100(D_004844A4*3000,*(s32*)((char*)b+8));
  o=*(void**)(x[3]);
  *(s16*)((char*)o+0x98)=50; *(s16*)((char*)o+0x9a)=(s16)(f*50+200);
  *(s16*)((char*)o+0x90)=50; *(s16*)((char*)o+0x92)=(s16)(f*50+200);
  *(s16*)((char*)o+0x94)=(s16)(f*20+40); *(s16*)((char*)o+0x96)=(s16)(f*20+40);
  *(s16*)((char*)o+0x8c)=(s16)(f*20+40); *(s16*)((char*)o+0x8e)=(s16)(f*20+40);
  func_00157668(p,q,*(s16*)((char*)o+0x38),0, f*50+200,q);
  func_001803C0(x[8],p); func_00180338(x[8]);
  t=func_0016CD50(0);
  if(t) { s32 i; for(i=0;i<15;i++) { r1=(f32)func_0015E948(a)*0.0000152587890625f*2-1;
  r2=(f32)func_0015E948(a)*0.0000152587890625f*2-1; r3=(f32)func_0015E948(a)*0.0000152587890625f*2-1;
  v[0]=r1;v[1]=r2;v[2]=r3; q[0]+=r1;q[1]+=r2;q[2]+=r3;
  func_00180DA0(D_008D78B0,q,v,0,0,0); } }
  func_00180380(x[8]);
 } else if(a) { o=*(void**)(x[5]); ((void(*)(void*,s32))*(void**)((char*)o+12))((char*)a+*(s32*)((char*)o+8),3); }
}
