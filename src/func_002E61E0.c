s32 func_002E6020(s32,s32,s32*,s32);
s32 func_002E6120(s32,s32,s32,s32);
s32 func_002E61E0(s32 a0, s32 a1, s32 *a2, s32 a3, s32 a4){ s32 r; r = func_002E6020(a0,a1,a2,a3); if (r < 0) return r; r = func_002E6120(a0,a1,*a2,a4); if (r < 0) return r; return 0; }
