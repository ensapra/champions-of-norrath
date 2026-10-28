typedef struct {
    u8 pad[0x98]; s32 state; u8 pad0[0xB8C - 0x9C];
    s32 B8C; u8 pad3[0x4]; s32 B94; u8 pad4[0xD10 - 0xB98];
    s32 D10;
} Obj;
void func_0015AFAC(Obj *);
void func_0015B210(Obj *);
void func_0015BA94(s64);
void func_0015BBCC(Obj *);

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
            func_0015BA94((s32)o);
        }
        return 1;
    }
    return 0;
}
