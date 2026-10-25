#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;} P12;
void func_001411F0(void*,P12*,s32,s32);void func_00143830(void*);extern char D_00448D10[];s32 D_004844A4;
void func_001E6828(void*a,P12*b,s32 c,s32 d,s32 e,s32 f){
 P12 cp=*b;func_001411F0(a,&cp,0,0);F(a,void*,0x48)=D_00448D10;*(P12*)((char*)a+0x4c)=cp;
 F(a,s32,0x64)=e;F(a,s32,0x68)=f;F(a,s32,0x58)=D_004844A4+c;
 F(a,s32,0x5c)=d;if(d<10)F(a,s32,0x5c)=10;
 F(a,s32,0xc)|=3;F(a,f32,0x60)=10.0f;func_00143830(a);
}
