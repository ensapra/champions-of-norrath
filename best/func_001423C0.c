extern u8 func_01000000[];
s32 func_00149AE4(s32, s32, s32, void *);
void func_001423C0(s64 arg1) {
 s32 mode=(s64)(arg1<<32)>>32;
 if(mode==0) {
  s32 a=*(s32*)(func_01000000+0xD4478)-1;
  s32 b=*(s32*)(func_01000000+0xD446C);
  s32 c=*(s32*)(func_01000000+0xD4468);
  s32 limit=b-c;
  if(a<0)a=0;
  *(s32*)(func_01000000+0xD4478)=a;
  if(limit<a){*(s32*)(func_01000000+0xD4478)=limit;a=limit;}
  func_00149AE4(*(s32*)(func_01000000+0xD444C),a,limit,func_01000000+0xD4478);
 } else if(mode==1) {
  s32 a=*(s32*)(func_01000000+0xD4478)+1;
  s32 b=*(s32*)(func_01000000+0xD446C);
  s32 c=*(s32*)(func_01000000+0xD4468);
  s32 limit=b-c;
  if(a<0)a=0;
  *(s32*)(func_01000000+0xD4478)=a;
  if(limit<a){*(s32*)(func_01000000+0xD4478)=limit;a=limit;}
  func_00149AE4(*(s32*)(func_01000000+0xD444C),a,limit,func_01000000+0xD4478);
 }
}
