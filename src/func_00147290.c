extern void func_0010A0D0(s32);
extern void func_0011D9E0(void);
extern void func_0011DA20(s32, s32);
extern s32 func_0013B698(void *);
extern s32 D_001C688C[];
extern u8 D_004CB208[];
extern u8 D_004CB220[];

void func_00147290(s32 a) {
    if (D_001C688C[0] != 0) {
        switch (a) {
        case 0:
        case 1:
            if (func_0013B698(D_004CB208) != 0) {
                if (func_0013B698(D_004CB220) != 0) {
                    func_0011DA20(3, 0);
                    return;
                }
                func_0011DA20(3, 0);
                return;
            }
            func_0011DA20(3, 0);
            return;
        case 2:
            func_0010A0D0(0);
            return;
        }
        return;
    }
    func_0011D9E0();
}
