extern s32 D_00437038[]; extern s8 D_00438930[]; extern char D_00485F58[];
s32 D_00486CF0,D_00486CF8,D_00486D00,D_00486D04; f32 D_00486D38;
s32 func_00143A80(void*,char*,s32); s32 func_003044FC(s32,s32);
s32 func_00279F48(void*p){
 s32 i,id; s32*q;
 if((u32)(D_00486CF8-7)<2)return 1;
 id=func_00143A80(p,D_00485F58,0);
 q=&D_00437038[0];i=0;
 while(i<10){s32 x=*q;q=(s32*)((char*)q+0x27c);if(!func_003044FC(x,id))break;i++;}
 *(s64*)((char*)p+0xa0)=*(s64*)((char*)p+0xa0)&(s64)(s32)0xffdfffff;
 if(i==8){if(D_00438930[D_00486CF0*0x29]<8)*(s64*)((char*)p+0xa0)|=0x200000;}
 if(D_00486D38!=0.0f&&D_00486D00==7&&D_00486D04==8&&i==9)*(s64*)((char*)p+0xa0)|=0x200000;
 if(i==10)return 1;
 return (u32)(i-D_00438930[D_00486CF0*0x29]+1)<3;
}
