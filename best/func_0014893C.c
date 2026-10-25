typedef struct { s32 a,b,c,d,e,f; } S;
void func_0014893C(s32 a0, s64 *out, s64 *src, S *r) {
 s32 y,x; s32 width=r->e-r->c, height=r->f-r->d;
 for(y=0;y<height;y++) {
  for(x=0;x<width;x+=4) {
   out[0]=0x8000; out+=1;
  }
 }
}
