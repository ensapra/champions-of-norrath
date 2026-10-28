extern s32 jtbl_004C006C[]; extern u8 D_0110B000[]; extern s32 D_0110B040[];
s32 func_001B08B0(void *,s32,s32,void *,s32,void *,s32,s32,s32);
u32 func_001B4A60(void) {
    volatile s32 pad[4];
    if (jtbl_004C006C[0x3F48/4] < 0) return 0;
    if (func_001B08B0(D_0110B000,6,0,0,0,D_0110B040,4,0,0) < 0) return 0xFFFFFFFF;
    return D_0110B040[0];
}
