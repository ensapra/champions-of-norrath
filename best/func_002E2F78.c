s32 func_002D6140(s32);s32 func_002D70D0(void*);s32 func_002D8468(void*);extern s32 D_00446090[];extern u8 D_00447C00[];extern char D_0047BB68[];
s64 func_002E2F78(s32 a){if(!a){if(D_00446090[0]>0)func_002D70D0(D_0047BB68);while(func_002D8468(D_00447C00))func_002D6140(4000);return 0;}return func_002D8468(D_00447C00);}
s64 func_002FE0D0(s32,s32,s32,s32*);s64 func_002FE5E0(s32 a,s32 b,s32 c){s32 v;s64 r=func_002FE0D0(a,b,c,&v);if(r)r=v;return r;}
