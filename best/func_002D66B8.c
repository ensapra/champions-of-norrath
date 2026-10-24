typedef char *my_va_list;
s32 func_002D6AA0(const char *, my_va_list);
s32 func_002D7098(const char *fmt, ...) {
    my_va_list ap;
    s32 r;
    ap = (my_va_list)__builtin_next_arg(fmt);
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
        D_0044495C = 0;
        D_008DE8C0[D_0044495C + 1] = 0;
        func_002DFA68(D_008DE8C0);
        return;
    }
    D_008DE8C0[D_0044495C++] = c;
}

typedef struct { s32 a; s32 b; s32 *c; s32 *d; s32 data[64]; } Pool;
extern Pool D_008DE500;
typedef struct { s32 id; s32 a, b, c; u8 *buf1; u8 *buf2; Pool *r; } RpcState;
extern RpcState D_008DE610;
extern u8 D_008DE640[320];
extern u8 D_008DE780[320];
void FlushCache_2(s32);
s32 func_002DF858(s32, void *, void *);
Pool *func_002D6230(s32);
void func_002D62D8(void);
s32 func_002D66B8(void) {
    u8 *q;
    FlushCache_2(0);
    D_008DE610.id = func_002DF858(0x210, &D_008DE610, func_002D62D8);
    if (D_008DE610.id < 0) return 0;
    D_008DE610.c = 0;
    D_008DE610.a = 0;
    D_008DE610.b = 0;
    D_008DE610.buf2 = (u8 *)((u32)D_008DE780 | 0x20000000);
    q = (u8 *)((u32)D_008DE640 | 0x20000000);
    D_008DE610.buf1 = q;
    *(s16 *)(q + 4) = 0x210;
    q[6] = 0x45;
    q[7] = 0x48;
    *(s32 *)(q + 8) = 0;
    *(s16 *)(q + 2) = 0;
    D_008DE610.r = func_002D6230(0x100);
    return 1;
}

Pool *func_002D6230(s32 a) {
    D_008DE500.a = a;
    D_008DE500.c = D_008DE500.data;
    D_008DE500.b = 0;
    D_008DE500.d = D_008DE500.data;
    return &D_008DE500;
}
