s32 func_002E6020(s32, s32, s32 *, s32);
s32 func_002E6040();
s32 func_002E6120(s32, s32, s32, s32);

s32 func_002E6148(s32 a0, s32 a1, s32 *a2, s32 a3, s32 a4) {
    s32 r;
    if (func_002E6040() < 0) {
        r = func_002E6020(a0, a1, a2, a3);
        if (r < 0) return r;
    }
    r = func_002E6120(a0, a1, *a2, a4);
    if (r >= 0) r = 0;
    return r;
}

s64 func_002EDAB8(u8 *a0, s32 a1, s32 *a2) {
    s64 v = -1;
    if (a1 == 3) {
        s64 t = *(s64 *)(a0 + 0x9A0);
        v = (s32)t;
        if (a2) *(s64 *)(a0 + 0x9A0) = *a2;
    }
    return v;
}

void func_002ECEE0(void *, void *);
void func_002ED4A0(void *, s64 *);
void func_002ED700(s64 *);
void func_002ED940(void *a0, s64 *a1) {
    s64 buf[8];
    s64 *p = a1;
    s32 i;
    func_002ECEE0(a0, buf);
    func_002ED4A0(buf, a1);
    for (i = 7; i >= 0; i--) {
        s64 x = *p, y = x;
        if (y < 0) y = -y;
        if (y < 0x5666) y >>= 1;
        else if (y >= 0x799A) y = (y - 0x6600) << 2;
        else y -= 0x2B33;
        *p++ = x < 0 ? -y : y;
    }
    func_002ED700(a1);
}

s32 func_002F5760(void *, f32, f32);
void func_002F7700(s32, f32, f32);
void func_002F1550(f32 x) {
    union { f32 f; s32 i; } u;
    u.f = x;
    if ((u.i & 0x7FFFFFFF) <= 0x3F490FDA) {
        func_002F7700(1, x, 0.0f);
    } else {
        s32 r = func_002F5760(&u, x, 0);
        func_002F7700(1 - ((r & 1) * 2), 0.0f, 0.0f);
    }
}
