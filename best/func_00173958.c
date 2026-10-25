typedef unsigned long long u64; typedef unsigned int u32; typedef unsigned short u16; typedef int s32;
extern s32 D_00484468,D_00484474,D_004844C8,D_00486998,D_0048699C,D_004869AC;
extern u32 D_004844C4;
extern u16 *D_00486994;
extern s32 D_006E93D0[];
void func_00173408(void *,void *,s32,void *,...);
void func_00173958(void *a,void *b,s32 c,void *d) {
 s32 used=(D_004844C8-(s32)D_004844C4)>>3;
 if(D_00484468-used<0x1770)return;
 if(D_00484474==0){func_00173408(a,b,c,d);return;}
 {
  u64 *cur,*tag,*mid,*end,*mid2,*tag2,*end2; s32 n;
  cur=(u64*)D_006E93D0[0];
  *D_00486994+=D_00486998*2;
  tag=cur+4; mid=cur+2; n=D_00486998*2;
  D_00486998=0; D_0048699C+=n;
  cur[0]=0x1000000000000000ULL; cur[1]=0xE;
  mid[0]=2; mid[1]=0x22;
  D_006E93D0[0]=(s32)(cur+6); D_006E93D0[2]=(s32)cur;
  cur[0]|=1;
  D_00486994=(u16*)tag; tag[0]=0x2400000000008000ULL; tag[1]=0x53;
  D_004869AC=2; D_0048699C+=3;
  func_00173408(cur,tag,2,mid);
  cur=(u64*)D_006E93D0[0];
  *D_00486994+=D_00486998*2;
  mid2=cur+2; tag2=cur+4; end2=cur+6; n=D_00486998*2;
  D_00486998=0; D_0048699C+=n;
  cur[0]=0x1000000000000000ULL; cur[1]=0xE;
  mid2[0]=3; mid2[1]=0x22;
  D_006E93D0[2]=(s32)cur; D_006E93D0[0]=(s32)end2;
  cur[0]|=1; D_00486994=(u16*)tag2; tag2[0]=0x2400000000008000ULL; tag2[1]=0x53;
  D_004869AC=3; D_0048699C+=3;
  func_00173408(a,b,c,d,cur,tag2,mid2,end2);
  cur=D_006E93D0[0];
  *D_00486994+=D_00486998*2;
  tag=cur+4; mid=cur+2; end=cur+6; n=D_00486998*2;
  D_00486998=0; D_006E93D0[0]=end; D_0048699C+=n;
  cur[0]=0x1000000000000000ULL; cur[1]=0xE;
  mid[1]=0x22; mid[0]=0; D_006E93D0[2]=(s32)cur; cur[0]|=1;
  D_00486994=(u16*)tag; tag[0]=0x2400000000008000ULL; tag[1]=0x53;
  D_004869AC=0; D_0048699C+=3;
 }
}
