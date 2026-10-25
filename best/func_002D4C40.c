extern s32 D_008DDC40; extern s8 D_008DDBE0[96]; extern char D_0047B638[]; s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32); void func_002D4818(char*);
s32 func_002D4C40(void) { volatile s32 pad[3]; s32 ret; pad[0]=0; if(func_002D8270(&D_008DDBE0,1,0,&D_008DDC40,0x80,&D_008DDC40,0x80,0,0)>=0) ret=D_008DDC40; else {func_002D4818(D_0047B638);ret=0;} return ret; }
