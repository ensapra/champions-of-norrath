extern u8 func_01000000[]; extern s32 func_001B9FD8[]; extern s32 func_001BCB38[]; s32 func_001523D0(s32); s32 func_00152520(s32); s32 func_0014B6F4(s32); s32 func_00104F30(s32); s32 func_00106E30(s32,s32); s32 func_001389A0(s32);
void func_00141FA0(void){s32 *p; s32 v;
#define C(o) p=(s32*)(func_01000000+(o)); if(*p){v=*p; if(func_001523D0(func_001BCB38[0xD74/4])==*p)func_00152520(*p);func_0014B6F4(*p);func_00104F30(*p);func_00106E30(0,*p);func_00106E30(1,*p);if(func_001B9FD8[0x16EC/4]==*p)func_001B9FD8[0x16EC/4]=0;func_001389A0(*p);*p=0;}
C(0xD445C);C(0xD4460);C(0xD4458);C(0xD4454);C(0xD4450);C(0xD444C);C(0xD4448);C(0xD4444);}
