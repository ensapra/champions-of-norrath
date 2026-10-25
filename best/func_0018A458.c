u32 D_00362CE8;
s32 D_00362CEC;
s32 func_00189C90(s32 *, u32, s32, void **, u32 *);
s32 func_0018A458(u16 *out, u32 count, s32 arg2, void **arg3, u32 *arg4) {
 void *endp; s32 argcopy; s32 result=0; u32 rem; s32 t; u16 buf[2];
 if(count<2){argcopy=arg2;return 0;}
 rem=count-2; argcopy=arg2;
 for(;;) {
  t=func_00189C90(&argcopy,count,arg2,arg3,arg4);
  if(!t) break;
  u16 c=*(((u16 *)&D_00362CEC)+t);
  u32 cp=c; if(!cp) cp=D_00362CE8;
  u16 *p=buf;
  if(cp>0x10ffff) cp=0;
  else if(cp+0xffff2800u>0x7ff) cp=0;
  if(cp<=0xffff) *p++=cp;
  else {cp+=0xffff0000u; *p++=(cp>>10)-0x2800; *p++=(cp&0x3ff)|0xdc00;}
  endp=p;
  u32 *z=(u32 *)&endp; *z=(u32)p;
  s32 len=((char *)endp-(char *)buf)>>1;
  u32 bytes=len*2;
  if(rem<bytes) break;
  rem-=bytes;
  result++;
  for(s32 i=0;i<len;i++) *out++=buf[i];
 }
 *out=0; return result;
}
