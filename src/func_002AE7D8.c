s32 D_00483F30;extern u8 D_008D88B8[12],D_008D8938[1008];void func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*base,*p;s32 i;if(!D_00483F30){base=(s8*)D_008D8938;func_003021B0(base,0,0x3f0);p=base+0x374;D_008D88B8[4]=0;D_008D88B8[1]=0;{s8 one=1; s8 space=32;D_008D88B8[3]=space;D_008D88B8[0]=one;}i=7;do{i--;*p=-2;p-=126;}while(i>=0);}}

typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P;s32 func_001441B8(s32);void func_002ADF40(s32,s32,s32,void*);
f32 D_00482C5C,D_00482C58;
f32 func_002AE7D8(u8*a,s32 b){void*p;s16 off;s32(*f)(void*,s32,s32);s32 r;f32 result=0.0f;if(b){p=*(void**)(a+0x60);p=(u8*)p+0x78;off=*(s16*)p;f=*(s32(**)(void*,s32,s32))((u8*)p+4);r=f(a+off,b,1);p=*(void**)(a+0x60);p=(u8*)p+0x58;off=*(s16*)p;f=*(s32(**)(void*,s32,s32))((u8*)p+4);result=(f32)f(a+off,0,r)*D_00482C5C;}return result;}
typedef struct{u8 pad[14];volatile s16 hE,h10,h12,h14,h16,h18,h1A,h1C;u8 pad2[6];volatile f32 f24,f28,f2C;u8 pad3[8];volatile s16 h38,h3A;u8 pad4[6];volatile s16 h42,h44,h46;volatile f32 f48,f4C;}Obj;
void func_002AE6E8(Obj*p){f32 a=D_00482C58,b=1.0f;s16 one=1,five=5;p->f24=a;p->f4C=b;p->h38=one;p->h42=five;p->hE=one;p->h18=five;}
