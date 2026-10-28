s32 func_003091A0(void *, s32, char *);
void func_00191868(void *, void *);
void func_001744B8(s32, s32, void *, s32);
void func_00173088(s32 a, s32 b, s32 c, ...) {
    char *volatile ap;
    u8 obj[0x400], buf[0x800];
    char *p = (char *)__builtin_next_arg(c) - 0x28;
    ap = p;
    func_003091A0(obj, c, p);
    func_00191868(buf, obj);
    func_001744B8(a, b, buf, 100000);
}
