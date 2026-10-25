typedef union {s64 word; struct {u64 x0:11;u64 p0:5;u64 x1:11;u64 p1:5;u64 y0:11;u64 p2:5;u64 y1:11;u64 p3:5;} f;} Scissor;
typedef struct {u8 pad[32];Scissor scissor;} Packet;
#define F(o) (*(s32*)((u8*)arg0+(o)))
s64 func_00150974(void *arg0){
u8 *base=(u8*)arg0+F(0x4EC)*160;
Packet *a=(Packet*)(base+0x640);
Packet *b=(Packet*)(base+0x690);
s64 old=a->scissor.word; Packet *s=a;
if(F(0x858)){
s64 x0=F(0x830); s32 x1=F(0x838); s32 y0=F(0x834); s32 y1=F(0x83C);
s->scissor.word=old;
s->scissor.f.x0=x0>>4;
s->scissor.f.x1=(x1>>4)-1;
s->scissor.f.y0=(y0+7)>>4;
s->scissor.f.y1=((y1+15)>>4)-1;
}else{
s->scissor.word=old;
s->scissor.f.x0=0;s->scissor.f.y0=0;s->scissor.f.x1=0;s->scissor.f.y1=0;
}
a->scissor.word=s->scissor.word;
return b->scissor.word=*(volatile s64*)&a->scissor.word;
}
