typedef struct {u8 pad[14];volatile s16 f0e,f10,f12,f14,f16; s16 f18;volatile s16 f1a,f1c,f1e,f20;u8 pad2[2];volatile f32 f24,f28,f2c;} Params2;
extern const f32 D_00482CF0;
void func_002B1200(Params2 *p) { f32 x=5.0f; s32 one=1; f32 a=D_00482CF0; f32 y=3.0f; p->f18=5; p->f2c=y; p->f24=x; p->f1a=10; p->f28=a; p->f12=one; p->f1c=3; p->f0e=one; p->f10=one; }
