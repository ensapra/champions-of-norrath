extern u8 D_0047E1F1[];
extern s32 func_00304CFC(s8 *); extern s32 func_00304F60(s32,s8 *,s32);
s8 *func_00143EB8(s32 *list,s8 *text,s32 index) {
 s32 n; s32 ch; s32 out; s8 *p=text;
 if(list==0)return 0;
 ch=(s8)*p;
 while(ch) {
  out=ch;
  if(D_0047E1F1[ch]&1)out=ch+0x20;
  *p=(s8)out; p++; ch=(s8)*p;
 }
 n=func_00304CFC(text);
 while(*list) {
  if(func_00304F60(*list,text,n)==0) {p=(s8*)(*list+n); if(*p==0x3d){list++;index--;if(index==-1)return p+1;}}
  list++;
 }
 return 0;
}
