extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern s32 D_010CE6C8;

s32 func_0013D118(void) {
    if (func_001404D0() != 0) {
        return 0;
    }
    D_010CE6C8 = func_001404F0();
    return 1;
}

extern s32 func_001404D0(void);
extern s32 func_00141078(s32);
extern void func_001403B8(s32, void *);
extern void func_00140978(s32);
extern s32 D_010CE6C0;
extern s32 D_010CE6C4;
extern s32 func_0013D118(void);

s32 func_0013D0B0(void *arg0) {
    if (func_001404D0() != 0) {
        return 0;
    }
    if (__builtin_expect(func_00141078(D_010CE6C4) >= 0, 1)) {
        return 0;
    }
    ((void (*)(void))func_001403B8)();
    func_00140978(D_010CE6C0);
    *(void **)((char *)arg0 + 0x18) = (void *)func_0013D118;
    return 0;
}

extern s32 func_00140020(void);
extern s32 func_001404D0(void);
extern void func_001403B8(s32, void *);
extern void func_001409C8(void);
extern s32 D_010CE6CC;

s32 func_0013D1B0(void *arg0) {
    if (func_00140020() != 0) {
        return 0;
    }
    if (func_001404D0() != 0) {
        return 0;
    }
    {
        s32 *p = &D_010CE6CC;
        s32 c = *p;
        s32 cm1 = c - 1;
        if (c > 0) {
            *p = cm1;
            return 0;
        }
        func_001403B8(cm1, p);
    }
    func_001409C8();
    *(void **)((char *)arg0 + 0x18) = (void *)0x00140000 - 0x2DD0;
    return 0;
}

extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern s32 func_00141028(void *, s32, s32, s32);
extern s32 D_010CE6C0;
extern s32 D_010CE6C4;
extern s32 D_010CE6C8;
extern s32 D_010CE700;
extern s32 func_0013D0B0(void *);

s32 func_0013D028(void *arg0) {
    s32 temp_2;
    if (func_001404D0() != 0) {
        return 0;
    }
    temp_2 = func_001404F0();
    D_010CE6C0 = temp_2;
    if (temp_2 < 0) {
        D_010CE6C8 = temp_2;
        return 1;
    }
    D_010CE6C4 = func_00141028((void *)&D_010CE700, temp_2, 0x1320, 0);
    *(void **)((char *)arg0 + 0x18) = (void *)func_0013D0B0;
    return 0;
}
