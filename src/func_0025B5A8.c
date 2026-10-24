extern s32 D_00483E88;
extern s32 D_00486C7C;
void func_001D1108(char *);
s32 func_00142CE8(char *, s32);
s32 func_00191BD8(char *, s32);
void func_0015E010(char *);

void func_0025B5A8(char *p, s32 size) {
    struct { s32 tmp; s32 pad[3]; char buf[0x100]; } s;
    s32 n;
    func_001D1108(s.buf);
    n = size - D_00483E88 - 0x18;
    D_00486C7C = func_00142CE8(p + 8, n);
    __builtin_memcpy(p, &D_00486C7C, 4);
    p += D_00486C7C;
    n -= D_00486C7C;
    s.tmp = func_00191BD8(p + 0x10, n + 8);
    p += 8;
    __builtin_memcpy(p, &s.tmp, 4);
    p += s.tmp;
    func_0015E010(p + 8);
}
