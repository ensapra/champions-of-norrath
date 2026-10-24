void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

typedef struct N { struct N *next; } N;
s32 func_0014B41C(u8 *arg0, N *arg1) {
    N *p = *(N **)(arg0 + 0x4C);
    if (p == arg1) return 1;
    p = p->next;
    if (p == NULL) return 0;
    do {
        if (p == arg1) return 1;
        p = p->next;
    } while (p != NULL);
    return 0;
}
