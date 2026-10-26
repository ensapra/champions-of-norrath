typedef int s32;typedef float f32;typedef unsigned char u8;
typedef struct {u8 b0[8];f32 v[3];} V3;
typedef struct {u8 b0[0x10];f32 v[3];} V3a;
typedef struct {u8 b0[0x290];V3 pos; } Tmp;
extern s32 D_00484F48;extern f32 D_00482160;
s32 func_001435A8(void);s32 func_00278C38(void*);void mat3x3_transposed_mul_vec3(void*,void*,void*,f32,f32,f32);
void func_00270670(Tmp *p){volatile char pad[0x250];f32 t,z; s32 n;pad[0]=0;
if(func_001435A8())return;
t=*(f32*)((u8*)p+0x328); if(t!=0.0f){t-=D_00482160;if(t<0.0f)*(f32*)((u8*)p+0x328)=0.0f;else *(f32*)((u8*)p+0x328)=t;}
if(func_00278C38((u8*)p+0x8e0)){f32 *a=(f32*)((u8*)p+0x290),*b=(f32*)((u8*)p+0x10); f32 q=*(f32*)((u8*)p+0x380);q=-q*0.5f;mat3x3_transposed_mul_vec3(a,(u8*)p+0x45c,pad,0.0f,0.0f,q);a[0]+=b[0];a[1]+=b[1];a[2]+=b[2];}
n=D_00484F48; if(n>=2 && *(s32*)((u8*)p+0x864)==0 && *(s32*)((u8*)p+0x3bc)!=-1){ if(*(s32*)((u8*)p+0x3d4)!=n){*(s32*)((u8*)p+0x40c)=1;} }
}
