typedef struct {s32 f0,f4; volatile s32 read; volatile s32 cap; s32 sem,f14,f18,tail,buf;} R;
extern void WaitSema(s32); extern void SignalSema(s32); extern void func_0019C714(R*); extern void func_001A24AC(s32,s32,s32);
s32 func_0019C240(R*r,s32 src,s32 n){
  s32 result=0;
  s32 tail, x, pos, dst;
  if(n==0) return 0;
  WaitSema(*(volatile s32 *)&r->sem);
  tail=r->tail; x=r->read;
  if(tail-x<n){SignalSema(r->sem);return 1;}
  pos=r->cap+x;
  dst=r->buf;
  if(tail<pos) pos=pos-tail;
  x=tail-pos;
  if(x>=n) func_001A24AC(dst+pos,src,n);
  else{func_001A24AC(dst+pos,src,x);func_001A24AC(r->buf,src+x,n-x);}
  r->read+=n;
  func_0019C714(r);
  SignalSema(r->sem);
  return result;
}
