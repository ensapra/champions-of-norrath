typedef struct {s32 cmd,a,b,c,d,res,pad[26];} Rpc40E0;
extern Rpc40E0 D_008DDAC0;extern u8 D_008DD880[];
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);s32 func_002D3C78(s32,s32,s32);
s32 func_002D40E0(s32 a,s32 b,s32 c,s32 d){Rpc40E0*r=&D_008DDAC0;r->c=c;r->d=d;r->cmd=6;r->a=a;r->b=b;if(func_002D8270(D_008DD880,1,0,r,128,r,128,0,0)<0)return 0;if(r->res==1){func_002D3C78(a,b,2);return r->res;}return r->res;}
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P;
s32 func_001441B8(s32);void func_002B5898(s32,s32,s32,s32);
s32 func_002B6A70(s32 a,s32 b,s32 c,P*d){volatile P copy=*d;s32 r=func_001441B8(0x58);if(r)func_002B5898(r,b,c,a);return r;}
typedef struct{u8 pad[14];volatile s16 hE,h10,h12,h14,h16,h18,h1A,h1C;u8 pad2[6];volatile f32 f24,f28,f2C;u8 pad3[8];volatile s16 h38,h3A;u8 pad4[6];volatile s16 h42,h44,h46;volatile f32 f48,f4C,f50;}Obj;
f32 D_00482E3C,D_00482E40;
void func_002B6A10(Obj*p){f32 a=5.0f,b=D_00482E3C,c=2.0f,d=D_00482E40;p->h18=0x113;p->f50=d;p->f24=a;p->f28=b;p->h42=2;p->f4C=c;p->h3A=1;p->h44=30;p->hE=1;p->h10=1;p->h1A=30;p->h38=1;}
void func_002B57C0(Obj*p){f32 x=2.0f,y=2.5f;s16 one=1;p->f2C=y;p->h18=40;p->h1A=15;p->f28=x;p->h12=one;p->h1C=5;p->hE=one;p->f24=x;p->h10=one;}
