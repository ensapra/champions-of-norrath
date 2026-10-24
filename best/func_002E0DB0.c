extern s32 D_00446070[];
extern s32 D_00446074[];
extern s32 D_008E8100[];
extern s32 D_008E6B40[];

s32 *func_002E0DB0(u32 *arg0, u32 *arg1) {
    *arg0 = (u32)D_008E8100;
    *arg1 = (u32)D_00446070;
    D_008E8100[15] = D_00446074[0];
    return D_008E6B40;
}
