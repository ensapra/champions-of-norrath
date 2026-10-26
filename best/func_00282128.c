typedef struct { f32 x,y,z; } V3;
s32 func_001411F0(void*,void*,s32); s32 func_00140F60(void*,const char*,s32); s32 func_00143A80(void*,const char*,s32);
s32 func_0015C320(void*,s32,const char*,s32,s32,s32,s32,s32); s32 func_00165DC0(void*,void*);
void func_0013EB28(void*); void func_00143830(void*); void func_0013D2F8(void*); void func_0013F2D0(void*,void*,s32,s32,s32);
s32 func_00303EB8(void*,const char*,void*); s32 func_00304640(void*,s32); void ovl_ntgui2_func_0013D230(void*,s32,void*,s32,s32);
s32 D_004494C0[]; f32 D_0048239C = 0.00001736110971251037f; u32 D_00483E5C; s32 D_00484538 = 1; s8 D_00484CA8; s32 D_00486030; s32 D_00486DA4;
extern char D_00476B70[],D_00476B80[],D_00476B90[],D_00486038[],D_00486040[],D_00486048[],D_00486050[],D_00486058[],D_00486060[];
extern s16 D_00429410[];
void func_00282128(void *p, V3 *arg1, s16 arg2) {
 s32 ret,flag,i,n,seed; V3 v, a,b,c; char *ui=(char*)p+0x100; char *name=(char*)p+0x50; char *path=(char*)p+0x90; char x[0x80],y[0x80],extra[0x20];
 ret=(s16)func_001411F0(p,arg1,0);
 v=*arg1;
 ui[9]=0; ui[8]=0; *(s16*)(ui+0xA)=0x8C; *(s16*)(ui+0xC)=0x8C; *(s16*)(ui+0xE)=0x12C; *(s16*)(ui+0x10)=-16; *(s16*)(ui+0x12)=0x8C; *(s16*)(ui+0x14)=0x8C; *(s16*)(ui+0x16)=0x12C; *(s16*)(ui+0x18)=-16;
 *(f32*)(ui+0x1c)=240.0f; *(f32*)(ui+0x20)=D_0048239C; *(f32*)(ui+0x24)=240.0f; *(f32*)(ui+0x28)=D_0048239C; *(f32*)(ui+0x2c)=0;
 *(s32*)((char*)p+0x48)=(s32)D_004494C0; *(s8*)((char*)p+0xdd)=1;
 *(f32*)(ui+0)=v.x; *(f32*)(ui+4)=v.y; *(f32*)(ui+8)=v.z+84.0f;
 ovl_ntgui2_func_0013D230(ui,1,&v,-16,0x12c);
 *(s8*)((char*)p+0x28)=0x48; *(u32*)((char*)p+0xc)|=0x100008;
 if(!func_00140F60(p,D_00476B70,0)) func_0015C320(p,0,D_00486038,0,0,0,0,0);
 *(s16*)((char*)p+0x38)=ret;
 *(s8*)((char*)p+0x4d)=0;*(s8*)((char*)p+0x4e)=0;
 flag=func_00140F60(p,D_00486040,0);*(s8*)((char*)p+0xd0)=0;*(s8*)((char*)p+0x4f)=flag;
 func_0013EB28(ui);func_00143830(p);
 if(flag){for(i=0;i<9;i++)name[i]=D_00476B80[i];} else {for(i=0;i<9;i++)name[i]=D_00476B90[i];}
 if(func_00143A80(p,D_00486048,0)) func_00304640(name,func_00143A80(p,D_00486048,0));
 func_00303EB8(path,D_00486050,name);func_00303EB8(x,D_00486058,name);func_00303EB8(y,D_00486060,name);
 *(s32*)((char*)p+0x15c)=func_00165DC0(path,x);*(s32*)((char*)p+0x160)=func_00165DC0(path,y);
 if(flag){func_0013D2F8(ui);*(f32*)((char*)p+0xd4)=60.0f;}
 if(D_00486030 && !D_00486DA4){n=0;if(D_00484538>0){for(i=0;i<D_00484538;i++){a=*(V3*)((char*)p+0x10);func_0013F2D0(&b,&a,0x24,0x18,0);c=b;D_00429410[i*6]=*(s16*)&c;seed=D_00483E5C*0x19660D+0x3C6EF35F;D_00483E5C=seed;((s16*)&D_00429410)[i]=seed>>16;}} D_00484CA8=3;}
}
