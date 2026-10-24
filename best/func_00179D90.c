extern u8 D_010EB640[],D_010EB6C0[],D_010ECC00[];extern s32 D_001D0480[],D_001D0484[];void func_0017A088(void);s32 PollSema(s32);s32 SignalSema(s32);s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,void*,s32);
void*func_0017A058(s32*a,s32*b){u8*p=D_010ECC00;*a=(s32)p;*b=(s32)D_001D0480;*(s32*)(p+60)=D_001D0484[0];return D_010EB640;}
f64 func_00179A00(s32);f64 func_00171040(f64,f64);f64 func_001798F0(f64,f64);
u64 func_00179D90(s64 a){f64 hi,lo;s32 low;hi=func_00171040(func_00171040(func_00179A00(a>>32),65536.0),65536.0);low=(s32)(a&0xffffffffULL);lo=func_00179A00(low);if(low<0)lo=func_001798F0(lo,4294967296.0);{union {f64 d;u64 i;} u;u.d=func_001798F0(hi,lo);return u.i;}}
s32 func_0017A220(s32,s32,void*,s32);
s32 func_0017A348(s32 a,s32 b,void*c){s32 r=func_0017A220(a,b,c,64);if(r==0)D_001D0480[0]=11;return r;}
s32 func_0017A380(s32 a){u8*p=D_010EB640;s32 r;if(*(s32*)(p+36)==0)return -100;if(PollSema(D_001D0484[0])<0)return -200;*(s32*)D_010EB6C0=a;r=func_001B08B0(p,3,1,D_010EB6C0,48,D_010ECC00,4,func_0017A088,0);if(r==0)D_001D0480[0]=3;else SignalSema(D_001D0484[0]);return r;}
