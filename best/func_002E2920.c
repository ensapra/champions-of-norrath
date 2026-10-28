extern s32 D_004460A4[];
extern s32 D_004460C0[];
extern void func_002E28C8(void);
s32 func_002DD640(void);
void func_002DD698(void);
void func_002D7490(u32, void*, s32);

s32 func_002E2920(void) {
    s32 temp_16;
    D_004460A4[0] = 1;
    temp_16 = func_002DD640();
    func_002D7490(0x80000012, (void*)func_002E28C8, 0);
    if (temp_16 != 0) {
        func_002DD698();
    }
    D_004460A4[0] = 0;
    D_004460C0[0] = 1;
    return 1;
}
