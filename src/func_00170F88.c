s32 func_00144558(s32);
void func_0016CE88(void);
void func_0016D520(void);
void StartThread_2(s32, s32);
void TerminateThread_2(s32);
typedef struct { s32 a; s32 b; } P;
s32 D_00486968;
volatile s32 D_00486978;
volatile s32 D_0048697C;
s32 D_00486984;
s8 D_004840A0;
s8 D_004840A1;
s8 D_004840A2;
s32 D_004840AC;
volatile s32 D_0048410C;
s8 D_00484110;
extern u8 D_0034C030[];
extern u8 D_006E5E80[];
extern u8 D_006E8680[][128];
extern u8 D_006E8F00[];
extern u32 D_006E9000[];
extern P D_006E9390[];
void func_00170F88(void) {
 s32 i;
 D_0048697C=0;
 D_004840A0=0;
 D_00486978=D_0048697C;
 D_004840A1=0;
 for (i = 0; i < D_00486984; i++) {
   if (D_006E9390[i].b) {
     func_00144558(D_006E9390[i].b);
     D_006E9390[i].b = 0;
   }
 }
 {
   u32 *p=(u32*)D_006E5E80;
   s32 j=0x4FF;
   do {u32 v=*p;if(v)*(u32*)(v+0x14)=0;j--;*p=0;p+=2;}while(j>=0);
 }
 D_004840AC=0;
 {
   s32 k;
   for(k=0;k<=0x9C3F;k++) D_0034C030[k]=0xFF;
 }
 {
   s32 row,col;
   for(row=0;row<0x11;row++){
     D_006E9000[row]=0xFFFFFFFF;
     for(col=0x7F;col>=0;col--)D_006E8680[row][col]=0xFF;
   }
 }
 {
   s32 m;
   u8 *z = D_006E8F00;
   z += 0xFF;
   for(m=0xFF;m>=0;m--)*z-- = 0;
 }
 D_0048697C=0;
 D_00486978=D_0048697C;
 D_0048410C=0;
 TerminateThread_2(D_00486968);
 StartThread_2(D_00486968,0);
 D_00484110=0;
 func_0016CE88();
 func_0016D520();
 D_004840A2=0;
}
