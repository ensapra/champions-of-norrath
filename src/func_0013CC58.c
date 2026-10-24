extern s32 D_010CE5F8[];
extern s32 D_010CE600[];
extern s32 D_001C54F0[];
void func_00140010(void);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140DA8(s32);
void ExitDeleteThread(void);

typedef struct {
    char pad[0x18];
    s32 (*fn)();
} T;
s32 func_0013CEC0(T *);
s32 func_0013CDD8(T *);

s32 func_0013CDD8(T *t) {
    func_00140010();
    t->fn = func_0013CEC0;
    return 0;
}

s32 func_0013CD88(T *t) {
    if (func_001404D0() != 0) return 0;
    D_010CE5F8[0] = func_001404F0();
    t->fn = func_0013CDD8;
    return 0;
}

void func_0013CC58(void) {
    func_00140DA8(D_010CE600[0]);
    D_001C54F0[0] = 2;
    ExitDeleteThread();
}
