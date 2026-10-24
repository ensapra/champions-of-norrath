typedef struct {
    u8 p0[0x98];
    s32 st;
    u8 p1[0xBF0 - 0x9C];
    s32 bf0;
    u8 p2[0xD0C - 0xBF4];
    s32 d0c;
} Obj;

s32 func_001B5C80();
void func_001B5CD8();
s32 func_001B7038(s32, s32);

s32 func_001B7088(s32 a, s32 b) {
    s32 t = func_001B5C80();
    s32 r = func_001B7038(a, b);
    if (t != 0) {
        func_001B5CD8();
    }
    return r;
}

void func_0015AFAC(Obj *);
void func_0015B210(Obj *);
s32 func_0015B72C();
void ovl_ntgui2_func_0015A7B8(Obj *);

s32 func_001591D8(Obj *o) {
    s32 r = 0;
    if (o != NULL && o->d0c != 0) {
        func_0015B72C();
        func_0015B210(o);
        o->st = 2;
        func_0015AFAC(o);
        ovl_ntgui2_func_0015A7B8(o);
        r = 1;
    }
    return r;
}

s32 func_00159170(Obj *o) {
    s32 r = 0;
    if (o != NULL && o->bf0 != 0) {
        if (func_0015B72C() == 0) {
            func_0015B210(o);
            o->st = 2;
            func_0015AFAC(o);
            ovl_ntgui2_func_0015A7B8(o);
        }
        r = 1;
    }
    return r;
}

void func_0015A5A8(Obj *, s32, s32);
void func_0015BE7C(Obj *);

s32 func_00159040(Obj *o, s32 x) {
    s32 r = 0;
    if (o != NULL) {
        func_0015A5A8(o, x, 0);
        func_0015BE7C(o);
        ovl_ntgui2_func_0015A7B8(o);
        r = 1;
    }
    return r;
}
