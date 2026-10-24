extern u8 jtbl_004C006C[];
s32 func_001AECF8(s32);
s32 func_001AEAB0(s32, s32);

s64 func_001ADCE8(s32 arg0, s32 arg1, s32 arg2) {
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
