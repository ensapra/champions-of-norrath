extern s32 D_010CFA24[];
extern s32 D_010CFA28[];
s32 func_001404D0(void);
s32 func_00140020(void);
void func_001403B8(void);
void func_00140C78(s32);
void func_0013FFF8(void);

typedef struct {
    char pad[0x18];
    s32 (*fn)();
} T;
s32 func_0013D378(T *);

s32 func_0013D2F0(T *t) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFA24[0] > 0) {
        D_010CFA24[0]--;
        return 0;
    }
    func_001403B8();
    func_00140C78(D_010CFA28[0]);
    t->fn = func_0013D378;
    return 0;
}

void func_0013D2C8(void) {
    func_0013FFF8();
    D_010CFA24[0] = 3;
}

void func_0013D2B8(s32 a) {
    D_010CFA28[0] = a;
}
