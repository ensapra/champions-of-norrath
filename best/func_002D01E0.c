typedef signed char s8; typedef unsigned char u8; typedef int s32; typedef unsigned int u32;
extern char D_0047AEC8[],D_0047AEE8[],D_004866A0[],D_004867B0[],D_0047AF30[],D_0047AF50[],D_0047AF70[],D_0047AF88[];
extern char D_013590AC[],func_01000000[];
extern s32 func_00144368(s32,char*); void func_00144558(s32); void func_001663F0(s32); void func_00172890(char*,s32,char*);
void func_00165120(char*,char*,s32,s32); void func_001911C8(void); u32 func_002DC420(void);u32 func_002DC490(void);void func_002D70D0(char*,u32,u32);
void func_0024B9E8(void);void func_002CB228(void);void func_00172558(void);void func_00144830(s32);
s8 D_004867AF,D_00486679,D_00483B11;
void func_002D01E0(void){volatile char pad[0x260]; pad[0]=0;s32 pos=0x400000,size,end;u32 q;D_004867AF=1;func_001663F0(0x32);D_00486679=0;
for(;;){size=func_00144368(pos,D_0047AEC8);end=size+pos;if((s32)func_01000000<size)func_00172890(D_004866A0,0x916,D_0047AEE8);pos+=0x40000;if((s32)D_013590AC>=end){func_00144558(size);continue;}break;}
func_00165120(D_004867B0,func_01000000,0,0);func_001911C8();q=func_002DC420()>>10;func_002D70D0(D_0047AF30,q,func_002DC490()>>10);func_0024B9E8();q=func_002DC420()>>10;func_002D70D0(D_0047AF50,q,func_002DC490()>>10);func_002CB228();func_00172558();q=func_002DC420()>>10;func_002D70D0(D_0047AF70,q,func_002DC490()>>10);D_00483B11=1;func_00144830(0);func_002D70D0(D_0047AF88,0,0);}
