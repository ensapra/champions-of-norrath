s32 func_001B5C80(void);
void func_001B5CD8(void);

void func_001ADBB0(void) {
    s32 r;
    r = func_001B5C80();
    *(vs32 *)0x1000F000 = 4;
    if (r) {
        func_001B5CD8();
    }
    while (!(*(vs32 *)0x1000F000 & 4)) {
    }
    r = func_001B5C80();
    *(vs32 *)0x1000F000 = 4;
    if (r) {
        func_001B5CD8();
    }
}

extern u8 func_01000000[];
void func_00140010(void *);

void func_00140168(void *arg0) {
    void (*fn)(s32);
    func_00140010(arg0);
    fn = *(void (**)(s32))((u8 *)arg0 + 8);
    if (fn != NULL)
        fn(*(s32 *)(func_01000000 + 0xD1284));
}

s32 func_00140020(void *);
s32 func_0017AE78(s32, s32);
s32 func_00140088(void);

s32 func_001400F8(void *arg0) {
    s32 r;
    s32 *cnt;
    r = func_00140020(arg0);
    if (r != 0)
        return 0;
    cnt = (s32 *)(func_01000000 + 0xD1280);
    if (*cnt > 0) {
        *cnt = *cnt - 1;
        return r;
    }
    func_0017AE78(*(s32 *)(func_01000000 + 0xD1288), 0);
    *(void **)((u8 *)arg0 + 0x18) = func_00140088;
    return 0;
}

s32 func_0017A848(s32, void *, s32 *);

s32 func_00140088(void) {
    s32 *st = (s32 *)(func_01000000 + 0xD127C);
    s32 r;
    r = func_0017A848(1, func_01000000 + 0xD1278, st);
    if (r == 0)
        return r;
    if (*st == 0) {
        *(s32 *)(func_01000000 + 0xD1284) = 0;
        return 1;
    }
    *(s32 *)(func_01000000 + 0xD1284) = 1;
    return 1;
}
