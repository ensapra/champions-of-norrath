s32 D_00483F30;extern u8 D_008D88B8[12],D_008D8938[1008];void func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*base,*p;s32 i;if(!D_00483F30){base=(s8*)D_008D8938;func_003021B0(base,0,0x3f0);p=base+0x374;D_008D88B8[4]=0;D_008D88B8[1]=0;{s8 one=1; s8 space=32;D_008D88B8[3]=space;*(volatile u8*)&D_008D88B8[0]=one;}i=7;do{i--;*p=-2;p-=126;}while(i>=0);}}


typedef struct{u8 pad[14];volatile s16 hE,h10,h12,h14,h16,h18,h1A,h1C,h1E,h20;u8 pad2[2];volatile f32 f24,f28,f2C,f30,f34;}Obj;
f32 D_00482A2C;
void func_002A2B68(Obj*p){f32 a=D_00482A2C,b=1.0f;s16 one=1;p->f24=a;p->f34=b;p->h18=15;p->h20=one;p->hE=one;p->h16=one;}
void func_002A28F8(void*a,s32 b){char*p=(char*)(*(s32*)((char*)a+0x60))+0x80;void(*f)(void*,s32,s32)=*(void(**)(void*,s32,s32))(p+4);f((char*)a+*(s16*)p,b,9);}
typedef struct __attribute__((packed,aligned(4))){u64 a;f32 z;}P;
s32 func_001441B8(s32);void func_002A2930(s32,P*,s32,s32,s32,void*);
s32 func_002A2720(u8*a,s32 b,s32 c,P*d,s16 e){P tmp=*d;u8*p=*(u8**)(a+0x60)+0x78;s32(*f)(void*,s32,s32)=*(s32(**)(void*,s32,s32))(p+4);s32 r=f(a+*(s16*)p,b,9);s32 o;tmp.z-=12.0f;o=func_001441B8(116);if(o)func_002A2930(o,&tmp,e,c,r,a);return 0;}
