extern u8 func_001C77F0[];
void func_00155688(void){u8*p=func_001C77F0;p=*(u8**)(p+4);((void(*)(void))p)();}
s32 func_00154654(s32);
s32 func_001556E0(void*p,s32 n){if(n<0||n>=*(s32*)((u8*)p+0x914))return 0;return func_00154654(*(s32*)((u8*)p+n*4+0x99c));}
s32 D_0047FFB4;
s32 func_0014B41C(s32,s32);
void func_00155104(void*,s32,s32);void func_0015BF84(s32,s32);s32 func_0015BFDC(s32);
void func_001555E0(void*p,s32 a){u8*q=func_001C77F0;q=*(u8**)q;((void(*)(void))q)();if(func_0014B41C(a,D_0047FFB4)){if(*(s32*)((u8*)p+0x874)){func_0015BF84(a,0);if(func_0015BFDC(a))func_00155104(p,a,0);}else func_0015BF84(a,1);}}
void func_0015175C(void*,s32);
void func_00155744(void*p,s32 unused,s32 x,s32 y){volatile s32 a[2];a[0]=x;a[1]=y;func_0015175C((u8*)p+0x910,1);*(s32*)((u8*)p+0x918)=0;*(s32*)((u8*)p+0x91c)=0;}
