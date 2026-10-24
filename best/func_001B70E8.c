s32 func_001B5C80(void);s32 func_001B5CD8(void);s32 func_001B6F48(s32);s32 func_001B7038(s32,s32);
s32 func_001B6FE8(s32 a){s32 x=func_001B5C80();s32 r=func_001B6F48(a);if(x)func_001B5CD8();return r;}
s32 func_001B7088(s32 a,s32 b){s32 x=func_001B5C80();s32 r=func_001B7038(a,b);if(x)func_001B5CD8();return r;}
extern u8 jtbl_004C006C[];
s64 func_001B6DC0(void);s32 func_001B6A60(void*);s32 func_001B68D0(s64);
s32 func_001B70E8(u32 a){u8*p=(u8*)((a>>10)<<6);s64 t;s32 f;if((s32)a<0 || (a&1023)!=*(s32*)(p+8))return 0x80008002;if(*(u32*)(jtbl_004C006C+0x4F00)==a)return 0x80000010;if(*(s32*)(p+12)&1)return 1;t=func_001B6DC0();*(s64*)(p+16)=t;f=*(s32*)(p+12)|1;*(s32*)(p+12)=f;if(f&2){func_001B6A60(p);func_001B68D0(t);}return 0;}
u64 func_001B6E10(void){s32 lock=func_001B5C80();u64 low=*(volatile u32*)0x10001000;u32 c=*(volatile u32*)0x10001010;u64 hi=*(u64*)(jtbl_004C006C+0x4EE4);u64 shift;if(c&0x800){low=*(volatile u32*)0x10001000;hi++;}c&=3;shift=c?2:0;low=(low|(hi<<16))<<(shift<<c);if(lock)func_001B5CD8();return low;}
