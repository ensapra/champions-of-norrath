extern void *func_001441B8(s32); extern void func_00194498(void*,void*); extern void func_00162BF0(void*,void*); extern u32 D_0044D498[],D_0044D378[],D_00449DE0[];
struct __attribute__((packed,aligned(4))) C12 {u64 a;u32 b;};
struct Obj {u32 f0,f4,f8,fC;struct C12 c;f32 f1C,f20;u32 f24;u8 b28,b29;u32 f2C;f32 f30;u32 f34;u16 h38;f32 f3C,f40;u32 f44,vt,f4C;u8 b50,q51[3],b54,pad55;u16 h56;u32 f58,f5c;struct C12 c60;u32 f6c;};
struct Obj *func_00126168(struct Obj *in) {
 struct Obj *out=func_001441B8(0x98),*result;
 if(out) {
  out->vt=(u32)D_0044D498; func_00194498(&out->f0,&in->f0);func_00194498(&out->f4,&in->f4);func_00194498(&out->f8,&in->f8);
  out->fC=in->fC;{u64 a=in->c.a;u32 b=in->c.b;out->c.a=a;out->c.b=b;}
  {f32 f=in->f1C;u32 w=in->f24;out->f1C=f;out->f24=w;}
  out->f20=in->f20;out->b28=in->b28;out->b29=in->b29;out->vt=(u32)D_0044D378;
  {u32 b=in->f2C,a=in->f34,w=in->f44;u16 h=in->h38;
   out->f30=in->f30;out->f3C=in->f3C;out->f2C=b;out->f34=a;out->f40=in->f40;out->f44=w;out->h38=h;}
  func_00194498(&out->f4C,&in->f4C);
  out->b50=in->b50;out->vt=(u32)D_00449DE0;out->b54=in->b54;out->f58=in->f58;out->f5c=in->f5c;
  {u64 a=in->c60.a;u32 b=in->c60.b;out->c60.a=a;out->c60.b=b;}out->f6c=in->f6c;
  func_00162BF0((char*)out+0x70,(char*)in+0x70);result=out;
 }else result=0;
 return result;
}
