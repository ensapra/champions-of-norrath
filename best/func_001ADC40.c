s32 *func_001B9C00(void);
s32 func_001ADDE0(void) {
    *func_001B9C00() = 5;
    return -1;
}

extern u8 jtbl_004C006C[];
s32 func_001AECF8(s32);
s32 func_001AEC28(s32, s32);
s32 func_001AEAB0(s32, s32);
s32 func_001ADD68(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        if (*(s32 *)(jtbl_004C006C + 0x3E90) == 0) {
            if (func_001AECF8(arg1) == 0) {
                goto err;
            }
            *(s32 *)(jtbl_004C006C + 0x3E90) = 1;
        }
        return func_001AEC28(arg1, arg2);
    }
err:
    return -1;
}

s32 func_001ADCE8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 1 || arg0 == 2) {
        if (*(s32 *)(jtbl_004C006C + 0x3E90) == 0) {
            if (func_001AECF8(arg1) == 0) {
                goto err;
            }
            *(s32 *)(jtbl_004C006C + 0x3E90) = 1;
        }
        return func_001AEAB0(arg1, arg2);
    }
err:
    return -1;
}

void SetVSyncFlag(s32 *, u64 *);
s32 func_001B5C80(void);
void func_001B5CD8(void);
u64 func_001ADC40(void) {
    s32 flag;
    u64 val;
    flag = 0;
    SetVSyncFlag(&flag, &val);
    if (func_001B5C80()) { *(vs32 *)0x1000F000 = 4; func_001B5CD8(); }
    else *(vs32 *)0x1000F000 = 4;
    while (!(*(vs32 *)0x1000F000 & 4) && flag == 0) { }
    *(vs32 *)0x1000F000 = 4;
    if (func_001B5C80()) func_001B5CD8();
    return val;
}
