extern void (*D_001C8DFC[])(void *);
void func_0014CA30(s32);
void func_00159C58(void *);
void func_0015AFB8(void *);
void func_0016FB28(void *);
void func_0016FCC4(void *, void *, void *, void *);
void func_00171AE0(void *);

#define F32_1597A4(p, off) (*(s32 *)((u8 *)(p) + (off)))

void func_001597A4(u8 *o) {
    u8 *a;
    u8 *b;
    u8 *t;

    D_001C8DFC[0](o);
    if (F32_1597A4(o, 0x9C) == 0) {
        func_0014CA30(F32_1597A4(o, 0x910));
        return;
    }
    func_00171AE0(o + ((F32_1597A4(o, 0x4EC) ^ 1) << 6) + 0xB00);
    func_00171AE0(o + (F32_1597A4(o, 0x4EC) ^ 1) * 0xF0 + 0x920);
    func_0015AFB8(o);
    if (F32_1597A4(o, 0xD00) == 0 || F32_1597A4(o, 0xD0C) != 0) {
        return;
    }
    func_0016FB28(o + 0xBA8);
    a = o + 0xCD0;
    b = o + 0xBE0;
    if (F32_1597A4(o, 0xBC8) == 0) {
        t = a;
        a = b;
        b = t;
    }
    func_0016FCC4(o + 0xBA8, o + 0xBD0, a, b);
    func_00159C58(o);
    func_0014CA30(F32_1597A4(o, 0x914));
}
