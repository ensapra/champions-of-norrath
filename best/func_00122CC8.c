extern s32 func_001BCB38[],func_001B9FD8[];
extern u8 D_004C9C40[],D_010C7660[];
extern s32 D_010C7628[],D_010C7630[],D_010C7638[],D_010C7640[],D_010C7648[],D_010C7650[];
void func_0013B5F8(void*,void*);void func_0010CC90(s32);s32 func_0010A5B8(s32);void func_0010A4D0(s32,s32,s32);s32 func_001523D0(s32);void func_00152520(void);void func_0014B6F4(s32);void func_00104F30(s32);void func_00106E30(s32,s32);void func_001389A0(s32);
#define G868 (*(s32*)((u8*)func_001BCB38+0xD30))
#define G86C (*(s32*)((u8*)func_001BCB38+0xD34))
#define G8AC (*(s32*)((u8*)func_001BCB38+0xD74))
#define G8B8 (*(s32*)((u8*)func_001BCB38+0xD80))
#define G6C4 (*(s32*)((u8*)func_001B9FD8+0x16EC))
static inline void free1(s32*p){if(*p){if(func_001523D0(G8AC)==*p)func_00152520();func_0014B6F4(*p);func_00104F30(*p);func_00106E30(0,*p);func_00106E30(1,*p);if(G6C4==*p)G6C4=0;func_001389A0(*p);*p=0;}}
s32 func_00122CC8(u8*a){s32 i;switch(*(s32*)(a+16)){case 1:func_0013B5F8(D_004C9C40,D_010C7660);G86C=G868;G868=0;func_0010CC90(0);return 0;case 2:if(func_0010A5B8(G8B8)&&G8B8)func_0010A4D0(G8B8,0,0);for(i=0;i<2;i++)free1(&D_010C7630[i]);return 0;case 3:for(i=0;i<1;i++){free1(&D_010C7640[i]);free1(&D_010C7638[i]);free1(&D_010C7648[i]);free1(&D_010C7650[i]);}return 0;case 4:return 0;case 5:free1(&D_010C7628[0]);return 1;}return 0;}
