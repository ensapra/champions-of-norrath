void func_00142EE8(void*,s32);
void func_0015C038(void*);
s32 func_00165B30(void*);
void *func_00166580(s32,void*);
void func_00192E18(void*);
void func_001D3E48(s32);
void func_001D3E88(void*);
void func_00268F58(s32,s32);
s32 func_00301FFC(void*,void*,s32);
void func_00303EB8(void*,void*,s32);
s32 func_003044FC(void*,s32);
extern char D_00474C98[],D_00474CA8[],D_00474CB8[],D_00485AB8[],D_00485AC0[];
extern s8 D_00484CA8,D_004859E0,D_00486CC6;
extern char D_007F8100[],D_00839850[],D_00839AD8[];
void *D_004844A0;
void func_00250988(s32 a0,s32 a1) {
 s32 i=0,off=0,total=0,k,flag,script,ok=0;
 s32 first,second;
 char *entry=D_00839850;
 char path[0x60];
 for(;;) {
  if(i>=26) {off=i*2;break;}
  if(!entry[0]) {off=i*2;break;}
  if(!func_003044FC(entry,a1)) {off=off+i; break;}
  total+=*(s32*)(entry+0x14);
  entry+=0x18;i++;off+=2;
 }
 flag=*(s32*)(D_00839850+((off+i)*8))!=0;
 func_00303EB8(path,D_00485AB8,a0);
 script=func_00165B30(path);
 if(script && func_00166580(script,D_00474C98) && *(s32*)((char*)func_00166580(script,D_00474C98)+8))
  func_001D3E48(*(s32*)((char*)func_00166580(script,D_00474C98)+4));
 else func_001D3E48(0);
 if(D_00486CC6){D_00486CC6=0;D_00484CA8=3;}else D_00484CA8=0;
 if(!D_004859E0)func_001D3E88(D_00474CA8);
 if(flag) {
  first=*(s32*)(D_00839AD8+total);
  func_00301FFC(D_007F8100,D_00839AD8+total+8,first);
  second=*(s32*)(D_00839AD8+total+first+8);
  func_00301FFC(D_007F8100+first,D_00839AD8+total+first+16,second);
  func_0015C038(D_00839AD8+total+first+second+16);
  func_00142EE8(D_007F8100,0);
  func_00192E18(D_007F8100+first);
 }
 if(script) {
  void *ctx=*(void**)D_004844A0;
  void *obj=func_00166580(script,D_00474CB8);
  if(*(s32*)((char*)ctx+0x70))func_00268F58(*(s32*)((char*)obj+4),flag);
  else func_00142EE8((void*)*(s32*)((char*)obj+4),flag);
 }
 if(!D_004859E0)func_001D3E88(D_00485AC0);
}
