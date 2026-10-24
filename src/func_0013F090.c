extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern void func_0011B968(s32);
extern void func_001403B8(void);
extern void func_00140AB0(s32);
extern s32 func_00140020(void);
extern void func_0013FFF8(void);
extern s32 D_001C6820[];
extern s32 D_001C6824[];
extern s32 D_010D1224[];
extern s32 D_010D1228[];
extern s32 D_010D122C[];
s32 func_0013EF80(u8 *o);

void func_0013EED0(void) {
    func_0013FFF8();
    D_010D1228[0] = 3;
}

s32 func_0013EEF8(u8 *o) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010D1228[0] > 0) {
        D_010D1228[0]--;
        return 0;
    }
    func_001403B8();
    func_00140AB0(D_010D122C[0]);
    *(void **)(o + 0x18) = func_0013EF80;
    return 0;
}

s32 func_0013F090(void) {
    s32 v;
    if (func_001404D0() != 0) return 0;
    v = func_001404F0();
    D_010D1224[0] = v;
    if (v < 0) {
        func_0011B968(D_001C6820[0]);
        D_001C6820[0] = 0;
        D_001C6824[0] = 0;
    }
    return 1;
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
