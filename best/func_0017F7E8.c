extern s32 D_001D2108;
extern u8 D_010EE080[], D_010EE120[], D_010EE180[], D_010EE1C0[];
extern u8 jtbl_004C006C[];
extern s32 WaitSema(s32);
extern s32 func_001B08B0(void*,s32,s32,s32,void*,s32,void*,s32,void*,s32,void*);
extern s32 func_001AF710(void*,s32);
extern void func_0017EBF8(void);
s32 func_0017F7E8(u8 a) {
 s32 limit, r; u8 *dst; s32 *table;
 if (D_001D2108 == -1) return -1;
 limit=*(s32 *)D_010EE080;
 if ((u32)a >= (u32)limit) return -11;
 D_010EE180[0]=a;
 WaitSema((s32)D_010EE180);
 r=func_001B08B0(D_010EE120,6,1,D_010EE180,16,D_010EE1C0,0,func_0017EBF8,0,0,0);
 if (r) { func_001AF710(jtbl_004C006C+0xC76C,r); return -2; }
 table=*(s32 **)(D_010EE080+4);
 dst=(u8 *)table+(s32)a*0x38;
 *(s32 *)(dst+0x34)=0; *(s32 *)(dst+0x10)=0; *(s32 *)(dst+0x14)=0; *(u16 *)(dst+0x20)=0;
 *(s32 *)(dst+0x2C)=0; *(s32 *)(dst+0x30)=0;
 return 0;
}
