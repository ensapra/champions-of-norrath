typedef struct { u32 a,b,c,d; } E;
typedef s32 (*CB)(void*,s32,s32);
s32 func_002FA9F0(E *end, E *start, CB *cb, s32 mode, s32 *out) {
 s32 ret=0; *out=1;
 if(start) {
  E *base=start+1; s32 lim;
  if(mode){ s32 i=((char*)end-(char*)base)>>4; lim=end[-0].b-1; if(((s32*)base)[i*4]!=-1) base+=i+1; else goto skip; }
  else { lim=(s32)end-1; }
  if(*(s32*)base!=-1) {
   E *p=base; if(!mode) lim--;
   do {
    if ((u32)lim < p->a) {p++;continue;}
    if ((u32)lim >= p->b) {p++;continue;}
    if(p->d) { if(*cb && (*cb)(cb,p->d,(s32)start)) {if(!ret) ret=p->c; *out=0; return ret;} }
    else if(!ret) ret=p->c;
    p++;
   } while((s32)p->a!=-1);
  }
 }
skip: return ret;
}
