extern void *func_001441B8(s32);
extern s32 func_00194498(void*,void*);
extern u32 D_0044D498[],D_0044C8C0[];
struct __attribute__((packed,aligned(4))) C12 {u64 a;u32 b;};
struct __attribute__((packed,aligned(4))) C8 {u64 a;};
struct Obj {u32 f0,f4,f8,fC;struct C12 c; f32 f1C,f20;u32 f24;u8 b28,b29;u32 f2C;f32 f30;u32 f34;u16 h38;f32 f3C,f40;u32 f44,vt;struct C8 d;struct C8 e;u32 f5C;u8 b60,b61;u32 f64,f68,f6C;};
struct Obj *func_00115D80(struct Obj *in){
struct Obj *out=func_001441B8(0x70);struct Obj *result;
if(out){out->vt=(u32)D_0044D498;
func_00194498(&out->f0,&in->f0);
func_00194498(&out->f4,&in->f4);
func_00194498(&out->f8,&in->f8);
out->fC=in->fC;{u64 a=in->c.a;u32 b=in->c.b;out->c.a=a;out->c.b=b;}{f32 f=in->f1C;u32 w=in->f24;out->f1C=f;out->f24=w;}out->f20=in->f20;
out->b28=in->b28;out->b29=in->b29;out->vt=(u32)D_0044C8C0;
{u32 b=in->f34;u16 h=in->h38;u32 w=in->f44;u32 a=in->f2C;out->f30=in->f30;out->f3C=in->f3C;out->f34=b;out->h38=h;out->f44=w;out->f2C=a;out->f40=in->f40;}
{u64 a=in->d.a;out->d.a=a;}{u64 a=in->e.a;out->e.a=a;}
out->f5C=in->f5C;out->b60=in->b60;out->b61=in->b61;{u32 w=in->f64;u32 x=in->f6C;out->f64=w;out->f6C=x;}out->f68=in->f68;
result=out;}else{result=0;}return result;
}
