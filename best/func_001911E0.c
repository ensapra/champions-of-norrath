/* identical to func_002D47B0 (matched), with its names changed by decompdecomp */
extern u8 D_008DD880[];extern s32 D_008DDAC0[];
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_002D6778(s32 a){while(*(volatile u32*)0x1000F130 & 0x8000){}*(volatile u8*)0x1000F180=a;return a;}
void func_002D4818(char *fmt,...){char *ap=(char*)__builtin_next_arg(fmt)-(8-__builtin_args_info(0))*8;}
s32 func_001911E0(s32 a){D_008DDAC0[1]=a;D_008DDAC0[0]=20;if(func_002D8270(D_008DD880,1,0,D_008DDAC0,128,D_008DDAC0,128,0,0)<0)return 0;return D_008DDAC0[2];}
s32 func_002D4748(void){D_008DDAC0[0]=18;if(func_002D8270(D_008DD880,1,0,D_008DDAC0,128,D_008DDAC0,128,0,0)<0)return 0;return D_008DDAC0[3];}
