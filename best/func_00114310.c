extern void *func_001441B8(s32);
extern s32 func_00194498(void*,void*);
extern u32 D_0044D498[],D_0044D378[];
struct __attribute__((packed,aligned(4))) C12_114310 {u64 a;u32 b;};
struct Obj114310 {u32 f0,f4,f8,fC;struct C12_114310 c; f32 f1C,f20;u32 f24;u8 b28,b29;u32 f2C;f32 f30;u32 f34;u16 h38;f32 f3C,f40;u32 f44,vt;u32 f4C;u8 b50;};
struct Obj114310 *func_00114310(struct Obj114310 *in){
struct Obj114310 *out=func_001441B8(0x54);struct Obj114310 *result;
if(out){out->vt=(u32)D_0044D498;
func_00194498(&out->f0,&in->f0);
func_00194498(&out->f4,&in->f4);
func_00194498(&out->f8,&in->f8);
out->fC=in->fC;{u64 a=in->c.a;u32 b=in->c.b;out->c.a=a;out->c.b=b;}{f32 f=in->f1C;u32 w=in->f24;out->f1C=f;out->f24=w;}out->f20=in->f20;
out->b28=in->b28;out->b29=in->b29;out->vt=(u32)D_0044D378;
{u32 a=in->f2C;u32 b=in->f34;u32 w=in->f44;u16 h=in->h38;out->f30=in->f30;out->f3C=in->f3C;out->f34=b;out->f2C=a;out->h38=h;out->f44=w;out->f40=in->f40;}
func_00194498(&out->f4C,&in->f4C);
out->b50=in->b50;
result=out;}else{result=0;}return result;
}
