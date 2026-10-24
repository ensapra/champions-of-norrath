s32 D_00483F30;extern u8 D_008D88B8[12],D_008D8938[1008];void func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*base,*p;s32 i;if(!D_00483F30){base=(s8*)D_008D8938;func_003021B0(base,0,0x3f0);p=base+0x374;D_008D88B8[4]=0;D_008D88B8[1]=0;D_008D88B8[3]=32;D_008D88B8[0]=1;i=7;do{i--;*p=-2;p-=126;}while(i>=0);}}
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P;
s32 func_001441B8(s32);void func_002AE9D8(s32,s32,s32,void*);
s32 func_002AF290(u8*a,s32 b,s32 c,P*d){volatile P copy=*d;u8*p=*(u8**)(a+0x60)+0x78;s32(*f)(void*,s32,s32)=*(s32(**)(void*,s32,s32))(p+4);s32 r=f(a+*(s16*)p,b,14);s32 o=func_001441B8(40);if(o)func_002AE9D8(o,r,c,a);return o;}
typedef struct{u8 pad[14];volatile s16 hE,h10,h12,h14,h16,h18,h1A,h1C,h1E,h20;u8 pad2[2];volatile f32 f24,f28,f2C,f30,f34;}Obj;
f32 D_00482C7C,D_00482C80,D_00482C84,D_00482C88;
void func_002AF238(Obj*p){f32 a=D_00482C7C,b=D_00482C80,c=D_00482C84,d=D_00482C88;p->f24=a;p->f34=d;p->f28=b;p->h12=5;p->h1C=15;p->f2C=c;p->h16=1;p->h20=88;p->hE=1;p->h18=15;p->h10=5;p->h1A=5;}
extern u8 D_008D7770[];
void func_00180D78(u8*,s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
void func_002AF178(s32 a,s32 b){if(b==65535){if(a==1)func_00180D78(D_008D7770,83,82,6,57,18,31,8,6.0f,1.0f,-1.0f,40,2,a,8,0);}}
