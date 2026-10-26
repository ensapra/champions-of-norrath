extern u8 D_010D4478[];
extern u8 D_010D446C[];
extern u8 D_010D4468[];
extern u8 D_010D444C[];
s32 func_00149AE4(s32,s32,s32,void*);
void func_001423C0(s64 arg1) {
 s32 mode=(s64)(arg1<<32)>>32;
 if (mode==0) {
  s32 *p=(s32*)D_010D4478;
  s32 a=*p-1;
  s32 b=*(s32*)D_010D446C;
  s32 c=*(s32*)D_010D4468;
  s32 limit=b-c;
  if(a<0) a=0;
  *p=a;
  if(limit<a) { *p=limit; a=limit; }
  func_00149AE4(*(s32*)D_010D444C,a,limit,p);
 } else if(mode==1) {
  s32 *p=(s32*)D_010D4478;
  s32 a=*p+1;
  s32 b=*(s32*)D_010D446C;
  s32 c=*(s32*)D_010D4468;
  s32 limit=b-c;
  if(a<0) a=0;
  *p=a;
  if(limit<a) { *p=limit; a=limit; }
  func_00149AE4(*(s32*)D_010D444C,a,limit,p);
 }
}
