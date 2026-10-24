#define F(p,t,o) (*(t*)((char*)(p)+(o)))
s32*func_001B9C00(void);s32 func_001ADDE0(void){*func_001B9C00()=5;return -1;}
s64 func_001AD230(s32,s16,s32,s32);s64 func_001AD060(s32,s16,s32,s32);
s64 func_001ABBA0(void*a,s32 b,s32 c){s64 r=func_001AD230(F(a,s32,0x54),F(a,s16,14),b,c);s32 x=(r<<32)>>32;s32 f=F(a,u16,12);if(r==-1)f&=0xEFFF;else{F(a,s32,0x50)=x;f|=0x1000;}F(a,u16,12)=f;return r;}
s32 func_001ABB20(void*a,s32 b,s32 c){if(F(a,u16,12)&0x100)func_001AD230(F(a,s32,0x54),F(a,s16,14),0,2);{s32 f=F(a,u16,12);F(a,u16,12)=f&0xEFFF;}return(s32)func_001AD060(F(a,s32,0x54),F(a,s16,14),b,c);}
u32 func_001ABA78(s64 a){s32 lo=(s32)a;s32 hi=(s32)(a>>32);u32 z=(u32)(lo|-lo)>>31;return (u32)(0x7ff00000-((hi&0x7fffffff)|z))>>31;}
