extern s32 D_004C3EFC[];
s32 func_001AECF8(void);
s32 func_001AEC28(s32, s32);
s32 func_001ADD68(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        if (D_004C3EFC[0] == 0) {
            if (func_001AECF8() == 0) {
                goto err;
            }
            D_004C3EFC[0] = 1;
        }
        return func_001AEC28(arg1, arg2);
    }
err:
    return -1;
}

s32 func_001B5C80(void);
void func_001B5CD8(void);

void func_001ADBB0(void) {
    s32 r;
    r = func_001B5C80();
    *(vs32 *)0x1000F000 = 4;
    if (r) {
        func_001B5CD8();
    }
    while (!(*(vs32 *)0x1000F000 & 4)) {
    }
    r = func_001B5C80();
    *(vs32 *)0x1000F000 = 4;
    if (r) {
        func_001B5CD8();
    }
}
