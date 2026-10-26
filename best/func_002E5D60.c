typedef struct { char pad[0x24]; int f; } S; extern int func_002E4910(void*,int,int,int,int,int);
int func_002E5D60(S *a,int size,int c,int d) {
 int i,r;
 if(size<0x100 || size!=((size+0x3f)&~0x3f))return -0x21f;
 for(;;) {
  r=func_002E4910(a,0x80001201,0,size,c,d);
  if(r<0)return -0x21c;
  if(a->f!=0)break;
  for(i=0x10000;i!=-1;i--){}
 }
 return 0;
}
