extern s32 D_00483F8C;
extern char D_006CB280[],D_006CB284[];
extern char D_00463400[],D_00463418[],D_00463428[],D_00463438[],D_00484020[];
extern void func_002D70D0(char *,...);
s32 func_001653F0(void) {
 s32 total=0,i=0,offset=0x10; char *p=D_006CB280+0x18;
 if (D_00483F8C>0) {
  do {
   if (*(s32*)(D_006CB284+offset)&1)
    func_002D70D0(D_00463400,D_006CB280+i,*(s32*)p>>10,*(s32*)(p-8));
   else
    func_002D70D0(D_00463418,D_006CB280+i,*(s32*)p>>10);
   if (*(s32*)(p+4)!=0) func_002D70D0(D_00463428,*(s32*)(p+4)>>10);
   else func_002D70D0(D_00484020,*(s32*)(p+4)>>10);
   total+=*(s32*)p; i++; p+=0x28; offset+=0x28;
  } while(i<D_00483F8C);
 }
 func_002D70D0(D_00463438,total>>10);
 return total;
}
