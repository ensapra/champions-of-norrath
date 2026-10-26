#define F(o,off) (*(s32 *)((u8 *)(o)+(off)))
void func_00155544(void *o,s32 *a,s32 *b,s32 *c,s32 *d) {
s32 p=F(o,0x5d4), q=F(o,0x5a0), r=F(o,0x880), s=F(o,0x878); *a=(q+r)+(s+p);
p=F(o,0x5d4); q=F(o,0x5a4); r=F(o,0x888); s=F(o,0x87c); *b=(q+r)+(s+p);
s32 x=F(o,0x5ac)-(F(o,0x878)*2)-F(o,0x880)-F(o,0x884); *c=x<0?0:x;
s32 y=F(o,0x5b0)-(F(o,0x87c)*2)-F(o,0x888)-F(o,0x88c); *d=y<0?0:y;
}
