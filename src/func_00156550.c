extern void func_001C8098();
void func_00156550(void)
{
    void *p = (char *)func_001C8098;
    p = *(void **)((char *)p + 0xD68);
    ((void (*)(void))p)();
}

void func_00156574(void)
{
    void *p = (char *)func_001C8098;
    p = *(void **)((char *)p + 0xD68);
    ((void (*)(void))p)();
}

void func_0011B9E0(s32);
s32 func_0016FA70(s32);

s32 func_001565C8(char *arg0, char *arg1, char *arg2) {
    s32 temp_3;
    s32 var_4;
    void *p = (char *)func_001C8098;
    s32 t4;

    temp_3 = *(s32 *)(arg1 + 0x92C);
    p = *(void **)((char *)p + 0xDB8);
    var_4 = ((s32 (*)(void))p)();
    if ((temp_3 != *(s32 *)(arg2 + 0x92C)) && (temp_3 != 0)) {
        t4 = *(s32 *)(arg0 + 0x920);
        if (t4 != 0) {
            func_0011B9E0(t4);
        }
        t4 = func_0016FA70(*(s32 *)(arg1 + 0x92C));
        *(s32 *)(arg0 + 0x98) = 2;
        var_4 = 1;
        *(s32 *)(arg0 + 0x920) = t4;
    }
    return var_4;
}

void func_001564C4(char *arg0) {
    s32 t = *(s32 *)(arg0 + 0x92C);
    if (t != 0) {
        *(s32 *)(arg0 + 0x920) = func_0016FA70(t);
    } else {
        *(s32 *)(arg0 + 0x920) = 0;
    }
    *(s32 *)(arg0 + 0x92C) = 0;
}
