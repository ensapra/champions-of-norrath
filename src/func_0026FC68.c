typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
P12 *func_0026FC68(P12 *d, u8 *s) {
    *d = *(P12 *)(s + 0x18);
    return d;
}
