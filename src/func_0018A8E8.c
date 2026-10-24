extern s32 D_00362CEC[],D_00362CF0[];
void func_0018A8E8(s32 a,s32 b){*D_00362CEC=a;*D_00362CF0=b;}
s32 func_0018AB38(void *);
s32 func_0018A900(s32 x){s32 n=0;while(func_0018AB38(&x))n++;return n;}
s32 func_0018A9E0(s32 a){u32 x=a&65535;u32 l=x&127;u32 flag=x>>15;u32 h=(x>>8)&127;if(h-33>=94 || l<33 || l>=127)return 0;if(flag){if(h==34||h==38||h==39||h-41<3||h-48<62)return 0;}return 1;}
s32 func_0018AA70(u32 a){if(a>0x10ffff)return 0;return (u32)(a-0xd800)>2047;}
