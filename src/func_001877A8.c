extern u8 D_004CE108[];
extern u8 D_004CE128[];
void func_001A1568(void *, s32, void *);

void func_001877A8(s32 arg0, s32 arg1, u8 arg2) {
    if (arg0 == 0) {
        func_001A1568(D_004CE108, 0x12A, D_004CE128);
    }
    *(u8 *)(arg1 + arg0 + 0x2A0) = arg2;
}
