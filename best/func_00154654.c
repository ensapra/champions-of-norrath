extern void func_001C8098();
void func_00154068(void *);
void func_00154130(void *);
void func_00154394(void *);
void func_00171AE0(s32);
void func_00154C40(void *);

void func_0015398C(void *arg0) {
    (*(void (**)())((char *)func_001C8098 + 0xD70))();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

extern s32 *(*D_010E458C[])(void);

void func_00152D0C(void) {
    s32 *p = NULL;

    if (D_010E458C[0] != NULL) {
        p = D_010E458C[0]();
    }
    if (p != NULL) {
        func_00171AE0(p[1]);
    }
}

extern void (*D_010E4588[])(void);

void func_00152CE4(void) {
    if (D_010E4588[0] != NULL) {
        D_010E4588[0]();
    }
}

s32 func_00154654(void *arg0) {
    if (*(s32 *)((char *)arg0 + 0x98) != 0) {
        (*(void (**)())((char *)func_001C8098 + 0xD70))();
        func_00154C40(arg0);
    }
    return *(s32 *)((char *)arg0 + 0x97C);
}
