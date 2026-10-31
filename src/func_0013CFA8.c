extern s32 func_00140020(void);
extern s32 func_001404D0(void);
extern void func_001403B8(s32, void *);
extern void func_00140CD8(void);
extern s32 D_010CE6CC;
extern void func_0013D028(void);

s32 func_0013CFA8(void *arg0) {
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
    func_00140CD8();
    *(void **)((char *)arg0 + 0x18) = (void *)func_0013D028;
    return 0;
}
