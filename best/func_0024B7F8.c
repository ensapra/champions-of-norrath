typedef struct {
    s32 id;
    f32 v[3];
    f32 f10;
    f32 f14;
    s32 time;
    s32 arg;
    s8 hasV;
} Ent24;

typedef struct {
    s8 word;
    s8 bit;
} BitRef;

typedef struct {
    s32 w[2];
} Bits2;

typedef struct {
    s32 a;
    s16 flags;
    s16 pad[7];
} Ent14;

extern "C" {
extern Ent24 D_007D8AA0[32];
extern BitRef D_0042DDB8[];
extern Ent14 D_007D8F20[];
s32 D_00485944;
s32 D_0048595C;
s32 D_00486BD0;
f32 D_00485934;

void func_0024B710(void);
void func_0024C6A8(s32, f32 *, f32, f32, f32);
void func_0024B570(void);
void func_0024B090(void);
void func_0024D878(void);
void func_0024DA80(void);
void func_00249FB0(void);
s32 func_002E0478(s32, s32, s32, s32);
s32 func_0024ADB8(s32);
void func_0024F5B8(s32, f32);
void func_0024C1C0(void);

void func_0024B7F8(void)
{
    Ent24 *p;
    s32 i;

    func_0024B710();
    p = D_007D8AA0;
    for (i = 31; i >= 0; i--, p++) {
        if (p->time != 0 && p->time <= D_00485944) {
            D_0048595C = p->arg;
            func_0024C6A8(p->id, p->hasV ? p->v : (f32 *)NULL, p->f10, p->f14, 0.0f);
            p->time = 0;
        }
    }
    D_0048595C = -1;
    func_0024B570();
    if (!(D_00485944 & 3)) {
        func_0024B090();
    }
    func_0024D878();
    func_0024DA80();
    func_00249FB0();
    D_00485944++;
    if ((D_00485944 & 7) == 1) {
        Bits2 b;
        Bits2 t;
        Ent14 *e;
        s32 j;
        t.w[0] = func_002E0478(1, 0x8040, 0x1700, 0);
        t.w[1] = func_002E0478(1, 0x8040, 0x1701, 0);
        b = t;
        e = D_007D8F20;
        for (j = 0; j < 43; j++, e++) {
            if ((b.w[D_0042DDB8[j].word] >> D_0042DDB8[j].bit) & 1) {
                if (!(e->flags & 0x10)) {
                    e->flags &= ~4;
                }
            }
        }
    }
    if (!(func_0024ADB8(0) & 0x20)) {
        f32 one = 1.0f;
        f32 f = D_00485934 + D_00485934;
        func_0024F5B8(0, (one <? f) * 0.78125f);
    }
    if (D_00486BD0 > 0) {
        D_00486BD0--;
    }
    if (!(D_00485944 & 0xF)) {
        func_0024C1C0();
    }
}
}
