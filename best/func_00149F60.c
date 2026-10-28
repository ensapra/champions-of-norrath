typedef struct {char pad[0x878];s32 f878,f87c;char p[4];volatile s32 f884; s32 f888,f88c,f890;} W;
extern void (*D_001C77A4[])(W*); void func_0014A6BC(W*);
void func_00149F60(W *w) { s32 old,d,ad,n; D_001C77A4[0](w); if(w->f88c) { old=w->f884; d=w->f888-old; n=w->f878; ad=(d<0?-d:d)>>8; if((n>>1)<ad)w->f884=old+(d>>1); if((n>>2)<ad)w->f884+=d>>2; w->f884+=d>>3; if(w->f890!=0||old!=w->f884)func_0014A6BC(w); else w->f88c=0; } }
