typedef struct {f32 x,y,z;} V3;
void func_001411F0(void*,void*,s32); void func_00143630(void*); s32 func_00143A80(void*,const char*,s32); void func_00157668(void*,void*,s16); s32 func_00108498(void*); s32 func_00165DC0(void*,void*); s32 func_00105F60(void*,void*,s32,s32); void func_00304640(void*,s32);
extern char D_0044D018[],D_0044CEF8[],D_00483C28[],D_004623B0[],D_004623A0[],D_0031F540[];
u32 D_00483E5C;
void func_0014BEE8(void *p,V3 *arg1,s16 arg2){
 V3 input=*arg1,position,zero={0,0,0}; s16 a=arg2; char *r=(char*)p+0x148; char *s=(char*)p+0x110; char *icon=(char*)p+0x10; char *name=(char*)p+0x54; char tmp[12]; char namebuf[32]; char out1[16],out2[16]; s32 i,k; u32 flags;
 func_001411F0(p,&input,0); *(char**)((char*)p+0x48)=D_0044D018; *(u32*)((char*)p+0xc)|=0x1809; func_00143630(p); *(s16*)((char*)p+0x38)=a; *(u16*)((char*)p+0x140)|=1; *(f32*)((char*)p+0x1c)=4.0f;
 position=*(V3*)icon; func_00157668(s,&position,(s16)(a+0x4000)); *(char**)((char*)p+0x48)=D_0044CEF8;
 for(i=0;i<4;i++)*(s16*)(r+0x3c-i*8)=-1;
 r[0x20]=r[0x21]=-1; for(i=0;i<4;i++){*(s16*)(r+0x10+i*2)=0;*(s16*)(r+0x18+i*2)=0;}
 k=func_00143A80(p,D_00483C28,0); if(k)func_00105F60((void*)k,r,-1,0);else func_00105F60(D_004623B0,r,-1,0);
 for(i=0;i<13;i++)name[i]=D_004623A0[i];
 k=func_00108498(r); func_00304640((char*)p+0x64,*(s32*)(D_0031F540+k*16));func_00304640((char*)p+0xa4,*(s32*)(D_0031F540+k*16+4));
 *(s32*)((char*)p+0x4c)=func_00165DC0(name,(char*)p+0x64);
 flags=*(u32*)((char*)p+0xc); flags=(flags|0x102000)&~0x1800;
 *(s32*)((char*)p+0x50)=func_00165DC0(name,(char*)p+0xa4); *(s64*)((char*)p+0xe8)=-1; *(u32*)((char*)p+0xc)=flags;
 if(*(u64*)((char*)p+0x150)&(0x8000ULL<<24)) *(u32*)((char*)p+0xc)=flags&~0x3000;
 func_00143630(p); position=*(V3*)icon; func_00157668(s,&position,(s16)(*(s16*)((char*)p+0x38)+0x4000));
}
