void func_00107CF8(s32 amt,u8 *dst,u8 *src) {
 s32 i=0; u8 *d1=dst+1,*s1=src+1,*d2=dst+2,*s2=src+2,*d3=dst+3,*s3=src+3;
 do {
  s32 off=i*4;
  dst[off]=src[off];d1[off]=s1[off];d2[off]=s2[off];
  s32 v;
  i++;
  if((u32)(amt+5)>10 || amt==0) v=*s3;
  else if(amt<0) { v=*s3+(*s3>>3)*amt; *d3=v; }
  else { s32 a=*s3; v=a+((a+0x10)>>3)*amt; if(v>=0x100)v=255; }
  *d3=v;
  d3+=4;s3+=4;
 } while(i<4);
}
