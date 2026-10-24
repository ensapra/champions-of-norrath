s32 D_00483F30;extern u8 D_008D88B8[12],D_008D8938[1008];void func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*base,*p;s32 i;if(!D_00483F30){base=(s8*)D_008D8938;func_003021B0(base,0,1008);p=base+0x374;D_008D88B8[4]=0;D_008D88B8[1]=0;D_008D88B8[3]=32;D_008D88B8[0]=1;i=7;do{i--;*p=-2;p-=126;}while(i>=0);}}
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;} P;
s32 func_001441B8(s32);void func_002AFFA8(s32,s32,s32,s32);void func_002B1460(s32,s32,s32,void*,void*,s32);
s32 func_002B1250(s32 a,s32 b,s32 c,P*d){volatile P copy=*d;s32 r=func_001441B8(100);if(r)func_002AFFA8(r,b,c,a);return r;}
s32 func_002B2D50(s32 a,s32 b,void*c,P*d,s16 e){P tmp=*d;s16*p=c;p[72]=135;p[73]=64;p[76]=135;p[77]=64;p[70]=255;p[71]=200;p[74]=255;p[75]=200;{s32 r=func_001441B8(128);if(r)func_002B1460(r,e,b,&tmp,c,a);}return 0;}
typedef struct {u8 pad[14];volatile s16 f0e,f10,f12,f14,f16,f18,f1a,f1c,f1e,f20;u8 pad2[2];volatile f32 f24,f28,f2c;} Params;
f32 D_00482D44,D_00482D48;
void func_002B2D08(Params*p){f32 a=D_00482D44,b=D_00482D48;p->f18=18;p->f2c=0.25f;p->f24=a;p->f1a=35;p->f28=b;p->f12=5;p->f1c=1;p->f0e=1;p->f10=1;}
