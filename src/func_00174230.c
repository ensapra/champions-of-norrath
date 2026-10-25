s16 *func_0018D7A8();
void func_00172F48(void *, s16, s16, s16, s32, s32);
void func_0018D8D0(void *, s16, s16, s16, s32, s32);

void func_00174230(s64 *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4) {
    if (func_0018D7A8()[1] >= 0x1A) {
        func_00172F48(arg0, arg2, arg3, arg4, 0, 0);
    } else {
        func_0018D8D0(arg0, arg2, arg3, arg4, 0, 0);
    }
    arg0[2] = ((s64)(arg2 & 0xF) << 0xF) | ((s64)(((arg3 + 0x3F) >> 6) & 0x3F) << 9) | (arg1 & 0x1FF);
}
