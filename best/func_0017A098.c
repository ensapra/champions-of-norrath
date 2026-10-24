extern u8 func_001CE218[],func_01000000[];s32 iSignalSema(s32);s32 PollSema(s32);s32 SignalSema(s32);s32 DeleteSema(s32);
void func_0017A088(void){iSignalSema(*(s32*)(func_001CE218+0x2270));}
s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,void*,s32);
s32 func_0017A098(s32 a){u8*p=func_01000000+0xEB640;u8*q=func_01000000+0xEB6C0;s32 r;if(*(s32*)(p+36)==0)return -100;if(PollSema(*(s32*)(func_001CE218+0x226C))<0)return -200;*(s32*)(q+20)=a;r=func_001B08B0(p,20,1,q,48,func_01000000+0xECC00,4,func_0017A088,0);if(r==0)*(s32*)(func_001CE218+0x2268)=20;else SignalSema(*(s32*)(func_001CE218+0x226C));return r;}
void*func_0017A058(void**a,void**b){u8*p=func_01000000+0xECC00;*a=p;*b=func_001CE218+0x2268;*(s32*)(p+60)=*(s32*)(func_001CE218+0x226C);return func_01000000+0xEB640;}
s32 func_0017A008(void){if(*(s32*)(func_001CE218+0x226C)>=0){DeleteSema(*(s32*)(func_001CE218+0x226C));*(s32*)(func_001CE218+0x226C)=-1;DeleteSema(*(s32*)(func_001CE218+0x2270));}return 1;}
