s32 D_00483F1C; s8 D_00483F3D; s8 D_00484B00; s32 D_00484F48;
extern char D_00332FD0[],D_0034B908[],D_00408600[],D_0042A3D8[],D_00464E18[],D_004662D8[];
s32 func_00135378(s32,s32); s32 func_001915C0(void*,s32); s32 func_001D0E70(s32,s32); s32 func_001D38B0(void); s32 func_001C7900(s8,s32,s32,void*);
void func_001AB1E8(void) {
 s32 i,index,offset,mask; char *entry,*object;
 i=0;
 if(D_00484F48>0){entry=D_0042A3D8;do{
  index=*(s32*)entry;
  object=*(char**)(D_00408600+index*0x5db0+0x5570);
  if(D_00483F1C==0&&func_001D0E70(index*0x5db0,D_00484F48)==0&&func_001D38B0()==0&&*(s16*)(object+0x4a4)==0&&D_00483F3D==0&&D_00484B00==0&&func_00135378(index,D_00484F48)==0&&func_001915C0(D_00464E18,D_00484F48)==0&&func_001915C0(D_004662D8,D_00484F48)==0&&*(s32*)(object+0x530)==0&&(*(s32*)(object+0xc)&0x400000)==0){
   offset=index*0x58;mask=*(s32*)(D_0034B908+index*4);object=D_00332FD0+offset;
   if((*(s32*)(object+8)&mask)&&(*(s32*)(object+0xc)&0x100))func_001C7900((s8)index,mask,offset,D_00332FD0);
  }
  i++;entry+=4;
 }while(i<D_00484F48);}
}
