extern void func_001C8098();
void func_00154068(void *);
void func_00154130(void *);
void func_00154394(void *);

void func_0015398C(void *arg0) {
    (*(void (**)())((char *)func_001C8098 + 0xD70))();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

extern s32 (*D_010E456C[])(void);

s32 func_00152DA0(void) {
    s32 ret = -1;

    if (D_010E456C[0] != NULL) {
        ret = D_010E456C[0]();
    }
    return ret;
}

extern s32 (*D_010E4564[])(void);

s32 func_00152D74(void) {
    s32 ret = 0;

    if (D_010E4564[0] != NULL) {
        ret = D_010E4564[0]();
    }
    return ret;
}

extern void (*D_010E4560[])(void);

void func_00152D4C(void) {
    if (D_010E4560[0] != NULL) {
        D_010E4560[0]();
    }
}
