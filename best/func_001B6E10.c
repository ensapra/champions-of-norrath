extern s32 func_001B5C80(void); extern void func_001B5CD8(void); extern u8 jtbl_004C006C[];
u64 func_001B6E10(void) {
 s32 lock=func_001B5C80();
 volatile u32 *t=(volatile u32 *)0x10001000;
 u32 low=t[0], c=t[4]; u64 high=*(u64 *)(jtbl_004C006C+0x4ee4);
 if(c&0x800) { low=t[0]; high++; }
 u32 shift=c&3;
 u64 r=low|((high+0)<<16);
 r <<= (shift ? (2<<shift) : 0);
 if(lock)func_001B5CD8();
 return r;
}
