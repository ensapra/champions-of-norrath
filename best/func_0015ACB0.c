void func_0015ACB0(u8 *d,u8 *s,s32 count,s32 width) {
 s32 n,c;
 if(d==s) return;
 if(width==0) return;
 if(count==0) return;
 n=count*width;
 if(d<s) {
  c=n;
  while(c) { *d++=*s++; --c; }
 } else {
  c=count; s+=count; d+=count;
  while(c) { --s; --d; *d=*s; --c; }
 }
}
