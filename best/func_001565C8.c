extern void func_001C8098();
void func_0011B9E0(s32);
s32 func_0016FA70(s32);

s32 func_001565C8(char *arg0, char *arg1, char *arg2) {
    s32 temp_3;
    s32 r;
    void *p = (char *)func_001C8098;

    p = *(void **)((char *)p + 0xDB8);
    r = ((s32 (*)(void))p)();
    temp_3 = *(s32 *)(arg1 + 0x92C);
    if ((temp_3 != *(s32 *)(arg2 + 0x92C)) && (temp_3 != 0)) {
        if (*(s32 *)(arg0 + 0x920) != 0) {
            func_0011B9E0(*(s32 *)(arg0 + 0x920));
        }
        *(s32 *)(arg0 + 0x920) = func_0016FA70(*(s32 *)(arg1 + 0x92C));
        *(s32 *)(arg0 + 0x98) = 2;
        return 1;
    }
    return r;
}
