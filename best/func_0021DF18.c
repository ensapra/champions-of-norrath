extern s32 func_002FF990(char*);
extern void func_00303EB8(char*,char*,s32);
extern s32 func_00304CFC(char*);
extern s32 func_00304F60(s32,char*,s32);
extern char D_00470C90[],D_00470CA8[],D_00485468[],D_0047E1F1[];
s32 func_0021DF18(s32 *list,s32 n) {
 char buf[0x70]; s32 i,r; char *p,*q; u8 c;
 func_00303EB8(buf,D_00470C90,n);
 if(list) {
   p=buf; while(*p) { c=*p; if(D_0047E1F1[(s8)c]&1) *p=(s8)c+0x20; p++; }
   r=func_00304CFC(buf);
   for(i=0;list[i];i++) if(!func_00304F60(list[i],buf,r) && *(char*)(list[i]+r)=='=') return func_002FF990((char*)(list[i]+r+1));
 }
 func_00303EB8(buf,D_00470CA8,n);
 if(list) {
   p=buf; while(*p) { c=*p; if(D_0047E1F1[(s8)c]&1) *p=(s8)c+0x20; p++; }
   r=func_00304CFC(buf);
   for(i=0;list[i];i++) if(!func_00304F60(list[i],buf,r) && *(char*)(list[i]+r)=='=') return func_002FF990((char*)(list[i]+r+1));
 }
 func_00303EB8(buf,D_00485468,n);
 if(list) {
   p=buf; while(*p) { c=*p; if(D_0047E1F1[(s8)c]&1) *p=(s8)c+0x20; p++; }
   r=func_00304CFC(buf);
   for(i=0;list[i];i++) if(!func_00304F60(list[i],buf,r) && *(char*)(list[i]+r)=='=') return func_002FF990((char*)(list[i]+r+1));
 }
 return 0;
}
