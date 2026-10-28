typedef struct{u8 pad[14];volatile s16 hE,h10,h12,h14,h16,h18,h1A,h1C;u8 pad2[6];volatile f32 f24,f28,f2C;u8 pad3[8];volatile s16 h38,h3A;u8 pad4[6];volatile s16 h42,h44,h46;volatile f32 f48,f4C,f50;}Obj;
extern const f32 D_00482E3C, D_00482E40;
void func_002B6A10(Obj*p){
    f32 a=5.0f;
    f32 b=D_00482E3C;
    f32 c=2.0f;
    f32 d=D_00482E40;
    s16 one=1, t=30;
    p->h18=0x113;p->f50=d;p->f24=a;p->f28=b;p->h42=2;p->f4C=c;p->h3A=one;p->h44=t;p->hE=one;p->h10=one;p->h1A=t;p->h38=one;}
