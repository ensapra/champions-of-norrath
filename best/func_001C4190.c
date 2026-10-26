extern f32 func_00159920(f32 *,void *,void *,void *,void *,s32,s32);
extern char D_0037EF30[],D_004086E0[],D_004282B0[],D_004282D0[];
extern u32 D_00483E58; extern s32 D_004844A4; extern char D_007D0588[];
void func_001C4190(s8 a,void *b,s32 c){
 f32 x,y,z,t; s32 i=0,j; char *q;
 *(u64*)0; /* placeholder */
 q=D_007D0588+0x1c;
 if(*(s32*)q) do {i++;q+=0x24;} while(i<8 && *(s32*)q);
 if(i==8){*(s32*)(D_004086E0+(s32)a*0x5db0+8)+=c;return;}
 j=i*0x24;q=D_007D0588+j;
 *(s32*)(q+0x1c)=c; *(s8*)(q+0x20)=a; *(s32*)(q+0x18)=D_004844A4;
 t=func_00159920(&x,D_0037EF30,0,q+0x20,q+0x10,D_004844A4,c);
 if(t<20.0f||!(t*700.0f<__builtin_fabsf(x))&&t*300.0f>=__builtin_fabsf(y)) *(q+0x21)=1;
 x*=1.0f/t;y*=1.0f/t;z*=1.0f/t;x*=0.5f;
 *(f32*)(q+0)=x+320;*(f32*)(q+4)=y+240;*(f32*)(q+8)=z;
 *(f32*)(q+8)=0;
}
