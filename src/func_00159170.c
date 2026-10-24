typedef struct {
    u8 p0[0x98];
    s32 st;
    u8 p1[0xBF0 - 0x9C];
    s32 bf0;
    u8 p2[0xD0C - 0xBF4];
    s32 d0c;
} Obj;

void func_0015AFAC(Obj *);
void func_0015B210(Obj *);
s32 func_0015B72C();
void ovl_ntgui2_func_0015A7B8(Obj *);

s32 func_001591D8(Obj *o) {
    if (o == NULL) {
        return 0;
    }
    if (o->d0c == 0) {
        return 0;
    }
    func_0015B72C();
    func_0015B210(o);
    o->st = 2;
    func_0015AFAC(o);
    ovl_ntgui2_func_0015A7B8(o);
    return 1;
}

s32 func_00159170(Obj *o) {
    if (o == NULL) {
        return 0;
    }
    if (o->bf0 == 0) {
        return 0;
    }
    if (func_0015B72C() == 0) {
        func_0015B210(o);
        o->st = 2;
        func_0015AFAC(o);
        ovl_ntgui2_func_0015A7B8(o);
    }
    return 1;
}
