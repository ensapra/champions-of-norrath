typedef char *my_va_list;
#define my_va_start(ap, last) (ap = (my_va_list)__builtin_next_arg(last) - (__builtin_args_info(2) < 8 ? (8 - __builtin_args_info(2)) * 8 : 0))
s32 func_002D6AA0(const char *, my_va_list);
s32 func_002D7098(const char *fmt, ...) {
    my_va_list ap;
    s32 r;
    my_va_start(ap, fmt);
    r = func_002D6AA0(fmt, ap);
    return r;
}

extern s32 D_0044495C;
extern u8 D_008DE8C0[128];
void func_002DFA68(u8 *);
void func_002D67B8(s32 c) {
    if (D_0044495C >= 0x7E) {
        D_0044495C = 0;
        D_008DE8C0[0x7F] = 0;
        func_002DFA68(D_008DE8C0);
    }
    if (c == '\n') {
        D_008DE8C0[D_0044495C] = c;
        D_008DE8C0[D_0044495C + 1] = 0;
        D_0044495C = 0;
        func_002DFA68(D_008DE8C0);
        return;
    }
    D_008DE8C0[D_0044495C++] = c;
}

typedef struct { s32 a; s32 b; u8 *c; u8 *d; u8 data[256]; } Pool;
extern Pool D_008DE500;
Pool *func_002D6230(s32 a) {
    D_008DE500.a = a;
    D_008DE500.b = 0;
    D_008DE500.d = D_008DE500.data;
    D_008DE500.c = D_008DE500.data;
    return &D_008DE500;
}
