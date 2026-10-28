#define F(p,o) (*(s32 *)((u8 *)(p)+(o)))
void func_00150D9C(u8 *);
void func_00150D18(u8 *p,s32 a,s32 b,u8 *q) {
void (*fn)(u8 *); void *f2; s32 t;
F(p,0x814)=b; F(p,0x810)=a;
fn=*(void (**)(u8 *))(*(u8 **)(p+0x4c)+0x130);
F(p,0x818)=F(q,0x18); F(p,0x81c)=F(q,0x1c); t=F(q,0x20); F(p,0x820)=t; F(p,0x824)=F(q,0x24);
fn(p); f2=*(void **)(p+0x4c); f2=*(void **)((u8 *)f2+0x12c); ((void (*)(u8 *))f2)(p); t=2; F(p,0x98)=t; func_00150D9C(p);
}
