typedef struct { s32 kind; s32 flags; u8 pad[0x1C]; } Item;
typedef struct {
    u8 pad0[0xB80];
    Item *items;
    u8 pad1[0x8];
    s32 B8C;
    u8 pad2[0x4];
    s32 B94;
    u8 pad3[0xBF0 - 0xB98];
    s32 count;
    u8 pad4[0xD04 - 0xBF4];
    s32 D04;
    u8 pad5[0x4];
    s32 D0C;
} Obj;

void func_0015BBCC(Obj *o) {
    s32 t = o->B94;
    o->B94 = o->B8C;
    o->B8C = t;
}

void func_0015BB8C(Obj *o) {
    s32 i;
    for (i = 0; i < o->count; i++) {
        o->items[i].flags &= 0xAF;
    }
    o->D0C = 0;
}

s32 func_0015B8D0(Obj *o, s32 a1, s32 n) {
    s32 flag;
    s32 cnt = 0;
    Item *p = &o->items[o->B8C];
    flag = o->D04 ? a1 : 0;
    while (n-- != 0 && o->B8C != 0) {
        do {
            s32 f;
            p--;
            cnt++;
            o->B8C--;
            f = p->flags & 0xAF;
            if (flag) f |= 0x50;
            p->flags = f;
        } while ((u32)(p->kind - 0x81) < 0x3F && o->B8C != 0);
    }
    return cnt;
}
