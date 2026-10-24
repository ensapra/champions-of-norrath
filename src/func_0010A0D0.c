typedef struct {
    u8 pad[0xA8];
    void *f0;
    void *f1;
    void *f2;
} T;

extern s32 D_001BD8BC[];
extern void func_00105090(void);
extern void func_0010B2B8(void);
extern void func_0010A0B8(void);
extern void func_001050A8(T *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00105190(T *);
extern s32 func_0011C738(void);
extern s32 func_0011D9A0(void);

s32 func_0010A0D0(s32 x) {
    T t;
    func_001050A8(&t, D_001BD8BC[0], 8, 0, 0x3C, 3, 0, 0, 0, 0);
    t.f0 = func_00105090;
    t.f1 = func_0010B2B8;
    t.f2 = func_0010A0B8;
    return func_00105190(&t);
}

s64 func_0010A140(s32 n) {
    if (n >= 0 && n < 2) {
        if (func_0011C738() == 0) {
            func_0010A0D0(1);
            return func_0011D9A0();
        }
        return func_0010A0D0(0);
    }
}
