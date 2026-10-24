typedef struct {
    s32 flags;
    s32 pad4[3];
    u32 f10;
    s32 pad14[3];
    s32 f20;
} S_002D30B8;

s32 func_002D2C48(s32);
void func_002D2B50(S_002D30B8 *);

void func_002D30B8(S_002D30B8 *arg0, s32 arg1, s32 arg2) {
    s32 t = func_002D2C48(arg1);
    func_002D2B50(arg0);
    if (arg0->f10 != 0xFFFFFFFF) {
        arg0->f10 = t;
    }
    arg0->f20 = arg2;
    arg0->flags = (arg0->flags & ~0xC) | 0x109;
}

s32 func_002E4E48(s32, s32, s32 *, s32, s32);

s32 func_002E5F28(s32 a0, s32 *a1, s32 a2) {
    *a1 = a2;
    if (func_002E4E48(a0, 0x20, a1, 4, 4) < 0) {
        return -0x21E;
    }
    return *a1;
}

s32 func_002E5F70(s32 a0, s32 *a1, s32 *a2, s32 n, s32 type) {
    s32 i;
    if (func_002E4E48(a0, type, a1, 0, n * 4 + 4) < 0) {
        return -0x21E;
    }
    for (i = 0; i < n; i++) {
        a2[i] = a1[i + 1];
    }
    return *a1;
}

s32 func_002E6000(s32 a0, s32 *a1, s32 *a2, s32 n) {
    return func_002E5F70(a0, a1, a2, n, 0x21);
}
