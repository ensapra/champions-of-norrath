extern u8 D_00408600[]; s8 D_00483829; s32 D_00484538=1; s8 D_00485BDF; s8 D_00485BEC; s32 D_00486C34; s32 D_00486C58; s32 D_00486C60; s32 D_00486C6C; s32 D_00486C78;
s32 func_001353A8(s32); s32 func_0025B970(void); void func_001C7890(s8,s32); void func_0025BBD0(s32,s32);
void func_002506B8(s32 a){
 s32 found=0;
 if(D_00484538>0){
  s32 n=D_00484538;
  u8*base=D_00408600;
  u8*p=base+0xac;
  do{
   void*o=*(void**)(p+0x54c4);
   if(o&&!(*(s32*)((u8*)o+0xc)&8)&&*(f32*)p>0.0f)found=1;
   p+=0x5db0;
  }while(--n!=0);
 }
 if(found&&D_00486C60==0&&D_00486C34==-1&&D_00486C58==0&&(D_00483829==0||func_001353A8(a)!=0)){
  func_0025B970();D_00485BEC=(s8)a;D_00486C78=0;D_00486C6C=0;D_00485BDF=0;func_001C7890((s8)a,1);
  void(*fp)(s32,s32)=func_0025BBD0;fp(2,0);}
}
