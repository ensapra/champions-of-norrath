extern const f32 D_004827A0; extern const f32 D_004827A4; extern const f32 D_004827A8; extern const f32 D_004827AC;
typedef struct {u8 p0[0xE]; volatile s16 s0E,s10,s12; u8 p14[4]; volatile s16 s18,s1A,s1C; u8 p1E[6]; volatile f32 f24,f28,f2C; u8 p30[8]; volatile s16 s38,s3A,s3C; u8 p3E[4]; volatile s16 s42,s44,s46; u8 p48[4]; volatile f32 f4C,f50,f54;} T;
void func_00296790(T *p) {
 s16 one=1, five=5;
 f32 two=2.0f, a=D_004827A0, b=D_004827A4, c=D_004827A8, d=D_004827AC;
 p->s18=0x14; p->f54=d; p->s1A=2; p->f28=a; p->f2C=b; p->f4C=two; p->s44=five; p->f50=c;
 p->s46=one; p->s0E=one; p->f24=two; p->s10=one; p->s12=one; p->s1C=five; p->s38=one; p->s42=one; p->s3A=one; p->s3C=one;
}
