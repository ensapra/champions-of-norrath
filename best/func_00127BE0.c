extern u8 D_010C9160[],D_010C91D8[],D_010C92C8[],D_010C92CC[],D_010C9CD0[],func_001C6788[],jtbl_004C006C[];
extern void func_00127B78(s32); extern void func_001A3D78(void*,void*,void*,void*); extern s32 func_001A4174(void*,void*); extern void func_00127940(void);
void func_00127BE0(void){
 u8 work[0xFC]; s32 n=0,i=0,j,k; s32 *p; u8 *q; s32 limit;
 if(*(s32*)D_010C9CD0<*(s32*)(func_001C6788+0xAC)){func_00127B78(*(s32*)D_010C9CD0);return;}
 if(*(s32*)(func_001C6788+0x9C)>0){
  do{
   q=(u8 *)(*(void **)(func_001C6788+0x98))+i*0x21C;
   if(*(s32*)q==-1){
    func_001A3D78(work,jtbl_004C006C+0xA184,q+0x1C,q+0x11C);
    j=0;k=0;p=(s32*)(D_010C91D8+0x78);
    do {j++; if(j<*(s32*)(func_001C6788+0xB4)){if(func_001A4174(work,(u8 *)(*(void **)(func_001C6788+0xA8))+k+0x10C)!=0){p++;k+=0x20C;continue;}*p=0;}}
    while(0);
   }
   i++; n++;
  }while(n<*(s32*)(func_001C6788+0x9C));
 } else p=(s32*)(func_001C6788+0xB4);
 limit=*(s32*)(func_001C6788+0xB4);
 for(i=0;i<limit;i++) if(*(s32*)(D_010C91D8+i*4)!=0 && *(s32*)(D_010C91D8+i*4+0x78)==0){j=*(s32*)D_010C92CC;*(s32*)D_010C92CC=j+1;*(s32*)(D_010C9160+j*4)=i;}
 for(i=0;i<limit;i++) if(*(s32*)(D_010C91D8+i*4+4)==0){j=*(s32*)D_010C92CC+*(s32*)D_010C92C8;*(s32*)D_010C92C8+=1;*(s32*)(D_010C9160+j*4)=i;}
 func_00127940();
}
