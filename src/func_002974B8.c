extern s32 D_00483F30;typedef struct{s8 b0,b1,b2,b3,b4;s8 pad[7];} S88B8;extern volatile S88B8 D_008D88B8;extern s8 D_008D8938[1008];void*func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*p;s32 i;if(!D_00483F30){func_003021B0(D_008D8938,0,0x3F0);D_008D88B8.b4=0;D_008D88B8.b1=0;D_008D88B8.b0=1;D_008D88B8.b3=32;p=&D_008D8938[0x374];for(i=7;i>=0;i--){*p=-2;p-=0x7e;}}}
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
void func_001411F0(void*,P12*,s32,s32);void func_00194390(void*,s32,s32);void func_00143830(void*);extern char D_00450CE0[];
void func_002974B8(void*a,P12*b,s32 c,s32 d){P12 copy=*b;func_001411F0(a,&copy,0,0);F(a,void*,0x48)=D_00450CE0;{s32*p=(s32*)((char*)a+0x4c);*p=0;if(d)func_00194390(p,d,d);}F(a,s32,0x50)=c;F(a,s32,0x54)=120;F(a,s32,12)|=0x480b;func_00143830(a);}
extern char D_00453830[],D_00453810[],D_00453930[],D_0047F900[],D_0047F910[];
void**func_002FA4A8(s32);s32 func_0031A9D0(void);s32 func_0031AA68(void);void func_0031AA30(void);void func_0031AAC8(void);void func_002FEF80(void*,s32,void*);void func_002FB070(void);void func_002FB1C0(void*) __attribute__((noreturn));void**func_002FA108(void);
void func_002FF360(void){void*volatile v=D_00453830;void**p=func_002FA4A8(4);*p=D_00453830;func_002FEF80(p,func_0031A9D0(),func_0031AA30);func_002FB070();v=D_00453930;func_002FB1C0(D_0047F900);}
s32 func_002FF3C8(void){void*volatile v=D_00453810;void**p=func_002FA4A8(4);*p=D_00453810;func_002FEF80(p,func_0031AA68(),func_0031AAC8);func_002FB070();v=D_00453930;func_002FB1C0(D_0047F910);}
