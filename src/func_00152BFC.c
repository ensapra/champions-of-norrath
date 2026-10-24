void func_00154068(s32);
void func_00154130(s32);
void func_00154394(s32);
extern char func_001C8098[];

void func_0015398C(s32 arg0) {
    void (*f)(void) = *(void (**)(void))(func_001C8098 + 0xD70);
    f();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

void func_0015175C(void *, s32);
void func_001546E0(void *p, s32 unused, s32 x, s32 y) {
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C((char *)p + 0x980, 1);
    *(s32 *)((char *)p + 0x928) = 0;
    *(s32 *)((char *)p + 0x924) = 0;
}

extern s32 (*D_010E4580[])(void);
s32 func_00152C30(void) {
    s32 r = 0;
    if (D_010E4580[0] != NULL) {
        r = D_010E4580[0]();
    }
    return r;
}

extern s32 (*D_010E457C[])(void);
s32 func_00152BFC(void) {
    s32 r = 0;
    if (D_010E457C[0] != NULL) {
        r = D_010E457C[0]();
    }
    return r;
}
