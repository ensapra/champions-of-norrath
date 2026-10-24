/* identical to func_00120830 (matched), with its names changed by decompdecomp */
extern u8 func_001C6788[],func_001C5078[],func_001C44F8[],func_01000000[];
s32 func_001404D0();void func_0010B718();void func_0013DE28(void*);void func_0011DA20(s32,s32);
s32 func_00138180(void){if(func_001404D0())return 0;else {switch(*(s32*)(func_001C6788+184)){case 0:case 1:case 2:break;case 3:func_0010B718();break;}*(s32*)(func_001C6788+228)=-1;}return 0;}
void func_00120800(void){func_0013DE28(func_001C5078+1160);func_0011DA20(1,10);}
void func_00118140(void*,s32,s32,void*,s32);s32 func_00118160(void*);void func_00120658(void);
void func_00120768(void){u8 stack[32];func_00118140(stack,0,0,func_00138180,0);*(s32*)(func_01000000+0xC6E38)=func_00118160(stack);*(s32*)(func_001C44F8+52)=0;func_00120658();func_0010B718();}
void func_0014D240(s32);void func_0014D270(s32);
void func_00120620(s32 a){if(a){func_0014D240(*(s32*)(func_01000000+0xC5190));return;}func_0014D270(*(s32*)(func_01000000+0xC5190));}
