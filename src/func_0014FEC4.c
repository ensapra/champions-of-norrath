/* identical to func_0014A968 (matched), with its names changed by decompdecomp */
#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

void func_0014B558(void *, s32);
void func_0014A994(u8 *a) {
    func_0014B558(a + 0x128, 5);
}

void func_0014FEC4(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x134);
    ((void (*)(void *))p)(obj);
}

s32 func_001A4174(s32, s32);
s32 func_0014A808(void *a, s32 x) {
    s32 i;
    if (F(a, 0x870) == 0) {
        return -1;
    }
    for (i = 0; i < F(a, 0x878); i++) {
        if (func_001A4174(x, (*(s32 **)((char *)a + 0x870))[i]) == 0) {
            return i;
        }
    }
    return -1;
}
