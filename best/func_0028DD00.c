typedef struct {u64 q; s32 w;} Tag;
s32 func_001411F0(void*,s32,s32);
s32 func_00143A80(void*,const char*,s32);
s8 func_00140F60(void*,const char*,s32);
void func_0028DF70(void*);
void ovl_ntgui2_func_0013D230(void*,void*,void*,s32,s32,s32,s32,s32);
extern u8 D_00449310[]; extern char D_004778C8[]; extern char D_004778D8[]; f32 D_00482618;
extern char D_00486118[]; extern char D_00486120[]; extern char D_00486128[]; extern char D_00486130[];
void func_0028DD00(void *a, void *b) {
 Tag t=*(Tag*)b; f32 v[3], w[4]; s32 n; u8 *p=(u8*)a+0x80; s32 x;
 func_001411F0(&t,0,*(s32*)((u8*)b+8));
 v[0]=*(f32*)((u8*)a+0x10);v[1]=*(f32*)((u8*)a+0x14);v[2]=*(f32*)((u8*)a+0x18)+36.0f;
 *(void**)((u8*)a+0x48)=D_00449310;p[9]=0;
 *(u64*)((u8*)a+0xb0)=*(u64*)v;*(s32*)((u8*)a+0xb8)=*(s32*)&v[2];
 p[0x24]=0; *(f32*)(p+0x24)=120.0f; *(f32*)(p+0x28)=D_00482618; *(f32*)(p+0x2c)=0;
 *(s16*)(p+0x12)=255;*(s16*)(p+0x14)=128;*(s16*)(p+0x18)=-16;
 *(f32*)(p+0x1c)=120;*(f32*)(p+0x20)=D_00482618;*(s16*)(p+0xa)=255;*(s16*)(p+0xc)=128;*(s16*)(p+0xe)=0;*(s16*)(p+0x10)=-16;*(s16*)(p+0x16)=0; p[8]=0;
 ovl_ntgui2_func_0013D230(p,D_00449310,v,-16,128,255,0,*(s32*)&v[2]);
 if(func_00143A80(a,D_00486118,0)) *((s8*)a+0x6f)=func_00140F60(a,D_00486118,0);else *((s8*)a+0x6f)=0;
 if(func_00143A80(a,D_004778C8,0)) *((s8*)a+0x70)=func_00140F60(a,D_004778C8,0);else *((s8*)a+0x70)=0;
 func_0028DF70(a);
 if(func_00143A80(a,D_004778D8,0)) *((s8*)a+0x6c)=func_00140F60(a,D_004778D8,0);
 if(func_00143A80(a,D_00486120,0)) *(f32*)((u8*)a+0x1c)=(f32)func_00140F60(a,D_00486120,0);
 if(func_00143A80(a,D_00486128,0)) *(f32*)((u8*)a+0x54)=(f32)func_00140F60(a,D_00486128,0);
 if(func_00143A80(a,D_00486130,0)) *((s8*)a+0x6e)=func_00140F60(a,D_00486130,0); else *((s8*)a+0x6e)=1;
}
