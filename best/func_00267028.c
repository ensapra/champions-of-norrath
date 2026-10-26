typedef signed int s32; typedef float f32; typedef unsigned char u8; typedef struct {u8 pad0[0x38];s32 mode;s32 pad3c;s32 count;u8 p48[8];s32 limit;u8 p54[4];void *items;} Ctx;
extern Ctx *D_00485C54; extern s32 D_00485C7C;
s32 func_002FB320(f32);s32 func_002FBA48(s32,s32);s32 func_002FB618(s32,s32);s32 func_003044FC(s32,s32);
void func_00267028(s32 idx,void *a1,void *a2,f32 value){volatile char pad[0x30];s32 mode=D_00485C54->mode,ret=0;f32 p=D_00485C54->p48[0];pad[0]=0;if(mode==1){if(idx<D_00485C54->limit){if(idx==0){if(p<0.0f)ret=1;else if(func_002FBA48(func_002FB320(value),func_002FB320(p))>0)ret=1;}}} else if(mode==2){ret=func_003044FC(0,0);} if(ret)pad[1]=1;}
