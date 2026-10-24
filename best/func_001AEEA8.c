typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) r->wr = r->data;
}

extern void func_001AEDB8(s32);
void func_001AEEA8(s32 c) {
    if (c == 10) {
        func_001AEDB8(13);
        func_001AEDB8(10);
    } else {
        func_001AEDB8(c);
    }
}

typedef union { f64 d; u64 u; } U;
s32 func_001AEEE0(f64 d) {
    U v;
    s64 e;
    u64 m;
    v.d = d;
    e = ((v.u << 1) >> 53) - 0x433;
    if (e < -0x35) return 0;
    if (e >= 0xD) return 0x270F;
    m = ((v.u << 12) >> 12) | ((u64)0x8000 << 37);
    if (e < 0) {
        m >>= (s32)((0 - e) - 2);
        if ((m & 3) == 3) {
            m = (m >> 2) + 1;
        } else {
            m = m >> 2;
        }
    } else {
        m <<= (s32)e;
    }
    return (s32)m;
}

extern void func_001AF0E0(const char *, char *);
void func_001AF6D8(const char *fmt, ...) {
    char *ap = (char *)__builtin_next_arg(fmt) - (8 - __builtin_args_info(0)) * 8;
    func_001AF0E0(fmt, ap);
}
