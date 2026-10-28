u32 func_0024FB08(u8); s32 func_00304CFC(u8 *);
void func_0024FC10(u8 *src,s16 *dst){s32 i=0; s32 n=func_00304CFC(src); s32 offset=i*2; s16 *out; if(n>0){out=dst; do {u32 v=func_0024FB08(src[i]); u32 a=v>>8; v &=255; a &=255; v <<=8; i++; *out=a|v; out++;}while(i<n); offset=i*2;} dst[i]=0;}
