extern f32 D_004821B4; extern f32 D_004821B8;
void func_00272BB8(void);
void func_00159EC0(void *, void *, void *, f32, f32, f32);
void func_00159F90(void *);
void func_0015A2B0(void *, void *);
void func_00272CC0(void *arg0) {
 f32 *a=(f32*)((u8*)arg0+0x4a4), *b=(f32*)((u8*)arg0+0x10), *c=(f32*)((u8*)arg0+0x4b0);
 f32 sp10,sp14,sp18,sp20,sp24,sp28,sp30,sp34,sp38,sp40,sp44,sp48,sp4c;
 void *p=(u8*)arg0+0x43c;
 func_00272BB8();
 sp10=a[0]*39.0f;sp14=a[1]*39.0f;sp18=a[2]*39.0f;
 b[0]-=sp10*D_004821B4;b[1]-=sp14*D_004821B4;b[2]-=sp18*D_004821B4;
 sp20=c[0]*D_004821B8;sp24=c[1]*D_004821B8;sp28=c[2]*D_004821B8;
 sp30=sp20*0.5f;sp34=sp24*0.5f;sp38=sp28*0.5f;
 func_00159EC0(&sp40,p,&sp30,sp10*D_004821B4,sp14*D_004821B4,sp18*D_004821B4);
 *(f32*)p+=sp40;*((f32*)p+1)+=sp44;*((f32*)p+2)+=sp48;*((f32*)p+3)+=sp4c;
 func_00159F90(p);func_0015A2B0((u8*)arg0+0x45c,p);
}
