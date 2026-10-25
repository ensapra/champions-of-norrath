extern char D_00483FA8[],D_00483FB8[],D_00483FC8[];
extern s32 func_003052D8(s32,s32); extern s32 func_003044FC(s32,char *);
extern void func_001729C8(s32,char *); extern void func_001752F8(s32,char *); extern void func_00166F98(s32);
void func_001646F8(void *arg0) {
 s32 count; s32 *p; s32 ext, value;
 if(arg0==NULL)return;
 count=*(u16*)arg0;
 if(count==0)return;
 p=(s32*)((char*)arg0+4);
 do {
  ext=func_003052D8(p[0],0x2e);
  value=p[1];
  p+=3;
  if(ext!=0) {
   ext++;
   if(func_003044FC(ext,D_00483FA8)==0) func_001729C8(value,D_00483FB8);
   else if(func_003044FC(ext,D_00483FB8)==0) func_001752F8(value,D_00483FC8);
   else if(func_003044FC(ext,D_00483FC8)==0) func_00166F98(value);
  }
  count--;
 } while(count);
}
