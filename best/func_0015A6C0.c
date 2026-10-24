typedef struct { s32 type; s32 res; s32 val; } Msg;
typedef struct {
    u8 pad[0xBF0]; s32 count; u8 pad1[0xC84 - 0xBF4]; s32 C84; s32 C88; u8 pad2[0xCA0 - 0xC8C];
    u32 CA0; u8 pad3[0xD1C - 0xCA4]; s32 D1C; s32 D20;
} Obj;
extern u8 func_01109848[];
extern u8 jtbl_004C006C[];
void func_0015AC08(Obj *, s32, s32, s32, s32);
s32 func_0015AD5C(Obj *, s32);
s32 func_0015AD80(Obj *, s32);
s32 func_0016FA70(s32);
void func_001517DC(s32, Obj *, Msg *);
void func_0011B9E0(s32);
void func_0015A764(Obj *);

s32 func_001B7D98(s32 h) {
    u32 idx; u32 max; s32 *tab;
    if (h < 0) {
        idx = h & 0x7FFFFFFF;
        tab = (s32 *)(func_01109848 + 0x4040);
        max = 0x20;
    } else {
        idx = h;
        tab = *(s32 **)(jtbl_004C006C + 0x4F04);
        max = *(u32 *)(jtbl_004C006C + 0x4F08);
    }
    if (idx >= max) return -0x69;
    tab[idx * 4] = 0;
    return 0;
}

void func_0015AB48(Obj *o, s32 i, s32 n) {
    s32 prev = i - 1;
    s32 next = i + n;
    if (prev >= 0 && func_0015AD5C(o, prev)) {
        func_0015AC08(o, prev, 0x20, 1, 0);
    }
    if (next < o->count && (u32)next < o->CA0 && func_0015AD80(o, next)) {
        func_0015AC08(o, next, 0x20, 1, 0);
    }
}

s32 ovl_ntgui2_func_0015A7B8(Obj *o) {
    Msg m;
    if (o->C88 != 0) return 0;
    if (o->D20 == 0) return 1;
    func_0015A764(o);
    m.type = 0x12;
    m.res = 1;
    m.val = 0;
    o->C88 = 1;
    func_001517DC(o->D20, o, &m);
    o->C88 = 0;
    return 1;
}

s32 func_0015A6C0(Obj *o, s32 *p) {
    Msg m;
    s32 r;
    o->C84 = 0;
    if (o->D1C != 0) {
        m.type = 0x13;
        m.res = 1;
        r = func_0016FA70(*p);
        m.val = r;
        if (r == 0) return 0;
        o->C84 = 1;
        func_001517DC(o->D1C, o, &m);
        *p = r;
        if (m.res == 0) {
            func_0011B9E0(r);
            return 0;
        }
    }
    return 1;
}
