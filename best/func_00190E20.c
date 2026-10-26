extern s32 func_002FB320(u16,u16*,f32); extern void func_00303EB8(char*,char*,s32);
extern char D_00484480[],D_00484488[],D_00484490[];
void func_00190E20(u16 *dst,u16 *fmt,f32 f0,f32 f1,f32 f2,f32 f3,f32 f4,f32 f5,f32 f6,f32 f7) {
 f32 *fp=&f0; char a[0x50],b[0x100],c[0x60]; u16 ch;
 for(;;) {
  ch=*fmt;
  if(ch==0x25) {
   u16 spec=fmt[1];
   if(spec==0x25) { *dst=spec; dst++; }
   if(spec==0x64) { s32 v=(s32)*fp++; func_00303EB8(a,D_00484480,v); for(char *p=a;*p;) *dst++=(s16)(s8)*p++; }
   if(spec==0x63) { *dst++=(s16)(s32)*fp++; }
   if(spec==0x73) { s32 v=(s32)*fp++; func_00303EB8(b,D_00484488,v); for(char *p=b;*p;) *dst++=(s16)(s8)*p++; }
   if(spec==0x75) { u16 *p=(u16*)(s32)*fp++; while(*p) *dst++=*p++; }
   if(spec==0x66) { f32 v=*fp++; s32 n=func_002FB320(spec,fmt,v); func_00303EB8(c,D_00484490,n); for(char *p=c;*p;) *dst++=(s16)(s8)*p++; }
   fmt+=2;
  } else if(ch!=0) { *dst++=ch; fmt++; } else { *dst=0; return; }
 }
}
