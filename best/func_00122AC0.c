extern void *func_001441B8(s32); extern void func_00194498(void *,void *);
extern u8 D_0044AC90[]; extern u8 D_0044CE68[]; extern u8 D_0044D018[]; extern u8 D_0044D498[];
typedef struct {u8 a[8];s32 b;} Blk12; typedef struct {u8 a[8];s32 b;u8 c[8];} Blk20;
typedef struct {volatile u32 f00,f04,f08,f0C;Blk12 f10;volatile f32 f1C,f20;volatile u32 f24;u8 f28,f29;volatile u32 f2C;volatile f32 f30;volatile u32 f34;volatile u16 f38;volatile f32 f3C,f40;volatile u32 f44;void *volatile f48;volatile u32 f4C,f50;struct{u8 a[16];}f54;struct{u8 a[64];}f64;struct{u8 a[64];}fA4;u64 fE8;Blk20 fF0;volatile u32 f104;volatile f32 f108;u16 f10C,f10E;struct{u8 a[48];}f110;u16 f140;struct{u64 a[9];}f148;struct{u8 a[152];}f188;volatile f32 f228;volatile u32 f22C,f230,f234;u8 f238,f239,f23A;volatile f32 f23C,f240;} Obj;
void *func_00122AC0(void *src){Obj*s=(Obj*)src;Obj*d=(Obj*)func_001441B8(0x248);void*r;
if(d){d->f48=(void*)D_0044D498;func_00194498(&d->f00,&s->f00);func_00194498(&d->f04,&s->f04);func_00194498(&d->f08,&s->f08);d->f0C=s->f0C;d->f10=s->f10;
{f32 a=s->f1C;u32 b=s->f24;d->f1C=a;d->f24=b;}d->f20=s->f20;d->f28=s->f28;{u32 x=s->f29;d->f48=(void*)D_0044D018;d->f29=x;}
{u32 a,b,c,e,f,k;f32 x;x=s->f30;a=s->f2C;d->f30=x;b=s->f34;x=s->f3C;k=s->f38;d->f3C=x;c=s->f44;x=s->f40;e=s->f4C;f=s->f50;d->f2C=a;d->f34=b;d->f38=k;d->f40=x;d->f44=c;d->f4C=e;d->f50=f;}
{u8*dp=d->f54.a,*sp=s->f54.a;s32 n=16;while(n--!=0)*dp++=*sp++;}{u8*dp=d->f64.a,*sp=s->f64.a;s32 n=64;while(n--!=0)*dp++=*sp++;}{u8*dp=d->fA4.a,*sp=s->fA4.a;s32 n=64;while(n--!=0)*dp++=*sp++;}
d->fE8=s->fE8;d->fF0=s->fF0;d->f104=s->f104;d->f108=s->f108;d->f10C=s->f10C;d->f10E=s->f10E;d->f110=s->f110;d->f48=(void*)D_0044CE68;d->f140=s->f140;d->f148=s->f148;{typedef struct{u8 a[152];}Chunk;*(Chunk*)((char*)d+0x190)=*(Chunk*)((char*)src+0x190);}
d->f228=s->f228;d->f22C=s->f22C;d->f230=s->f230;d->f234=s->f234;d->f238=s->f238;d->f239=s->f239;d->f48=(void*)D_0044AC90;d->f23A=s->f23A;d->f23C=s->f23C;d->f240=s->f240;r=d;}else r=0;return r;}
