void *func_0011B9A8(s32);s32 func_0014C5A8(void);s32 func_0014C670(void*,s32);
s32 func_0014C6DC(void*,void*,s32,s32,s32);s32 func_0014C778(void*,void*,s32,s32,s32);s32 func_0014C7F8(void*,void*,s32,s32,s32);
s32 func_001A4738(void*,void*,s32);s32 func_001AF710(void*);
extern u8 jtbl_004C006C[],jtbl_00503023[];
void *func_0014B5E4(void*a,s32 b,void*c,s32 d,s32 e){void*p,*name,*dest;func_0014C5A8();p=func_0011B9A8(((u32)(*(s32*)((u8*)a+68)+15)>>4)<<4);name=c;if(!p){func_001AF710(jtbl_004C006C+0xB2BC);return 0;}*(void* volatile*)((u8*)p+76)=a;dest=(u8*)p+88;if(!name)name=jtbl_00503023+0x4AF5;func_001A4738(dest,name,63);*((u8*)p+151)=0;func_0014C6DC(a,p,b,d,e);func_0014C778(a,p,b,d,e);func_0014C670(p,b);func_0014C7F8(a,p,b,d,e);return p;}
