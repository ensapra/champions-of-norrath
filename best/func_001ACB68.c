s32 _iEnableIntc(s32);s64 func_001AE3A0(s32 x){s32 r=_iEnableIntc(x);__sync_synchronize();return r;}
void *func_001A1CF0(s32,s32);void *func_001A2660(void*,s32,u32);
void *func_001AD0C0(s32 a,s32 b,s32 c){u32 n;u32 *p,*q;p=func_001A1CF0(a,b*c);if(p){n=(p[-1]&~3)-4;if(n<=36){q=p;if(n>=20){q[0]=q[1]=0;q+=2;if(n>=28){q[0]=q[1]=0;q+=2;if(n>=36){q[0]=q[1]=0;q+=2;}}}q[0]=q[1]=q[2]=0;}else func_001A2660(p,0,n);}return p;}
s32 func_001ACB40(void);s32 func_001714D8(s32);s64 func_001ACB68(void){return func_001714D8(func_001ACB40());}
s32 func_001AFB98(s32,s32,s32,s32,s32,s32,s32);s64 func_001AFCD0(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f){return func_001AFB98(a,0,b,c,d,e,f);}
