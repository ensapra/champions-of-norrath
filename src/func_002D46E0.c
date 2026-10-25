extern s32 D_008DDAC0[]; extern u8 D_008DD880[]; s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_002D46E0(s32 a){D_008DDAC0[1]=a;D_008DDAC0[0]=13;if(func_002D8270(D_008DD880,1,0,D_008DDAC0,128,D_008DDAC0,128,0,0)<0)return 0;return D_008DDAC0[3];}
