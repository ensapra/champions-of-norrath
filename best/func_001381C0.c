extern u32 func_00304CFC(char *); extern s32 func_00301FFC(s32 *,char *,u32); extern s32 D_004839F8;
s32 func_001381C0(s32 *dst,char *src,s32 packed){
 s32 len=func_00304CFC(src);
 if(packed){
   dst[((u32)len)>>2]=0;
   func_00301FFC(dst,src,(u32)len);
   if(D_004839F8){
     len=len/4;
     for(;len>=0;len--){
       u8 *p=(u8 *)dst+len*4;
       u8 a=p[0], d=p[3], c=p[2];
       p[3]=a;
       p[0]=d;
       p[2]=p[1];
       p[1]=c;
     }
   }
 } else {
   s32 i=0;
   if(len>0)do{dst[i]=(s32)src[i];++i;}while(i<len);
   dst[len]=0;
 }
 return 0;
}
