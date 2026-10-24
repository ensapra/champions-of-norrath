extern s32 D_008DDC40[],D_008DDB90[],D_008DDAC0[],D_008DD880[];typedef struct {s32 x[7];} Slot;extern Slot D_008DD8D0[][4];extern char D_0047B5E8[];
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);void func_002D4818(char*);s32 func_002D43E8(s32,s32,s32);
s32 func_002D4B60(s32 a){s32 r;D_008DDC40[0]=a;if(func_002D8270(D_008DDB90,1,0,D_008DDC40,128,D_008DDC40,128,0,0)<0){func_002D4818(D_0047B5E8);r=0;}else r=D_008DDC40[1];return r;}
s32 func_002D46E0(s32 a){s32 r;D_008DDAC0[1]=a;D_008DDAC0[0]=13;if(func_002D8270(D_008DD880,1,0,D_008DDAC0,128,D_008DDAC0,128,0,0)<0)r=0;else r=D_008DDAC0[3];return r;}
s32 func_002D4678(void){s32 r;D_008DDAC0[0]=12;if(func_002D8270(D_008DD880,1,0,D_008DDAC0,128,D_008DDAC0,128,0,0)<0)r=0;else r=D_008DDAC0[3];return r;}
s32 func_002D4550(s32 a,s32 b){s32 r;if(D_008DD8D0[a][b].x[4]==0)r=0;else r=func_002D43E8(a,b,0);return r;}
