extern s32 D_00486C54; void func_0025C790(s32,void*,s32,s32); s32 func_0025C748(void*); s32 func_003044FC(s8*,s32);
s32 func_0025B648(s32 arg0,s32 *out) {
 s8 buf[0x288]; s32 sum=0;
 func_0025C790(2,(void*)0x1B610,0,0);
 func_0025C790(3,buf,0x288,0);
 if(func_0025C748(&D_00486C54)!=0) return -1;
 if(buf[0]==0) return -1;
 s32 count=0; s8 *rec=buf;
 while(1) {
  if(func_003044FC(rec,arg0)==0) { *out=sum; return count; }
  sum+=*(s32*)(rec+0x14); rec+=0x18; count++;
  if(count>=0x1A || rec[0]==0) return -1;
 }
}
