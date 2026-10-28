typedef s32 (*CB)(s32,s32); extern volatile CB D_001D2090[3]; extern s32 D_001D209C[3];
s32 func_0017DB88(s32 a,s32 *ev) {
 if((ev[0]&0x100)&&D_001D2090[0]) D_001D2090[0](0,D_001D209C[0]);
 if((ev[0]&0x200)&&D_001D2090[1]) D_001D2090[1](1,D_001D209C[1]);
 if((ev[0]&0x400)&&D_001D2090[2]) D_001D2090[2](ev[1],D_001D209C[2]); return 0; }
