typedef struct{s32 a,b,c;} V3;
s32 func_001411F0(void*,void*,s32,s32,s32,s32,s32); s32 func_001437E8(void*); s32 func_00143908(void*); s32 func_00143A80(void*,void*,s32); s16 func_00175440(s32,void*,void*); s32 func_0017D348(s32,s16,s32); s16 func_0017D3D0(s32,s16);
extern char D_00449790[],D_0044D0A8[],D_00485358[]; s32 D_004844A0;
void func_002132C0(void*p,V3*src,s32 arg2){V3 copy=*src,local; u8 pad[16];s16 x,y; local=copy;
func_001411F0(p,&local,0,arg2,copy.a,copy.b,copy.c);
*(void**)((u8*)p+0x48)=D_0044D0A8;*(s32*)((u8*)p+0xc)|=0x100003;
if(func_00143A80(p,D_00485358,0))*(s32*)((u8*)p+0xc)&=0xffefffff;
local=*(V3*)((u8*)p+0x10);x=func_00175440(D_004844A0,&local,&local);*(s16*)((u8*)p+0x4c)=x;func_0017D348(D_004844A0,x,1);y=func_0017D3D0(D_004844A0,*(s16*)((u8*)p+0x4c));*(s16*)((u8*)p+0x4e)=y;
if(*(s16*)((u8*)p+0x4c)<0)func_001437E8(p);*(void**)((u8*)p+0x48)=D_00449790;func_00143908(p);}
