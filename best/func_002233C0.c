extern s32 func_00140F60(void *, void *, s32);
extern s32 func_00303EB8(void *, const char *, s32);
extern void func_00304240(void *, void *, s32, u8);
extern char D_00470CC8[];
extern char D_00485470[];
extern char D_004855E8[];
extern char D_004856F0[];
extern char D_004856F8[];
extern char D_00485700[];
extern char D_00485708[];
extern char D_00485710[];
extern char D_00485718[];
extern char D_00485720[];
extern char D_00485728[];
extern char D_00485730[];
extern char D_00485738[];
extern char D_00485740[];
extern char D_00485748[];
extern char D_00485750[];
extern char D_00485758[];
void func_002233C0(void *p) {
 s32 a,b;
 s64 value;
 char name[16];
 if (*(s32*)((char*)p+0x4c)>=0) func_00303EB8(name,D_004855E8,*(s32*)((char*)p+0x4c));
 func_00304240(&value,name,*(s32*)(D_00470CC8+8),*(u8*)(D_00470CC8+12));
 if(func_00140F60(p,&value,0)) {
  *(s32*)((char*)p+0x54)=1;
#define READ(off,key) func_00304240(&value,name,*(s32*)(key+4),0); *(s32*)((char*)p+off)=func_00140F60(p,&value,0)
  READ(0x144,D_004856F0); READ(0x148,D_004856F8);
  READ(0x14c,D_00485700); READ(0x150,D_00485708); READ(0x154,D_00485710);
  READ(0x158,D_00485718); READ(0x15c,D_00485720); READ(0x160,D_00485728);
#undef READ
  a=*(s32*)((char*)p+0x144); if(a>=301){a=300;*(s32*)((char*)p+0x144)=300;} if(a<0)*(s32*)((char*)p+0x144)=0;
  b=*(s32*)((char*)p+0x148); if(b>=301){b=300;*(s32*)((char*)p+0x148)=300;} if(b<0)*(s32*)((char*)p+0x148)=0;
 }
 func_00304240(&value,name,*(s32*)D_00485470,0);
 if(func_00140F60(p,&value,0)){
  *(s32*)((char*)p+0x58)=1;
#define READ2(off,key) func_00304240(&value,name,*(s32*)(key),0); *(s32*)((char*)p+off)=func_00140F60(p,&value,0)
  READ2(0x164,D_00485730); READ2(0x168,D_00485738); READ2(0x16c,D_00485740); READ2(0x170,D_00485748); READ2(0x174,D_00485750); READ2(0x178,D_00485758);
#undef READ2
 }
 *(s32*)((char*)p+0x17c)=100;
}
