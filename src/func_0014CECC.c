void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    void *p = *(void **)(arg0 + 0x4C);
    p = *(void **)((u8 *)p + 0x9C);
    ((void (*)(void *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

void func_0014CECC(void *obj, s32 arg1, s32 arg2) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x88);
    ((void (*)(void *, s32, s32))p)(obj, arg1, arg2);
}

void func_0014CF0C(void *obj, s32 arg1, s32 arg2) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x8C);
    ((void (*)(void *, s32, s32))p)(obj, arg1, arg2);
}

void func_0014CF78(void *obj, s32 arg1, s32 arg2) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x90);
    ((void (*)(void *, s32, s32))p)(obj, arg1, arg2);
}
