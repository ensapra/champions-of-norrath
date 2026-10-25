extern u16 D_00362CE0; extern u32 D_00362CE8; extern u16 D_00362CF0[];
s32 func_00189E08(s32 *,u16,void *,s32);
s32 func_0018A5D0(u8 *dst,s32 n,u16 *src,s32 mode) {
 s32 done=0; u32 left; s32 result; u8 *out=dst;
 if(n==0) { u32 saved=(u32)src; return 0; }
 left=n-1;
 do {
  u16 x=*src++; u32 token=x;
  if(((x+0x2800)&0xffff)<0x400) {
   u16 y=*src++;
   if(((y+0x2400)&0xffff)<0x400) token=((u32)x<<16)|y;
   else token=D_00362CE8;
  } else if(((x+0x2400)&0xffff)<0x400) token=D_00362CE8;
  if(!token) break;
  u16 size=D_00362CE0;
  if(token<=0xffff) {u16 q=D_00362CF0[token]; if(q) size=q;}
  if(!size) break;
  func_00189E08(&result,size,src,mode);
  u32 bytes=(u32)(result-(s32)&result);
  u32 old=left;
  left-=bytes;
  if(old<bytes) break;
  s32 newdone=done+1;
  u8 *p=(u8 *)&result;
  s32 count=bytes-1;
  while(count!=-1) {u8 c=*p++; count--; *out++=c;}
  done=newdone;
 } while(1);
 *out=0;
 return done;
}
