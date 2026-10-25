typedef struct { unsigned char pad[0x10]; s32 field10,field14; unsigned char rest[0x5FE8]; s32 count; } Entry;
s32 *D_00483FF0; s32 D_00483FF4,D_00483FF8; s8 D_00486921;
extern char D_004633E0[],D_00484000[],D_0047E1F1[]; extern Entry D_006CC6A0[],D_006D26A8[];
extern void func_00166D50(void); extern s32 func_00164C70(void*,s32,u32); extern s32 func_002E2998(s32*,char*,s32);
extern void func_00303EB8(char*,char*,s32); extern s32 func_003044FC(char*,void*);
s32 func_00164F00(s32 arg0,s32 *arg1,s32 *arg2){
 char path[0x50],buf1[0x30],buf2[0x30]; Entry *tab,*out; s32 i=0,n,ret=0,value; s8 c;
 func_00303EB8(path,D_00484000,arg0);
 for(i=0;path[i];i++){c=path[i];if(D_0047E1F1[(u8)c]&2)path[i]=c-0x20;}
 i=0;tab=(Entry*)D_00483FF0;
 while(i<tab->count&&func_003044FC(path,(char*)tab+i*0x20))i++;
 n=D_00483FF4;
 if(n&&i==tab->count){
  if(tab==(Entry*)D_006CC6A0){
   func_00166D50();ret=func_002E2998((s32*)buf1,D_004633E0,1);out=(Entry*)D_006D26A8;
   if(out->count==0&&ret)func_00164C70(out,*(s32*)buf1,(*(u32*)(buf1+4)+0x7ff)>>11);
  }else{out=(Entry*)D_006CC6A0;func_00166D50();func_002E2998((s32*)buf2,D_004633E0,0);}
  i=0;while(i<out->count&&func_003044FC(path,(char*)out+i*0x20))i++;
  if(i<out->count){D_00483FF0=(s32*)out;D_00486921=0;}else tab=(Entry*)D_00483FF0;
 }
 if(i!=tab->count){ret=1;if(arg1){value=tab[i].field10;if(tab==(Entry*)D_006D26A8)value+=D_00483FF8;*arg1=value;}if(arg2)*arg2=((Entry*)D_00483FF0)[i].field14;}else ret=0;
 return ret;
}
