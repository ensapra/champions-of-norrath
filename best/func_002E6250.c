s32 func_002E6000(s32,s32,s32*,s32);
s32 func_002E6040(s32,s32,s32*);
s32 func_002E6250(s32 a0,s32 a1,s32 *a2,s32 a3) {
 s32 r;
 if (a2 == 0) return -0x21C;
 if (func_002E6040(a0,a1,a2) < 0) {
  r=func_002E6000(a0,a1,a2,a3);
  if (r < 0) return r;
 }
 return 0;
}
