extern s32 D_010C1E80[]; extern s32 D_010C1EA8[];
s32 func_00107B60(void) {
 s32 *root=D_010C1E80; s32 *p=root+3, k=0, off=0;
 do {
  s32 n=*p;
  if(n>0) {
   s32 *t=(s32*)((u8*)root+off); s32 key=*D_010C1EA8;
   s32 *items=(s32*)t[0]; s32 count=t[3], j=0, step=0;
   do {
    s32 *q=(s32*)((u8*)items+step);
    if(q[0]==key)return q[1]&2;
    j++; step+=0x1c;
   } while(j<count);
  }
  k++; off+=0x14; p+=5;
 } while(k<2);
 return 0;
}
