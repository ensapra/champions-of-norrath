extern u32 D_00362CE8[];

void func_0018AC18(u16 **arg0, u32 c) {
    u16 *p = *arg0;
    u32 lim = 0x7FF;
    s32 ok;

    if (c > 0x10FFFF) {
        ok = 0;
    } else {
        u32 d = c - 0xD800;
        ok = d > lim;
    }
    if (ok == 0) {
        c = D_00362CE8[0];
    }
    if (c <= 0xFFFF) {
        *p = c;
    } else {
        c -= 0x10000;
        *p = (c >> 10) + 0xD800;
        p++;
        *p = (c & 0x3FF) | 0xDC00;
    }
    p++;
    *arg0 = p;
}

extern u16 *D_00362CF0[];
u32 func_0018AD70(u32 a, u32 b) {
    u32 v = 0;
    b &= 0xFFFF;
    if (a <= 0xFFFF) {
        v = D_00362CF0[0][a];
    }
    return v ? v : b;
}

extern s32 D_00362CE4[];
s32 func_0018ADD8(s32 a) {
    s32 t = D_00362CE4[0];
    D_00362CE4[0] = a;
    return t;
}

typedef struct O { char pad[0x350]; s32 a, b, c; } O;
void func_0018D2F0(O *);
void func_0018AE08(O *o, s32 a1, s32 a2, s32 a3) {
    o->a = a2;
    o->c = a3;
    o->b = a1;
    func_0018D2F0(o);
}
