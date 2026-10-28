extern const f32 D_00482BE8; extern const f32 D_00482BEC;
typedef struct {u8 pad[14]; volatile s16 h0e,h10,h12,h14,h16,h18,h1a,h1c,h1e,h20; u8 pad2[2]; volatile f32 f24,f28,f2c,f30; u8 pad3[4]; volatile s16 h38; u8 pad4[7]; volatile s16 h42; u8 pad5[8]; volatile f32 f4c;} Obj9;
void func_002AC360(Obj9 *o) {
 s16 one=1, six=6;
 f32 a=2.0f,b=1.0f,c=D_00482BE8,d=D_00482BEC;
 o->f4c=d; o->h18=14; o->h1a=15; o->f28=a; o->h1c=12; o->f2c=b; o->h14=six; o->h1e=25; o->f30=c; o->h38=one; o->h42=2; o->h0e=one; o->f24=a; o->h10=one; o->h12=six;
}
