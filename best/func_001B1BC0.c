extern char jtbl_004C006C[],D_01109800[],D_01109848[]; s32 func_001B10C0(void); void func_001B1538(s32),func_001B1568(void); s32 CreateSema(void*),DeleteSema(s32),WaitSema(s32); s32 func_001B08B0(void*,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
s32 func_001B1BC0(void){s32 *p=(s32*)func_001B10C0(); s32 sema,rc; s32 cfg[8]; s32 work[12]; s32 *table;
func_001B1538(1); if(!*(s32*)(jtbl_004C006C+0x3f30)){func_001B1568();return -1;}
if(!p||!p[1]){func_001B1568();return -9;}
*(s32*)(D_01109800+12)=p[0]; *(s32*)(D_01109800+16)=((char*)p-(D_01109848+0x14b8))>>4;
cfg[0]=1;cfg[1]=0;cfg[2]=0;cfg[3]=0;cfg[4]=0;
sema=CreateSema(&cfg[0]); *(s32*)D_01109800=sema;
*(s32*)(D_01109800+4)= (s32)work; *(s32*)(D_01109800+8)=4;
rc=func_001B08B0(D_01109848+0x16b8,1,0,0,0,0,0,0,0,0,0,0);
if(rc>=0)p[1]=0;
if(rc<0){DeleteSema(sema);func_001B1568();return -11;}
table=(s32*)(D_01109848+0xbf8); func_001B1568(); work[0]=*(s32*)((char*)table+0x20000000);
if(!work[0]){DeleteSema(sema);return -11;} WaitSema(sema);DeleteSema(sema);return work[0]<0?0:work[0];}
