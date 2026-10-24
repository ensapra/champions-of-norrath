typedef s32(*Fn)(void);extern Fn D_004480DC[];extern s32 D_004480E0[];
extern u8 D_008EA9A0[],D_008EAA88[];extern s32 D_008EAA80[];extern s32 D_008EC440[];
s32 func_002FA420(void);u8 *func_002FA3B8(void);void func_002FA350(void);void func_002FA130(void);
void *func_003021B0(void*,s32,s32);s32 GetThreadId_2(void);s32 func_002FA060(void);s32 func_00144AC0(s32);
void func_002FA338(void){D_004480DC[0]=func_002FA420;}
void func_002FA350(void){Fn*p=D_004480DC;if(*p==(Fn)func_002FA350)*p=(Fn)func_002FA3B8;if(!D_004480E0[0])func_002FA130();(*p)();}
u8 *func_002FA3B8(void){s32 *p=D_008EAA80;if(!*p){*p=1;func_003021B0(D_008EA9A0,0,0xe0);*(void**)(D_008EA9A0+4)=D_008EAA88;}return D_008EA9A0;}
s32 func_002FA420(void){s32 *t=D_008EC440; s32 r=t[GetThreadId_2()];if(!r){s32 old;r=func_002FA060();old=t[GetThreadId_2()];if(old)func_00144AC0(old);t[GetThreadId_2()]=r;}return r;}
