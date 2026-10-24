s32 func_001ACB40(void);
s32 func_001714D8(s32);
s64 func_001ACB68(void) { s32 v = func_001ACB40(); return func_001714D8(v); }

typedef struct {
    u8 pad[0x52];
    u8 fl;
    u8 pad53;
    s32 x54;
} Win;

extern void *D_00480488;
void func_00198C24(s32);
void func_00196B88(Win *);
void func_00196E00(Win *, s32);
void func_001959B8(Win *, s32, s32);
void func_00195A78(Win *, s32, s32);

static u8 win_b0(Win *w) { return w->fl & 1; }

void func_00195804(Win *w) {
    s32 m[2];
    void *f;
    if (!(u8)(w->fl & 1)) {
        m[0] = 9;
        m[1] = 0;
        f = D_00480488;
        f = *(void **)((u8 *)f + 0x20);
        ((void (*)(s32 *, s32, s32))f)(m, 0, 0);
        func_00198C24(0);
    }
}

void func_00195794(Win *w) {
    w->fl ^= 2;
    func_00196B88(w);
    func_00196E00(w, w->x54);
    if (w->fl & 2) {
        func_001959B8(w, 1, 2);
    } else {
        func_00195A78(w, 1, 2);
    }
    func_00198C24(0xB);
}

void func_00195704(Win *w, u8 c) {
    u8 f = w->fl;
    if (!c) {
        if (!(f & 0x80)) w->fl = f & 0x7E;
    } else {
        if (f & 0x80) w->fl = f & 0x7E;
    }
    if (!win_b0(w)) {
        func_00195A78(w, 2, 2);
        func_00195A78(w, 3, 2);
    }
    func_00196B88(w);
    func_00196E00(w, w->x54);
}
