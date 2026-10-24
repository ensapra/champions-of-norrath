s32 D_00483F30;
typedef struct {s8 b0,b1,b2,b3,b4,pad[7];} S88;
extern volatile S88 D_008D88B8;
extern s8 D_008D8938[1008];
void *func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*p;s32 i;if(!D_00483F30){func_003021B0(D_008D8938,0,0x3f0);D_008D88B8.b4=0;D_008D88B8.b1=0;D_008D88B8.b0=1;D_008D88B8.b3=32;p=D_008D8938+0x374;for(i=7;i>=0;i--){*p=-2;p-=126;}}}
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;} P12;
s32 func_001441B8(s32);
void func_00290E78(s32,s32,void*,s32);
s32 func_00292038(s32 a,s32 b,void*c,P12*d){volatile P12 copy=*d;s32 r=func_001441B8(0x88);if(r)func_00290E78(r,b,c,a);if(r && (*(s32*)((u8*)c+12)&64))*(s32*)((u8*)c+0x578)=9;return r;}
typedef struct {u8 pad[14];s16 e,h10,h12,h14,h16,h18,h1a,h1c,h1e,h20;u8 pad2[2];f32 f24,f28,f2c,f30,f34;} Obj;
f32 D_0048270C,D_00482710,D_00482714,D_00482718,D_0048271C;
void func_00291FC8(volatile Obj*o){f32 a=D_0048270C,b=D_00482710,c=D_00482714,d=D_00482718,e=D_0048271C;o->f34=e;o->h18=120;o->f24=a;o->h1a=55;o->f28=b;o->h12=10;o->h1c=3;o->f2c=c;o->h14=8;o->f30=d;o->h16=1;o->h20=35;o->e=1;o->h10=10;o->h1e=1;}
f32 D_004826B4,D_004826B8,D_004826BC,D_004826C0;
void func_002908B8(volatile Obj*o){f32 a=D_004826B4,b=D_004826B8,c=D_004826BC,d=.25f,e=D_004826C0;o->h18=70;o->f34=e;o->f24=a;o->h1a=6;o->f28=b;o->f2c=c;o->h14=10;o->h1e=2;o->f30=d;o->h16=1;o->h20=28;o->e=1;o->h10=1;o->h12=10;o->h1c=10;}
