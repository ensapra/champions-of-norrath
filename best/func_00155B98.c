#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void func_001553C8(u8 *o) {
    s32 x, y;
    x = F(o, s32, 0x810) + F(o, s32, 0x880);
    x += F(o, s32, 0x5D4) + F(o, s32, 0x5A0);
    y = F(o, s32, 0x814) + F(o, s32, 0x888);
    y += F(o, s32, 0x5D4) + F(o, s32, 0x5A4);
    x += F(o, s32, 0x878);
    y += F(o, s32, 0x87C);
    F(o, s32, 0x828) = x;
    F(o, s32, 0x82C) = y;
}

typedef struct {
    u8 p0[0x5A0];
    s32 f5A0, f5A4;
    s32 pad5A8;
    s32 f5AC, f5B0;
    u8 p1[0x5D4 - 0x5B4];
    s32 f5D4;
    u8 p2[0x878 - 0x5D8];
    s32 f878, f87C, f880, f884, f888, f88C;
} Obj3;

void func_00155544(Obj3 *o, s32 *a, s32 *b, s32 *c, s32 *d) {
    s32 t;
    *a = (o->f5D4 + o->f878) + (o->f5A0 + o->f880);
    *b = (o->f5D4 + o->f87C) + (o->f5A4 + o->f888);
    t = o->f5AC - o->f878 * 2 - o->f880 - o->f884;
    *c = (t < 0) ? 0 : t;
    t = o->f5B0 - o->f87C * 2 - o->f888 - o->f88C;
    *d = (t < 0) ? 0 : t;
}

typedef struct {
    s32 type;
    s64 p;
} Item;

typedef struct {
    u8 p0[0x914];
    s32 idx;
    u8 p1[0x99C - 0x918];
    s32 arr[8];
} Obj2;

s32 func_0011B9A8(s32);
void func_001A4738(s32, s32, s32);
s32 func_0014CBF4(s32, Item *, s32);
void func_0011B9E0(s32);

void func_00155AE4(Obj2 *o, s32 unused, s32 src, u32 len) {
    Item it[64];
    s32 buf = 0;
    if (src != 0) {
        buf = func_0011B9A8(((len + 0x10) >> 4) << 4);
        if (buf != 0) {
            func_001A4738(buf, src, len);
            *(u8 *)(buf + len) = 0;
        }
    }
    it[0].p = buf;
    it[0].type = 0xC6;
    func_0014CBF4(o->arr[o->idx], it, 1);
    if (buf != 0) {
        func_0011B9E0(buf);
    }
}

s32 func_00151788(s32, s32);
s32 func_0014B7F0(s32, s32);

void func_00155B98(u8 *o, s32 x) {
    s32 off;
    s32 i;
    func_00151788((s32)(o + 0x910), 1);
    if (*(s32 *)(o + 0x918) != 0) {
        func_0011B9E0(*(s32 *)(o + 0x918));
    }
    off = 0x990;
    if (*(s32 *)(o + 0x91C) != 0) {
        func_0011B9E0(*(s32 *)(o + 0x91C));
    }
    i = 0x27;
    do {
        s32 *q = (s32 *)((u8 *)o + off);
        off += 4;
        i -= 1;
        func_0014B7F0(q[3], x);
    } while (i >= 0);
}
