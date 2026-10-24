extern char func_001C8098[];
void func_001571E0(void *);
s64 func_00170968(s64, s64);
void func_0014B558(void *, void *, s32);
void func_00171AE0(void *);

#define I(p, o) (*(s32 *)((char *)(p) + (o)))
#define L(p, o) (*(s64 *)((char *)(p) + (o)))

void func_00157068(void *arg0) {
    (*(void (**)(void))(func_001C8098 + 0xD64))();
    if (I(arg0, 0x92C) != 0) {
        func_001571E0(arg0);
        I(arg0, 0x92C)--;
    }
}

void func_00157164(void *arg0) {
    s64 t = L(arg0, 0x940);
    I(arg0, 0x918) = I(arg0, 0x928);
    I(arg0, 0x928) = func_00170968((t + L(arg0, 0x930)) << 12, L(arg0, 0x938) - t);
}

void func_00156E68(void *arg0) {
    func_0014B558(arg0, (char *)arg0 + 0x128, 4);
}

void func_0015735C(void *arg0) {
    (*(void (**)(void))(func_001C8098 - 0x8F4))();
    func_00171AE0((char *)arg0 + (I(arg0, 0x4EC) ^ 1) * 0x50 + 0x880);
}
