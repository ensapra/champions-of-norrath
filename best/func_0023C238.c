typedef struct __attribute__((packed,aligned(4))) { u32 w[3]; } Copy12;
extern void func_001411F0(void *,void *,s32,s32); extern void func_00143830(void *); extern s32 func_00194390(void *,s32,s32); extern u8 D_0044F888[]; s32 D_004844A4;
void func_0023C238(void *o,Copy12 p,s32 unused,s32 a3,s32 a4,s32 a5){func_001411F0(o,&p,0,0); *(void **)((u8*)o+0x48)=D_0044F888; *(s32*)((u8*)o+0x4c)=0; *(s32*)((u8*)o+0xc)|=9; *(s32*)((u8*)o+0x60)=a5; func_00194390((u8*)o+0x4c,a3,a3); if(a4)func_00194390((u8*)o+0x50,a4,a4); *(s32*)((u8*)o+0x58)=D_004844A4+0x168;func_00143830(o);}
