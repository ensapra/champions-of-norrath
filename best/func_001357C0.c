typedef struct { s32 *data; s32 a4,a8,off,len; s32 f14,f18,f1c,f20; s32 f24,f28,f2c,f30,f34,f38; } Parser357;
extern void func_00135DE8(s32, void *, s32, s32);
extern u32 jtbl_00461250[];
void func_001357C0(Parser357 *o) {
 s32 *base=o->data; void *table; s32 off=base[3], len=base[4], pos=0, code, value; s32 *p=(s32 *)((u8 *)base+off);
 func_00135DE8(0,&table,0,0);
 if(len-off<=0) {o->f20|=0x8000;return;}
 while(pos<len-off) {
  code=p[pos/4]; if(code>=0x100) return;
  value=((s32 *)table)[code];
  p[pos/4]=value;
  switch(code) {
   case 1: pos+=4; break;
   case 2: p[pos/4]+= (s32)base; pos+=4; break;
   case 3: o->f2c=1; o->f28=p[pos/4]; o->f38=(s32)(p+pos/4+1); pos+=4; break;
   case 4: o->f2c=2; o->f24=p[pos/4]; o->f28=p[pos/4+1]; pos+=8; break;
   case 5: o->f2c=3; o->f30=p[pos/4+1]; o->f34=p[pos/4+2]; o->f38=(s32)(p+pos/4+3); pos+=12; break;
   case 6: o->f2c=8; o->f30=p[pos/4+1]; o->f34=p[pos/4+2]; pos+=8; break;
   default: o->f20|=0x8000;return;
  }
 }
 o->f20|=0x8000;
}
