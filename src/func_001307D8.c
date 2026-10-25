extern char func_001C4B18[],func_001B9FD8[],func_001BAC84[],func_001BB6C4[],func_01000000[];
void func_00118140(void *,s32,void*,void*,void*); void func_00118160(void*);
s32 func_0011BA18(s32); void func_00114948(s32,s32,s32,s32,void*,s32); s32 func_00140050(s32);
void func_0012F910(void); void func_00130738(void); void func_00140060(void); void func_001400F8(void); void func_00140168(void);
void func_001307D8(s32 a) {
 u8 buf[0x18]; s32 *p;
 if(a<0)return;
 switch(a) {
 case 0: case 1:
  p=(s32*)(func_001C4B18+0x388);
  func_00114948(4,0x1f4,0xfa,func_0011BA18(*p+0x3f),0,*(s32*)func_001BB6C4);
  func_00140050(*p-1);
  func_00118140(buf,1,func_00140060,func_001400F8,func_00140168);
  *(s32*)(buf+8)=(s32)func_00130738;
  func_00118160(buf);
  break;
 case 2:
  if(((*(s32*)func_001BAC84)&6)==6)
   func_00114948(0,0x1f4,0xfa,func_0011BA18(0x46),func_0012F910,*(s32*)func_001BB6C4);
  else if(*(s32*)(func_01000000+0xcd474)==0)
   func_00114948(0,0x1f4,0xfa,func_0011BA18(0x44),func_0012F910,*(s32*)func_001BB6C4);
  else
   func_00114948(0,0x1f4,0xfa,func_0011BA18(0x45),func_0012F910,*(s32*)func_001BB6C4);
  break;
 }
}
