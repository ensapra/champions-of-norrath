void func_00149AE4(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x150);
    ((void (*)(void))p)();
}

s32 func_0014918C(s32 *);

s32 func_00149138(s32 arg0) {
    s32 a = arg0;
    s32 n = 0;
    while (func_0014918C(&a)) n++;
    return n;
}

extern s32 D_001C68DC[];

void func_001488F8(s32 arg0) {
    D_001C68DC[0] |= arg0;
}
