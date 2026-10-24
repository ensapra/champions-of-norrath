extern char D_00460DD8[],D_00460DE8[],D_00463388[];
extern s32 D_008EAB78[],D_008EABD8[],D_008EB008[];
void func_002FD348(s32*,char*,s32*); void func_0030D510(void);
s32 *func_0030EE98(void){s32 *p=D_008EB008; s32 *q; if(!*p){q=D_008EABD8;if(!*q){func_0030D510();func_002FD348(q,D_00460DD8,D_008EAB78);}func_002FD348(p,D_00460DE8,q);}return D_008EB008;}
typedef struct VE {s16 d,i; void (*f)();} VE;
void func_00313700(u8 *o,s32 a,s32 b,u8 **p){u8 *q=*p;VE *v=*(VE**)(o+0x60);if(q && (*(s32*)(*(u8**)(q+12)+12)&64)){v+=11;v->f(o+v->d);}else {v+=12;v->f(o+v->d,a,b);}}
void func_00313A08(u8 *p){s32 i;for(i=0;i<5;i++){*(s16*)(p+14+i*2)=0;*(f32*)(p+36+i*4)=2.0f;*(s16*)(p+24+i*2)=1;}}
s32 func_001671F8(char*); s32 func_00190E20(s32,s32,f32,f32,f32,f32,f32,f32,f32,f32);
s64 func_00313CA0(s32 a,s32 b,s32 c){return func_00190E20(b,func_001671F8(D_00463388),(f32)(c*5),0.f,0.f,0.f,0.f,0.f,0.f,0.f);}
