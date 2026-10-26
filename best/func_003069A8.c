extern s32 func_00306A60(void *); extern s32 func_002FFDE8(void *);
typedef struct {u8 pad0[12];u16 unkC,unkE;u8 pad1[12];s32 unk1C,pad20,unk24;u8 pad2[44];u32 unk54;} Ent;
typedef struct {u32 self;s32 pad4,s8;u16 hC,hE;void *p10;s32 s14,s18,s1C,pad20,s24;u8 pad3[44];u32 s54;u8 pad58[8];u8 buf[1024];} M;
s32 func_003069A8(Ent *arg0) {
 M m; s32 r;
 u16 c=((volatile Ent*)arg0)->unkC,e=((volatile Ent*)arg0)->unkE;u32 a=((volatile Ent*)arg0)->unk54;s32 b=((volatile Ent*)arg0)->unk1C,d=((volatile Ent*)arg0)->unk24;
 m.p10=&m.buf;
 m.s54=a;m.hC=c&0xFFFD;m.hE=e;m.s1C=b;m.s24=d;
 m.s14=m.s8=sizeof(m.buf);
 m.self=(u32)&m.buf;m.s18=0;
 r=func_00306A60(&m);if(r>=0)r=func_002FFDE8(&m)?-1:r;
 if(m.hC&64)arg0->unkC|=64;return r;
}
