struct Vec3 { f32 x,y,z; }; extern char D_0042C570[]; extern char D_00449550[]; extern char D_004853B8[];
s32 func_001411F0(void*,void*,void*); void func_0013EB28(void*); void func_00143830(void*); void func_001637A8(void*); s64 func_0016C970(s32,s64); void func_0015C320(void*,s32,void*,s32,s32,s32,s32,s32); void ovl_ntgui2_func_0013D230(void*,void*,s32,s32,s32,s32);
void func_00214A48(void *p,struct Vec3 *pos,s16 mode) {
 struct Vec3 temp; f32 zeroVal,oneVal,infVal; s32 t,one=1; s64 value; void *sub; void *field=(char*)p+0x4c;
 temp=*pos; func_001411F0(p,&temp,D_0042C570);
 zeroVal=0.0f; oneVal=1.0f; infVal=oneVal/zeroVal;
 *(void**)((char*)p+0x48)=D_00449550; *(s8*)((char*)field+5)=one; *(s8*)((char*)p+0x91)=0;
 *(s64*)((char*)p+0xB8)=*(s64*)&temp.x; *(s32*)((char*)p+0xC0)=*(s32*)&temp.z;
 sub=(char*)p+0x88;
 *(f32*)((char*)sub+0x28)=infVal; *(f32*)((char*)sub+0x2c)=0.0f; *(f32*)((char*)sub+0x1c)=0.0f; *(f32*)((char*)sub+0x24)=0.0f; *(f32*)((char*)sub+0x20)=infVal;
 *(s16*)((char*)sub+0x16)=0x12c; *(s16*)((char*)sub+0x18)=-0x10; *(s16*)((char*)sub+0x0e)=0x12c; *(s16*)((char*)sub+0x10)=-0x10;
 *(s16*)((char*)sub+0x14)=0x8c; *(s16*)((char*)sub+0x0a)=0x8c; *(s16*)((char*)sub+0x0c)=0x8c; *(s16*)((char*)sub+0x12)=0x8c; *(s8*)((char*)sub+8)=0;
 ovl_ntgui2_func_0013D230(sub,&temp,0x12c,-0x10,*(s64*)&temp.x,*(s32*)&temp.z);
 *(s8*)((char*)p+0x28)=0x24; *(s32*)((char*)p+0x84)=0; t=*(s32*)((char*)p+0xc)|0x100008; *(s32*)((char*)p+0xc)=t; *(s8*)((char*)p+0xc5)=0; *(s8*)((char*)p+0xc6)=0;
 func_0013EB28(sub); func_0015C320(&temp,0,D_004853B8,0,0,0,0,0); func_001637A8(field);
 value=func_0016C970(*(s32*)((char*)*(void**)((char*)p+0x24)+0xc),0); *(s16*)((char*)p+0x38)=mode; *(s64*)((char*)p+0x78)=value; func_00143830(p); *(s8*)((char*)p+0xc4)=one;
}
