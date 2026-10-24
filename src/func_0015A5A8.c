typedef struct {
    u8 pad0[0x98];
    s32 x98;
    u8 pad1[0x910 - 0x9C];
    s32 x910;
    s32 x914;
    u8 pad2[0xB8C - 0x918];
    s32 xB8C;
    u8 pad3[0xBF0 - 0xB90];
    s32 xBF0;
    s32 xBF4;
    u8 pad4[0xCA0 - 0xBF8];
    u32 xCA0;
} S_0015A5A8;

s32 func_0015A6C0(S_0015A5A8 *, s32 *);
u32 func_001A444C(s32);
s32 func_0015A828(S_0015A5A8 *, s32, s32, u32, s32);
void func_0015B210(S_0015A5A8 *);

void func_0015A5A8(S_0015A5A8 *a, s32 arg1, s32 arg2) {
    u32 n;
    u32 m;
    s32 id;
    if (arg1 == 0) {
        return;
    }
    if (func_0015A6C0(a, &arg1) == 0) {
        return;
    }
    id = arg1;
    a->xBF0 = 0;
    a->xBF4 = 0;
    n = func_001A444C(id);
    m = a->xCA0;
    if (m >= n) {
        m = n;
    }
    func_0015A828(a, a->xB8C, arg1, m, arg2);
    func_0015B210(a);
    a->x98 = 2;
}
