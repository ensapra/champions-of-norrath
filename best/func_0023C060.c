typedef struct {
    s64 v;
} __attribute__((packed)) S64Pack;
typedef struct {
    S64Pack a;
    s32 b;
} L12;
extern char D_0044F9A8[];
s32 D_004844A4;
s32 func_00180260(void);
void func_00143830(void *);
s32 func_001411F0(void *, void *, s32, s32);

typedef struct {
    u8 p0[0xC];
    s32 flags;
    u8 p1[0x38];
    void *vt;
    s32 f4C;
    s32 f50;
    s32 f54;
} Obj;

void func_0023C060(Obj *o, void *arg1) {
    L12 loc;
    s32 r, g;
    loc = *(L12 *)arg1;
    func_001411F0(o, &loc, 0, 0);
    o->vt = D_0044F9A8;
    o->flags |= 9;
    r = func_00180260();
    g = D_004844A4 + 0x3C;
    o->f54 = r;
    o->f4C = 0;
    o->f50 = g;
    func_00143830(o);
}
