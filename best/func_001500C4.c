void func_00150444(void *);
void func_00150D88(void *);

s32 func_001500C4(void *a0, void *a1, void *a2) {
    s32 var_6 = ((s32 (*)(void)) (unsigned int) (*(unsigned int *)0x001C74F8))();
    if (*(long long *)((char *)a1 + 0x5A0) != *(long long *)((char *)a2 + 0x5A0) ||
        *(int *)((char *)a1 + 0x5AC) != *(int *)((char *)a2 + 0x5AC) ||
        *(int *)((char *)a1 + 0x5B0) != *(int *)((char *)a2 + 0x5B0)) {
        ((void (*)(void *)) (unsigned int) (*(unsigned int **)((char *)a0 + 0x4C))[0x130 / 4])(a0);
        ((void (*)(void *)) (unsigned int) (*(unsigned int **)((char *)a0 + 0x4C))[0x12C / 4])(a0);
        func_00150D88(a0);
        func_00150444(a0);
        var_6 = 1;
    }
    {
        int t5 = *(int *)((char *)a2 + 0x86C);
        int t2 = *(int *)((char *)a1 + 0x86C);
        if (t5 != t2) {
            *(int *)((char *)a0 + 0x86C) = t5;
            var_6 = 1;
        }
    }
    return var_6;
}
