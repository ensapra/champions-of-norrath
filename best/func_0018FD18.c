s32 func_001B5C80(void); void func_001B5CD8(void);
u32 func_0018FD18(volatile u32 *d){s64 intr=func_001B5C80();u32 en=*(volatile u32*)0x1000F520;u32 ctrl,old;if(!(en&0x10000))*(volatile u32*)0x1000F590=en|0x10000;ctrl=*(volatile u32*)0x1000E000;old=*d;*d=old&~0x100;*(volatile u32*)0x1000F590=en;if(intr)func_001B5CD8();return old;}
