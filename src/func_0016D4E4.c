/* identical to func_0015A510 (matched), with its names changed by decompdecomp */
extern u8 func_001C8098[];
void func_0014D370(s32, s32);
void func_0014D328(s32, s32);

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

void func_0015A55C(S_0015A5A8 *arg0, s32 arg1) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xDF8);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D370(arg0->x910, arg1);
    func_0014D370(arg0->x914, arg1);
}

void func_0016D4E4(S_0015A5A8 *arg0, s32 arg1) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xDF0);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D328(arg0->x910, arg1);
    func_0014D328(arg0->x914, arg1);
}

s32 func_0015A6C0(S_0015A5A8 *, s32 *);
u32 func_001A444C(s32);
s32 func_0015A828(S_0015A5A8 *, s32, s32, u32, s32);
void func_0015B210(S_0015A5A8 *);

void func_0015A5A8(S_0015A5A8 *a, s32 arg1, s32 arg2) {
    u32 n;
    u32 m;
    if (arg1 == 0) {
        return;
    }
    if (func_0015A6C0(a, &arg1) == 0) {
        return;
    }
    a->xBF0 = 0;
    a->xBF4 = 0;
    n = func_001A444C(arg1);
    m = a->xCA0;
    if (m >= n) {
        m = n;
    }
    func_0015A828(a, a->xB8C, arg1, m, arg2);
    func_0015B210(a);
    a->x98 = 2;
}

s32 func_0015A62C(S_0015A5A8 *a, s32 arg1) {
    s32 n;
    s32 len;
    if (arg1 == 0) {
        return 0;
    }
    n = func_001A444C(arg1);
    len = n;
    if (a->xCA0 < a->xBF0 + n) {
        len = a->xCA0 - a->xBF0;
    }
    if (len < n) {
        return 0;
    }
    if (func_0015A828(a, a->xB8C, arg1, n, 0) == 0) {
        n = 0;
    }
    return n;
}
