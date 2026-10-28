extern s32 D_001BD8AC[], D_001BD8B8[], D_001C3BEC[], D_001BB6B8[], D_001BB6C0[]; extern s32 D_001C39E8[]; extern char D_010C1EC8[];
s32 func_00152520(s32); s32 func_00148910(void); s32 func_00148920(s32); s32 func_0011C738(void); s32 func_0014D49C(s32,s32); s32 func_0015826C(s32,s32,s32,s32,s32);
void func_0010A4D0(s32,s32,s32); s32 func_0010A5B8(s32); void func_0010A5E8(s32,char*,s32); s32 func_001169E8(void); void func_00116A58(s32,char*); void func_00116AB0(void);
void func_0010A600(s32 a,s32 b){
 s32 r19=0, r21=0, old;
 func_00152520(D_001BD8AC[0]);
 if(func_00148910()==D_001C3BEC[0] || func_00148920(D_001C3BEC[0])==D_001C3BEC[0]){
  if(a){
   if(func_0011C738()==12 && D_001C39E8[0]==0){
    D_001BB6B8[0]=0;
    if(D_001BD8B8[0]) func_0010A4D0(D_001BD8B8[0],1,0x40);
   }
   D_001BB6C0[0]=a;
   func_0014D49C(a,1);
   func_0015826C(a,0,6,0,0);
   return;
  }
 }
 old=D_001BB6C0[0];
 if(old){
  if(old==a){
   if(func_001169E8()==2){
    s32 *pB=D_001BD8B8;
    if(func_0010A5B8(*pB)){
     D_001BB6B8[0]=0;
     if(*pB) func_0010A4D0(*pB,0,0);
    }
    if(b==2) D_010C1EC8[0]=0; else func_0010A5E8(a,D_010C1EC8,0x100);
    func_00116A58(b,D_010C1EC8);
   }
   return;
  }
  func_0014D49C(old,0); r19=1; D_001BB6C0[0]=0;
 }
 old=D_001BB6C0[0];
 D_001BB6C0[0]=a;
 if(old!=a) r19 = a?0:r19;
 if(a){ func_0014D49C(a,1); r21 = b!=0x63; }
 if(!r19 && r21==1){
  if(b==2) D_010C1EC8[0]=0; else func_0010A5E8(a,D_010C1EC8,0x100);
  func_00116A58(b,D_010C1EC8);
  r19=1;
 }
 if(r19==1 && !r21) func_00116AB0();
}
