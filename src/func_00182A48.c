extern u8 D_001E2440[];
extern u8 D_004CD8E8[];
extern u8 D_001E2528[];
void func_0017FD84(void *);
void func_0018A2A8(void *, s32, void *);
s32 func_0017FF20(void *);
void func_001A2850(void *);

void func_00182A48(void *a) {
    char buf[0x800];
    func_0017FD84(a);
    func_0018A2A8(buf, 0x100, a);
    ((void (*)(s32))*(void **)D_001E2528)(func_0017FF20(buf));
}

void func_00182918(void) {
    func_001A2850(D_004CD8E8);
    D_001E2440[1] = 0;
    D_001E2440[0] = 0;
}

u8 func_00182908(void) {
    return D_001E2440[0];
}
