extern s32 func_001671F8(const char*,...); extern void func_00190E20(void*,s32,f32,f32,f32,f32,f32,f32,f32,f32); extern void func_00191868(void*,...); extern void func_001918D8(void*,s32); extern void func_00191938(void*,const char*); extern f32 func_001AC358(s32); extern f32 func_002F16D0(const char*,const char*,s32,f32,f32); extern void func_00303EB8(void*,const char*,...);
extern char D_00468F10[],D_00468F28[],D_00468F38[],D_00468F48[],D_00468F58[],D_00468F68[],D_00468F80[],D_00484A60[],D_00484A90[],D_00484A98[],D_00484AA0[],D_00484AA8[],D_00484AB0[],D_00484AB8[],D_00484AC0[],D_00484AC8[],D_00484AD0[]; extern f32 D_004805FC;
void func_001BE7A8(void *a0,void *a1,s32 a2){u64 f=*(u64*)((char*)a1+0x28);char *p; s32 n=a2*4; char b[512];
func_00191868(D_00468F10);
if(f&0x20){func_00303EB8(b,D_00484A90);func_00191868(a0,b);func_00191938(a0,D_00484A60);p=D_00468F28;goto end;}
if(f&0x40){func_00303EB8(b,D_00484A98,a2*15);func_00191868(a0,b);func_00191938(a0,D_00484A60);p=D_00484AA0;goto end;}
if(f&0x80){func_00303EB8(b,D_00484AA8);func_00191868(a0,b);func_00191938(a0,D_00484A60);p=D_00468F38;goto end;}
if(f&0x100){func_00303EB8(b,D_00484AB0);func_00191868(a0,b);func_00191938(a0,D_00484A60);p=D_00484AB8;goto end;}
if(f&0x200){func_00303EB8(b,D_00484AC0,a2*15+0x78);func_00191868(a0,b);func_00191938(a0,D_00484A60);p=D_00468F48;goto end;}
if(f&0x10){func_00303EB8(b,D_00484AC0,a2*10+0x6e);func_00191868(a0,b);p=D_00468F58;goto end;}
if(f&0x40000){s32 x=func_001671F8(D_00468F68);func_00190E20(a0,x,(f32)(a2*2+0x3c),0,0,0,0,0,0,0);return;}
if(f&0x8000){f32 x=func_002F16D0(D_00468F68,D_00484AB0,n,(f32)(a2*5),D_004805FC);s32 y=(s32)x+5;func_00303EB8(b,D_00484AC8,y);func_00191868(a0,b);func_00191938(a0,D_00484A60);p=D_00484AD0;goto end;}
if(f&0x20000){s32 x=func_001671F8(D_00468F80);f32 v=func_001AC358(a2)*100.0f;if(v>=0)func_001AC358(a2);else func_001AC358(a2);func_00190E20(a0,x,0.5f,0,0,0,0,0,0,0);}
return; end:func_001918D8(a0,func_001671F8(p));}
