extern s32 D_001C4D34[];
extern s32 D_001C4D38[];
extern s32 D_001C6840[];
extern s32 D_001C686C[];
extern u8 func_00128560[];
extern u8 func_0013F460[];
extern u8 func_0013F488[];
extern u8 func_0013FA70[];
void func_0010B718(void);
void func_00118140(void *, s32, void *, void *, void *, s32);
void func_00118278(s32, void *);
s32 func_001404D0(void);

s32 func_00128BF0(void) {
    s32 buf[8];
    s32 v;
    if (func_001404D0() == 0) {
        if (D_001C686C[0] < 10) {
            if (D_001C686C[0] > 0) {
                D_001C4D38[0] = -1;
                D_001C4D34[0] = -1;
                func_00118140(buf, 1, func_0013F460, func_0013F488, func_0013FA70, -1);
                buf[2] = (s32)func_00128560;
                func_00118278(0, buf);
            }
        }
        v = D_001C6840[0];
        if (v >= 0) {
            if (v < 3) {
            } else if (v == 3)
                func_0010B718();
        }
        D_001C686C[0] = -1;
        return 0;
    }
    return 0;
}
