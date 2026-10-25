extern void *func_001441B8(s32);
extern s32 func_00194498(void*,void*);
extern u32 D_0044D498[],D_00448DA0[];
struct __attribute__((packed,aligned(4))) C12 {u64 a;u32 b;};
struct Obj {u32 f0,f4,f8,fC;struct C12 c; f32 f1C,f20;u32 f24;u8 b28,b29;u32 f2C;f32 f30;u32 f34;u16 h38;f32 f3C,f40;u32 f44,vt,f4C;struct C12 d;u32 f5C,f60;f32 f64;u32 f68,f6C;};
struct Obj *func_001298E8(struct Obj *in){
struct Obj *out=func_001441B8(0x70);struct Obj *result;
if(out){out->vt=(u32)D_0044D498;
func_00194498(&out->f0,&in->f0);
func_00194498(&out->f4,&in->f4);
func_00194498(&out->f8,&in->f8);
out->fC=in->fC;{u64 a=in->c.a;u32 b=in->c.b;out->c.a=a;out->c.b=b;}{f32 f=in->f1C;u32 w=in->f24;out->f1C=f;out->f24=w;}out->f20=in->f20;
out->b28=in->b28;out->b29=in->b29;out->vt=(u32)D_00448DA0;
{u32 b=in->f2C;u32 a=in->f34;u32 w=in->f44;u16 h=in->h38;out->f30=in->f30;out->f3C=in->f3C;out->f2C=b;out->f34=a;out->f44=w;out->h38=h;out->f40=in->f40;}
func_00194498(&out->f4C,&in->f4C);
out->d=in->d;
{u32 w=in->f5C;f32 f=in->f64;out->f5C=w;out->f64=f;}
out->f60=in->f60;out->f68=in->f68;out->f6C=in->f6C;
result=out;}else{result=0;}return result;
}
