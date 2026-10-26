void func_002ECEE0(void*,void*); void func_002ED4A0(void*,s64*); void func_002ED700(s64*);
void func_002ED940(void *a0,s64 *a1) {
 volatile s64 buf[9]; s32 i;
 func_002ECEE0(a0,(void*)buf);
 func_002ED4A0((void*)buf,a1);
 for(i=0;i<8;i++) {
  s64 x=a1[i], y=x; s32 neg=x<0;
  if(neg) y=-y;
  if(y<0x5666) y>>=1;
  else if(y<0x799A) y-=0x2B33;
  else y=(y-0x6600)<<2;
  if(neg) y=-y;
  a1[i]=y;
 }
 func_002ED700(a1);
}
