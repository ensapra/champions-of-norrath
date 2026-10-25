extern "C" { void *func_001441B8(s32); s32 func_00194498(void*,void*,...); }
extern char D_0044D498[]; extern char D_004498B0[];
struct C12{u64 a;u32 b;}__attribute__((packed,aligned(4)));
struct Obj{u32 f0,f4,f8,fC;C12 c;f32 f1C,f20;u32 f24;u8 b28,b29;u32 f2C;f32 f30;u32 f34;u16 h38,pad3A;f32 f3C,f40;u32 f44;u32 vt;u16 f4C,f4E,f50,f52;u32 f54;u8 f58;};
Obj*func_001278E8(Obj*in){Obj*out=(Obj*)func_001441B8(0x5C);if(!out)return 0;out->vt=(u32)D_0044D498;func_00194498(&out->f0,&in->f0,0);func_00194498(&out->f4,&in->f4);func_00194498(&out->f8,&in->f8);out->fC=in->fC;{u64 a=in->c.a;u32 b=in->c.b;out->c.a=a;out->c.b=b;}out->f1C=in->f1C;out->f24=in->f24;out->f20=in->f20;out->b28=in->b28;out->b29=in->b29;out->vt=(u32)D_004498B0;out->h38=in->h38;out->f30=in->f30;out->f4C=in->f4C;out->f3C=in->f3C;out->f4E=in->f4E;out->f34=in->f34;out->f2C=in->f2C;out->f40=in->f40;out->f44=in->f44;out->f50=in->f50;out->f54=in->f54;out->f52=in->f52;out->f58=in->f58;return out;}
