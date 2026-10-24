#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

void func_0011B9E0(s32);
void func_0014A5CC(void *a) {
    s32 i;
    for (i = 0; i < F(a, 0x878); i++) {
        func_0011B9E0((*(s32 **)((char *)a + 0x870))[i]);
        (*(s32 **)((char *)a + 0x870))[i] = 0;
    }
    F(a, 0x878) = 0;
}

void func_0014A2EC(void *, s32);
void func_0014A49C(void *a, s32 *list, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        func_0014A2EC(a, *list++);
    }
}

void func_0014A3E8(void *, s32);
void func_0014A43C(void *a, s32 x) {
    func_0014A3E8(a, x - F(a, 0x898) + 1);
}
