#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
void func_001411F0(void*,P12*,s32,s32);void func_00194390(void*,s32,s32);void func_00143830(void*);
extern char D_00450C50[];
extern s32 D_004844A4;
void func_00297568(void*a,P12*b,s32 c,s32 d){P12 copy=*b;func_001411F0(a,&copy,0,0);F(a,void*,0x48)=D_00450C50;{s32*p=(s32*)((char*)a+0x4c);*p=0;if(d)func_00194390(p,d,d);}F(a,s32,0x54)=D_004844A4+0xF0;F(a,s32,0x50)=c;F(a,s32,0x58)=0x30;F(a,s32,0x60)=0x14;F(a,f32,0x5C)=10.0f;F(a,s32,12)|=3;func_00143830(a);}
