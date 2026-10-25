extern s32 func_0024A660(s32,s32,s32,s32,s32,s32,s16,s32);
extern s32 func_00304CFC(s32); extern s32 func_00304F60(s32,s8*,s32);
extern u32 D_00483E58; extern s8 D_004844B4;
void func_0024A430(s8 *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4) {
 s32 n=0, chosen=-1, t=func_00304CFC(arg3), i; s8 *p;
 if(*arg0) for(p=arg0;*p;p+=0x50) if(!func_00304F60(arg3,p,t) && (*(s16*)(p+0x4a)^D_004844B4)==0)n++;
 if(n){
  u32 seed=D_00483E58*0x19660d+0x3c6ef35f;
  s32 rem=(s32)(seed>>16)%n; D_00483E58=seed;
  for(i=0,p=arg0;*p;p+=0x50,i++) if(!func_00304F60(arg3,p,t)&&*(s16*)(p+0x4a)==D_004844B4&&rem--<=0){chosen=i;break;}
  p=arg0+chosen*0x50;
  s32 a=*(s32*)(p+0x90), b=*(s32*)(p+0x40);
  if(a!=b)func_0024A660(arg2,arg1,arg4,b,a-b,*(s32*)(p+0x44),*(s16*)(p+0x48),*(s32*)(p+0x4c));
 }
}
