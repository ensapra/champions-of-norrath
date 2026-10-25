extern "C" {
struct V3 { f32 x,y,z; };
struct Obj { char pad[0x60]; virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void F9(s32,s32,s32,s32*,s32*,f32); virtual void v10(); virtual s32 Get(s32,s32); virtual void v12(); virtual void v13(); virtual void v14(); virtual s32 F15(s32,s32); };
f32 func_0015A070(s16); f32 func_0015A100(s16); void *func_001441B8(s32); s32 func_00165DC0(char*,char*); void func_0024D308(s32,s32,f32); void func_001E1FE8(s32,V3*,s32,s32,s32,s32,f32*);
extern char D_00486478[]; extern char D_00479218[];
s32 func_002B3298(Obj*o,s32 arg1,s32 arg2,V3 pos,s16 ang) { s32 x,y; f32 v[3]; s32 r=o->F15(arg1,0x14); f32 s=func_0015A070(ang)*3.0f; f32 c=func_0015A100(ang)*3.0f; f32 dx=s*12.0f; f32 dy=c*12.0f; s32 q0=o->Get(0,r); s32 q1=o->Get(1,r); s32 q2=o->Get(2,r); s32 q3=o->Get(3,r); v[0]=func_0015A070(ang)*(f32)q3; v[1]=func_0015A100(ang)*(f32)q3; v[2]=0; void*p=func_001441B8(0xAC); if(p) func_001E1FE8((s32)p,&pos,q2*60,q0,q1,arg2,v); s32 id=func_00165DC0(D_00486478,D_00479218); func_0024D308(id,arg2,1.0f); return 0; } }
