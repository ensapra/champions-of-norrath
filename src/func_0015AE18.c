typedef struct { s32 kind; s32 flags; u8 pad[0x1C]; } Item;
typedef struct {
    u8 pad[0x98]; s32 state; u8 pad0[0x604 - 0x9C]; u32 h; u8 pad1[0xB80 - 0x608];
    Item *items; u8 pad2[0x8]; s32 B8C; u8 pad3[0x4]; s32 B94; u8 pad4[0xC90 - 0xB98];
    s32 C90; u8 pad5[0xD0C - 0xC94]; s32 D0C; s32 D10;
} Obj;
extern s32 sceSifGetReg(s32);
extern void func_001ADBA0(void);
extern void func_001B7DF0(s32, s32);
void func_0015AFAC(Obj *);
void func_0015B210(Obj *);
void func_0015BA94(Obj *);
void func_0015BBCC(Obj *);
s32 func_0014D29C(Obj *);
s32 func_0014F200(s32, s64, Obj *, void *);
void func_0015AE6C(Obj *, s32);

s32 func_001B5B20(void) {
    s32 val = sceSifGetReg(4);
    if (val & 0x40000) {
        func_001ADBA0();
        func_001B7DF0(1, 1);
        func_001B7DF0(0, 1);
        return 1;
    }
    return 0;
}

s32 func_0015B0E0(Obj *o) {
    s32 n = o->B8C;
    if (o->B94 < n) {
        func_0015BBCC(o);
        func_0015B210(o);
        o->state = 2;
        n = o->B8C;
    }
    if (n > 0) {
        o->B8C = 0;
        func_0015B210(o);
        o->state = 2;
        if (o->D10 == 0) {
            func_0015AFAC(o);
        } else {
            func_0015BA94(o);
        }
        return 1;
    }
    return 0;
}

void func_0015AF4C(Obj *o, s32 i, s32 v) {
    s32 f = o->items[i].flags & 0x50;
    if (f != v) {
        if (f == 0) {
            if (v != 0) o->D0C++;
        } else if (v == 0) {
            o->D0C--;
        }
    }
}

void func_0015AE18(s32 unused, s64 a) {
    Obj *o = (Obj *)(s32)a;
    func_0015AE6C(o, 1);
    o->C90 = func_0014F200(func_0014D29C(o), o->h, o, func_0015AE18);
}
