extern void func_001411F0(void *, void *, s32, s32);
extern void func_00143830(void *, s32, s32, s32, s32);
extern void ovl_ntgui2_func_0013D230(void *, void *, s32, s32, s32, s32, s32);
extern char D_0044A9C0[];
extern f32 D_00481980;
void func_002301A8(void *arg0, void *arg1, s32 arg2) {
    u8 in[12]; u8 tmp[12]; u8 *p=(u8*)arg0+0x4C;
    __builtin_memcpy(in,arg1,12); func_001411F0(arg0,in,0,0); __builtin_memcpy(tmp,in,12);
    *(void **)((u8*)arg0+0x48)=D_0044A9C0; __builtin_memcpy((u8*)arg0+0x7C,tmp,12); p[9]=0;
    *(f32*)(p+0x24)=240.0f; *(f32*)(p+0x28)=D_00481980; *(f32*)(p+0x2C)=1.0f; *(f32*)(p+0x1C)=240.0f; *(f32*)(p+0x20)=D_00481980;
    *(s16*)(p+0x12)=200; *(s16*)(p+0x14)=150; *(s16*)(p+0x16)=50; *(s16*)(p+0xA)=200; *(s16*)(p+0xC)=150; *(s16*)(p+0xE)=50; *(s16*)(p+0x10)=0; *(s16*)(p+0x18)=0; p[8]=0;
    ovl_ntgui2_func_0013D230(p,tmp,200,150,50,0,0); *(s32*)((u8*)arg0+0xC)|=1; *((u8*)arg0+0x55)=1; *((s8*)arg0+0x28)=-16; *(s32*)((u8*)arg0+0x90)=arg2;
    *(s16*)((u8*)arg0+0x5E)=0x33; *(s16*)((u8*)arg0+0x60)=0x27; *(s16*)((u8*)arg0+0x62)=0x12; *(s32*)((u8*)arg0+0x88)=0; *((u8*)arg0+0x8C)=0; *((u8*)arg0+0x8D)=0; *(s16*)((u8*)arg0+0x64)=0; func_00143830(arg0,-16,0x12,0x33,0x27);
}
