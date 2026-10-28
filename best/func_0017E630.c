extern volatile s32 D_001D2108[]; extern u8 D_004CC7B0[],D_010EE120[],D_010EE180[],D_010EE1C0[]; extern s32 D_010EE080[];
void func_0017EBF8(void); s32 WaitSema(s32); s32 func_001B08B0(void *,s32,s32,void *,s32,void *,s32,void (*)(void),s32); void func_001AF710(u8 *,s32);
s32 func_0017E630(s32 a){volatile s32 r;if(D_001D2108[0]==-1)return -1;WaitSema(D_001D2108[0]);r=func_001B08B0(D_010EE120,1,1,D_010EE180,16,D_010EE1C0,0x90,func_0017EBF8,0);if(r){func_001AF710(D_004CC7B0,r);return -2;}D_010EE080[0x90/4]=1;D_010EE080[0x98/4]=a;return 0;}
