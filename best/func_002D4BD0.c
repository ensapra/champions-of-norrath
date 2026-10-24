extern s32 D_008DDC40[32];
extern u8 D_008DDB40[],D_008DDBB8[],D_008DDBE0[];
extern char D_0047B5A8[],D_0047B610[],D_0047B638[];
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
void func_002D4818(char*);
s32 func_002D4A80(s32 a){s32 *p=D_008DDC40;p[0]=a;if(func_002D8270(D_008DDB40,1,0,p,128,p,128,0,0)<0){func_002D4818(D_0047B5A8);return 0;}return p[1];}
s32 func_002D4BD0(s32 a,s32 b){s32 *p=D_008DDC40;p[0]=a;p[1]=b;if(func_002D8270(D_008DDBB8,1,0,p,128,p,128,0,0)<0){func_002D4818(D_0047B610);return 0;}return p[2];}
s32 func_002D4C40(void){s32 *p=D_008DDC40;s32 r;if(func_002D8270(D_008DDBE0,1,0,p,128,p,128,0,0)>=0)r=p[0];else {func_002D4818(D_0047B638);r=0;}return r;}
