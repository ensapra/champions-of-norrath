extern s32 D_001BA9C0[];
extern s32 D_B0BA9C[];
extern s32 D_B0BAA0[];
extern s32 D_B0BAA4[];
extern char D_004C5978[];
extern s32 func_0017E898(s32, u8);
extern s32 func_001A2850(const char *, ...);

void func_00101F20(void) {
    s32 mode = D_001BA9C0[0];
    u8 v = D_B0BAA0[0];
    s32 r;

    if (mode == 2 || mode == 4) {
        if (!(v & 0x10)) v |= 0x10;
    } else {
        if (v & 0x10) v &= 0xEF;
    }
    if (v != D_B0BAA0[0]) {
        D_B0BAA0[0] = v;
        r = func_0017E898(D_B0BAA4[0], v);
        if (r != 0) {
            func_001A2850(D_004C5978, r);
            D_B0BA9C[0] = 0;
        } else {
            D_B0BA9C[0] = 2;
        }
    }
}

extern u16 D_001BA8D0[];
extern u16 D_001BA948[];
extern void func_001A2660(void *, s32, s32);
extern void func_0018A2A8(char *, s32, u16 *);
extern char *func_001A42B8(char *, const char *);

void func_00101FD0(s32 code, char *out) {
    char buf[5];
    u16 idx = code - 0xA6;
    if (idx < 0x3A) {
        func_001A2660(buf, 0, 5);
        if (D_001BA9C0[0] == 2) {
            func_0018A2A8(buf, 5, &D_001BA8D0[idx]);
        } else {
            func_0018A2A8(buf, 5, &D_001BA948[idx]);
        }
        func_001A42B8(out, buf);
    } else {
        *out = 0;
    }
}

extern s32 D_B0BA14[];
extern char D_004C59E8[];
extern char D_004C59F0[];
extern char D_004C59F8[];

s32 func_00102078(u16 code, char *out) {
    s32 d = D_B0BA14[0];
    if (!(d & 0x11) || (d & 0x66)) return 0;
    switch (code) {
    case 0x48 ... 0x55:
        __builtin_memcpy(out, D_004C59E8, 3);
        return 1;
    case 0x56 ... 0x65:
        __builtin_memcpy(out, D_004C59F0, 2);
        return 1;
    case 0x66 ... 0x75:
        __builtin_memcpy(out, D_004C59F8, 4);
        return 1;
    }
    return 0;
}
