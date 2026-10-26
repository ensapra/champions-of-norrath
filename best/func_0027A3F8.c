extern u8 D_00437038[];
extern char D_00438910[];
extern char D_00485F58[], D_00485F60[];
extern s8 D_008D5B38[], D_008D5B58[];
s32 func_00140F60(void*,void*,s32);
s32 func_00143A80(void*,void*,s32);
s32 func_003044FC(s32,s32);
s32 func_0027A3F8(void *arg0) {
 s32 i=0, mask=-1;
 s32 n=func_00143A80(arg0,D_00485F58,0);
 for (;;) {
  if (i>=10) break;
  u8 *entry=D_00437038+i*0x27c;
  if (func_003044FC(*(s32*)entry,n)==0) break;
  i++;
 }
 s8 x,y;
 if(func_00143A80(arg0,D_00485F60,0)) {
  s32 idx=func_00140F60(arg0,D_00485F60,0);
  x=*(s8*)(D_00438910+idx*0x29+0x21);
  idx=func_00140F60(arg0,D_00485F60,0);
  y=*(s8*)(D_00438910+idx*0x29+0x24);
 } else { x=D_008D5B38[i]; y=D_008D5B58[i]; }
 if(x!=-1) { u64 *p=*(u64**)(D_00437038+(i*0x9f+x)*4+0x1c); if(p) mask &= ~*p; }
 if(y!=-1) { u64 *p=*(u64**)(D_00437038+(i*0x9f+y)*4+0x3c); if(p) mask &= ~*p; }
 u8 *e=D_00437038+i*0x27c;
 u64 *p=*(u64**)(e+0x5c); if(p) mask &= ~*p;
 p=*(u64**)(e+0x64); if(p) mask &= ~*p;
 p=*(u64**)(e+0x60); if(p) mask &= ~*p;
 p=*(u64**)(e+0x68); if(p) mask &= ~*p;
 return mask;
}
