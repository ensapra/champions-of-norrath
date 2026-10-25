extern f32 D_00482B70; extern f32 D_00482B74;
typedef struct {u8 pad[14]; volatile s16 h0e,h10,h12,h14,h16,h18,h1a,h1c,h1e,h20; u8 pad2[2]; volatile f32 f24,f28,f2c,f30; u8 pad3[0x18]; volatile f32 f4c;} Obj9;
void func_002A9D50(volatile Obj9 *o) {
 f32 a=2.0f,b=1.0f,c=D_00482B70,d=D_00482B74;
 o->f4c=d; o->h1a=15; o->f28=a; o->h1c=8; o->f2c=b; o->h14=6; o->h1e=21; o->f30=c; o->h18=1; o->h20=2; o->h0e=1; o->h18=6; o->f24=a; o->h10=1; o->h12=6;
}
