extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern void func_0011B968(s32);
extern void func_001403B8(void);
extern void func_00140690(s32, s32);
extern void func_00140010(void);
extern s32 D_001C682C[];
extern s32 D_001C6838[];
extern s32 D_001C6830[];
extern s32 D_001C683C[];
extern s32 D_010D1248[];
extern s32 D_010D1250[];
s32 func_0013F8A8(u8 *o);
s32 func_0013F900(u8 *o);

s32 func_0013F830(u8 *o) {
    s32 v;
    if (func_001404D0() != 0) return 0;
    v = func_001404F0();
    D_010D1248[0] = v;
    if (v < 0) {
        func_0011B968(D_001C682C[0]);
        D_001C682C[0] = 0;
        D_001C6838[0] = 0;
    }
    *(void **)(o + 0x18) = func_0013F8A8;
    return 0;
}

s32 func_0013F8A8(u8 *o) {
    if (func_001404D0() != 0) return 0;
    func_001403B8();
    func_00140690(2, D_010D1250[0]);
    *(void **)(o + 0x18) = func_0013F900;
    return 0;
}

s32 func_0013FA10(void) {
    s32 v;
    if (func_001404D0() != 0) return 0;
    v = func_001404F0();
    D_010D1248[0] = v;
    if (v < 0) {
        func_0011B968(D_001C6830[0]);
        D_001C6830[0] = 0;
        D_001C683C[0] = 0;
    }
    return 1;
}

void func_0013FA70(void *arg0) {
    void (*fn)(s32);
    func_00140010();
    fn = (void (*)(s32))*(void **)((s8 *)arg0 + 8);
    if (fn != NULL)
        fn(D_010D1248[0]);
}
