extern u8 D_0047E1F1[];
char *func_00304E38(char *a) {
 char *p=a; s8 s=*a; u8 c=*a;
 if(s) {
 loop: {
  s32 ch=(s8)c;
  if(D_0047E1F1[ch]&1) *p=ch+32;
  p++;
  { s32 next=(u8)*p; c=next; if(next) goto loop; }
 }
 }
 return a;
}
