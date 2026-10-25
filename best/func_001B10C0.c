s32 SignalSema(s32); s32 WaitSema(s32); void func_001B0FD8(void);extern u8 jtbl_004C006C[];extern u8 D_0110AD00[];
void *func_001B10C0(u32 i){void *p;func_001B0FD8();WaitSema(*(s32*)(jtbl_004C006C+0x3F3C));if(i>=32){SignalSema(*(s32*)(jtbl_004C006C+0x3F3C));return 0;}i=(u32)(D_0110AD00+i*16);SignalSema(*(s32*)(jtbl_004C006C+0x3F3C));return (void*)i;}
