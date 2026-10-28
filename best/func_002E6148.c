extern s32 func_002E6040(); extern s32 func_002E6020(s32,s32,s32*,s32); extern s32 func_002E6120(s32,s32,s32,s32);
s32 func_002E6148(s32 a,s32 b,s32 *p,s32 d,s32 e){s32 r;if(func_002E6040(a,b,p,d,e)<0){r=func_002E6020(a,b,p,d);if(r<0)return r;} r=func_002E6120(a,b,*p,e);return r<0?r:0;}
