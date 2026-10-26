s32 func_003091A0(void *, s32, char *);
void func_00191868(void *, void *);
void func_001744B8(s32, s32, void *, s32);
void func_00173088(s32 a, s32 b, s32 c, ...) {
    u8 gap[0x10], obj[0x400], buf[0x800];
    char *ap = (char *)__builtin_next_arg(c) - 8;
    func_003091A0(obj, c, ap);
    func_00191868(buf, obj);
    func_001744B8(a, b, buf, 100000);
}
