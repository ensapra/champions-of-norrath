extern void *func_001441B8(s32);
extern s32 func_00194498(void*,void*);
extern s32 func_00162BF0(void*,void*);
extern u32 D_0044D498[],D_0044CD48[];
struct __attribute__((packed,aligned(4))) C12 {u64 a;u32 b;};
struct Obj {u32 f0,f4,f8,fC;struct C12 c; f32 f1C,f20;u32 f24;u8 b28,b29;u32 f2C;f32 f30;u32 f34;u16 h38;f32 f3C,f40;u32 f44,vt;u8 b4C;u32 f50,f54;u8 sub[0x80-0x58];u32 f80;struct C12 t[5];};
struct Obj *func_00115368(struct Obj *in){
struct Obj *out=func_001441B8(0xC0);struct Obj *result;
if(out){out->vt=(u32)D_0044D498;
func_00194498(&out->f0,&in->f0);
func_00194498(&out->f4,&in->f4);
func_00194498(&out->f8,&in->f8);
out->fC=in->fC;{u64 a=in->c.a;u32 b=in->c.b;out->c.a=a;out->c.b=b;}{f32 f=in->f1C;u32 w=in->f24;out->f1C=f;out->f24=w;}out->f20=in->f20;
out->b28=in->b28;out->b29=in->b29;out->vt=(u32)D_0044CD48;
{u32 w=in->f44;u32 b=in->f2C;u16 h=in->h38;u32 a=in->f34;out->f30=in->f30;out->f3C=in->f3C;out->f44=w;out->f2C=b;out->f34=a;out->f40=in->f40;out->h38=h;}
out->b4C=in->b4C;
out->f50=in->f50;
out->f54=in->f54;
func_00162BF0(out->sub,in->sub);
{u32 v=in->f80;struct C12 *s=in->t;struct C12 *d=out->t;int i=4;out->f80=v;do{*d=*s;d++;s++;}while(--i!=-1);}
result=out;}else{result=0;}return result;
}
