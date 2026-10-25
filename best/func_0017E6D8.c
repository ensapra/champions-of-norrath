s32 WaitSema(s32);
s32 func_001AF710(void *,s32);
s32 func_001B08B0(void *,s32,s32,void *,s32,void *,s32,void *,s32);
extern u8 func_001D1C80[],D_010EE080[],D_010EE120[],D_010EE180[],D_010EE1C0[],jtbl_004CC7D8[],func_0017EBF8[];
s32 func_0017E6D8(s32 a,s32 b) {
 s32 r=-1, sema=*(s32*)(func_001D1C80+0x488);
 if(sema!=-1) {
  if((u32)a>=*(u32*)D_010EE080)return -11;
  *D_010EE180=a; WaitSema(sema);
  r=func_001B08B0(D_010EE120,2,1,D_010EE180,0x10,D_010EE1C0,0x50,func_0017EBF8,0);
  if(r){func_001AF710(jtbl_004CC7D8,r);return -2;}
  *(s32*)(D_010EE080+0x98)=b; *(s32*)(D_010EE080+0x90)=2; *(s32*)(D_010EE080+0x94)=a; r=0;
 }
 return r;
}
