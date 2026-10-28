s32 func_001107E8(s32,void*,s32,void*,void*); s32 func_0011B8D0(s32); s32 func_0011BA18(s32); void func_0011E420(s32,s32); s32 func_0011CEF0(s32,s32,s32);
extern s32 D_010C6E58[]; extern char D_010C6E5C[]; extern s32 D_010C6EA8[]; extern s32 D_010C6EAC[]; extern s32 *D_010C6EB0[]; extern s32 D_010C6EB4[]; extern s32 D_010C6EBC[]; extern s8 D_004C91D8[];
s32 func_00121768(void){
 int i,j;
 if(D_010C6EBC[0]<0) goto end;
 if(D_010C6EBC[0]>=7) goto end;
 D_010C6E58[0]=func_001107E8(func_0011BA18(0xF2),D_010C6E5C,3,D_010C6EA8,D_010C6EAC);
 D_010C6EB0[0]=(s32*)func_0011B8D0(8);
 for(i=0;i<2;i++) D_010C6EB0[0][i]=func_0011B8D0(0x960);
 D_010C6EB4[0]=0;
 for(i=0;i<2;i++){
  for(j=0;j<4;j++){
   s8 *p=(s8*)D_010C6EB0[0][i]+j*0x258;
   p[0]=D_004C91D8[0];
   p[1]=D_004C91D8[1];
  }
 }
 end:
 func_0011E420(D_010C6EA8[0],D_010C6EAC[0]);
 return func_0011CEF0(D_010C6E58[0],D_010C6EBC[0],11);
}
