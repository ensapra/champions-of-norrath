extern u8 D_0040DB88[];
s32 func_001B1D20(s32 arg0,s32 arg1) {
 s32 *p=(s32 *)(D_0040DB88+arg0*0x5DB0);
 s32 i=0;
 while (i<16) {
  s32 value=*p++;
  if(arg1==value) return i;
  i++;
 }
 return 0xFA0A1F00;
}
