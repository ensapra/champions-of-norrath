void ovl_ntgui2_func_00108E58(void*,s16,void*,s32,s32,f32,s32);
void func_001091B0(void*);
void func_001092F0(void*,s32,f32,f32,f32,f32,f32);
void func_001128A8(void*,s32,s32,s32,s32,s32,f32,s32,s32,s32);
void func_00143830(void*);
u32 func_00153FA8(void*,s32,void*,s32);
void func_001637A8(void*);
void func_00163830(void*,s32,s32);
s64 func_0016C970(s32,s32);
void func_00246598(void*);
void func_00246CF0(void*,s32);
extern char D_0042DBF0[];
extern char D_0044FDF8[];
extern f32 D_00481F2C;
extern f32 D_00481F30;
s32 D_004844A4;
f32 D_00484CAC;
void func_00246310(void *o, void *p, s16 a2, s32 a3, s8 a4, s32 a5) {
 s32 n=*(s32*)((char*)p+8);
 s32 i,j;
 s16 *q;
 void *sub=(char*)o+0x408;
 f32 old, f21; void *inner; void *p24;
 ovl_ntgui2_func_00108E58(p,a2,D_0042DBF0,a3,n,10.0f,n);
 *(void**)((char*)o+0x48)=D_0044FDF8;
 q=(s16*)((char*)o+0x444);
 for(i=0;i<4;i++){*q=-1;q-=4;}
 *(s8*)((char*)sub+0x21)=-1; *(s8*)((char*)sub+0x20)=-1;
 for(i=0;i<4;i++){*(s16*)((char*)sub+0x10+i*2)=0;*(s16*)((char*)sub+0x18+i*2)=0;}
 *(s8*)((char*)o+0x28)=0x14;
 *(f32*)((char*)o+0xA8)=D_00481F2C;
 *(f32*)((char*)o+0x1C)=15.0f;
 *(s32*)((char*)o+0xF8)=D_004844A4;
 *(u64*)((char*)o+0xA0)|=0x10000;
 *(s32*)((char*)o+0x3C0)=4;
 *(s32*)((char*)o+0xB0)=0;*(s32*)((char*)o+0xC0)=0;*(s32*)((char*)o+0xEC)=0;
 *(s16*)((char*)o+0x23C)=0;
 *(f32*)((char*)o+0x60)=1.0f;*(f32*)((char*)o+0x64)=1.0f;
 if(a4){n=func_00153FA8(o,0,sub,(char*)sub+8);*(s32*)((char*)o+0xD0)=n%3+1;}
 inner=(char*)o+0x120;
 func_00246598(o);
 *(s32*)((char*)o+0x450)=a5;
 old=D_00484CAC;D_00484CAC=(f32)a5;
 func_001092F0(o,1,1,1,1,1,1);
 D_00484CAC=old;
 *(s32*)((char*)o+0xF4)=0;
 f21=D_00481F30;
 p24=*(void**)((char*)o+0x24);
 *(s64*)((char*)o+0x228)=func_0016C970(*(s32*)((char*)p24+0xC),0);
 func_001637A8(inner);
 func_00163830(inner,*(s32*)((char*)p24+0x3C),0xC);
 func_00246CF0(o,0xD);func_00143830(o);*(s16*)((char*)o+0x318)=-1;
 func_001128A8(o,3,1,0,0,0,f21,0,0,0);
 func_001128A8(o,4,1,1,0,0,f21,0x3F800000,0,0);
 func_001091B0(o);*(s32*)((char*)o+0xEC)=1;
}
