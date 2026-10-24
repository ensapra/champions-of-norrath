extern u8 func_001D1C80[];
void func_0017FEC4(s32, u8, u8, u8, u8);
void func_00181A08(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    func_0017FEC4(0, p[0x444], p[0x445], p[0x446], p[0x447]);
    func_0017FEC4(1, p[0x448], p[0x449], p[0x44A], p[0x44B]);
    func_0017FEC4(2, p[0x44C], p[0x44D], p[0x44E], p[0x44F]);
    func_0017FEC4(3, p[0x450], p[0x451], p[0x452], p[0x453]);
}

extern u8 jtbl_004C006C[];
void func_001A1568(void *, s32, void *);
void func_0018ACA0(void *, void *);
void func_00181CE0(char **list, char *buf) {
    char *out = buf;
    if (list == 0) func_001A1568(jtbl_004C006C + 0xD70C, 0x1C2, jtbl_004C006C + 0xD714);
    if (out == 0) func_001A1568(jtbl_004C006C + 0xD70C, 0x1C3, jtbl_004C006C + 0xD724);
    for (; *list; list++) {
        func_0018ACA0(&out, *list);
    }
    *out = 0;
}

void func_00181D80(s32 a, ...) {
    void *ap = __builtin_next_arg(a);
}
