struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 ax, f32 ay, f32 az) { x = ax; y = ay; z = az; }
    Vec3 operator+(const Vec3 &b) const { return Vec3(x + b.x, y, z + b.z); }
};
struct ObjSlot {
    s16 h;
    s16 pad;
    s32 v;
};
struct Obj {
    u8 pad0[0x10];
    s16 a[4];
    s16 b[4];
    s8 c;
    s8 d;
    u8 pad22[2];
    ObjSlot e[4];
    u8 pad44[0x2C];
    Obj() {
        s32 i;
        for (i = 0; i < 4; i++) e[i].h = -1;
        c = -1;
        d = -1;
        for (i = 0; i < 4; i++) {
            a[i] = 0;
            b[i] = 0;
        }
    }
};
struct Item { u8 pad[0xFC]; f32 vx; f32 vy; };
struct ItemDef { s32 a, b, c, d; };

extern "C" {
extern u32 D_00483E5C;
extern s32 D_00484538;
extern const f32 D_0047FA00;
extern const f32 D_0047FA04;
extern const f32 D_0047FA08;
extern const f32 D_0047FA0C;
extern const f32 D_0047FA10;
extern const f32 D_0047FA14;
extern const f32 D_0047FA18;
extern const f32 D_0047FA1C;
extern f32 D_00484CAC;
extern f32 D_0031F480[][3];
extern ItemDef D_0031F540[];
extern char D_00454330[];
extern char D_00483218[];

f32 func_001D0FF8(void);
f32 func_001D1008(void);
void func_00100A28(Vec3 *pos, s32 n);
void func_00105F60(char *name, Obj *o, s32 a, s32 b);
void func_00107CE8(Obj *o);
s32 func_00105AA8(Obj *o, s16 n, s32 a);
s32 func_00103F28(Obj *o, s32 n, s32 k, s32 m);
s32 func_00104440(Obj *o, s32 n, s32 k, s32 a, s32 m);
void *func_001441B8(s32 size);
s32 func_00108498(Obj *o);
void func_00149068(void *p, Vec3 *pos, char *name, s32 a, s32 b, s32 c, s32 d, Obj *o, f32 s);
void func_00148738(void *p, s32 a);
f32 func_0015A070(s32 a);
f32 func_0015A100(s32 a);
void func_00100E20(Vec3 pos, s32 angle, s32 a2, s32 a3, f32 h, f32 speed, f32 f14, f32 f15, f32 f16, f32 f17);
}

#define RAND() (D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F, (s32)(D_00483E5C >> 16))

static inline Item *Spawn(Obj *o, Vec3 *pos, f32 h)
{
    Item *p = (Item *)func_001441B8(0x248);
    Item *q;
    if (p) {
        Vec3 w = *pos + Vec3(0.0f, 0.0f, h);
        func_00149068(p, &w, D_00454330, D_0031F540[func_00108498(o)].a, D_0031F540[func_00108498(o)].b, 1, 0x441, o, 1.0f);
        q = p;
    } else {
        q = 0;
    }
    return q;
}

void func_00100E20(Vec3 pos, s32 angle, s32 a2, s32 a3, f32 h, f32 speed, f32 f14, f32 f15, f32 f16, f32 f17)
{
    Item *q;
    s32 i, n, k, r, r1, r2, ang, big, cnt, kind;
    f32 t, a, b, fr, m;

    if (D_00484538 >= 2) {
        f14 *= 2.0f;
        f15 *= 1.5;
        f17 *= 2.0f;
    }
    if (f16 < 0.0f) f16 = 0.0f;
    if (f16 > 9.0f) f16 = 9.0f;
    i = (s32)f16;
    t = f16 - (f32)i;
    a = D_0031F480[i][0] * (1.0f - t) + D_0031F480[i + 1][0] * t;
    b = D_0031F480[i][1] * (1.0f - t) + D_0031F480[i + 1][1] * t;
    fr = (f32)RAND() * (1.0f / 65536.0f);
    f16 = 1.0f;
    if (fr < a) f16 = 0.5f;
    if (a + b < fr) f16 = 3.0f;
    n = RAND();
    big = n > 0xEE47;
    k = (n > 0xF9FF) ? 3 : 2;
    n = 1;
    if (big) n = k;
    f14 *= func_001D0FF8();
    for (; n != 0; n--) {
        if ((f32)RAND() < f15 * 65536.0f) {
            func_00100A28(&pos, (s32)((f32)(s32)((u32)RAND() % 40 + 40) * f14 * D_0047FA00));
        }
    }

    if ((f32)RAND() < ((f32)(D_00484538 - 1) * D_0047FA04 + 0.125f) * 65536.0f) {
        r = RAND();
        Obj o;
        if (r < 8000) func_00105F60(D_00483218, &o, -1, 0);
        else func_00107CE8(&o);
        Spawn(&o, &pos, h);
    }

    if ((f32)RAND() < D_0047FA08) {
        Obj o;
        if (a2 == 0) {
            if (!func_00105AA8(&o, (s32)D_00484CAC, 0)) return;
        } else {
            if (!func_00105AA8(&o, (s32)D_00484CAC, a2)) return;
        }
        Spawn(&o, &pos, h);
    }

    if ((f32)RAND() < f17 * 65536.0f) {
        Obj o;
        m = func_001D1008();
        r1 = RAND();
        r2 = RAND();
        f16 = f16 * ((f32)r1 * (1.0f / 65536.0f) * D_0047FA0C + D_0047FA10) * (m * 200.0f);
        if ((f32)r2 < D_0047FA14) f16 *= 3.0f;
        else if ((f32)r2 < D_0047FA18) f16 *= 2.0f;
        cnt = (s32)f16;
        kind = 0;
        if ((u32)RAND() >= 30000) {
            kind = 1;
            if ((u32)RAND() > 59999) kind = 2;
        }
        if ((f32)RAND() < D_0047FA1C || a3 != 0) {
            if (!func_00103F28(&o, cnt * 7, kind, (s32)D_00484CAC)) return;
        } else {
            if (!func_00104440(&o, cnt, kind, -1, (s32)D_00484CAC)) return;
        }
        q = Spawn(&o, &pos, h);
        if (q) {
            ang = (RAND() & 0x3FFF) - 0x2000;
            ang = ang + angle;
            Vec3 d(func_0015A070(ang), func_0015A100(ang), 0.0f);
            q->vx = d.x * 24.0f * speed;
            q->vy = d.y * 24.0f * speed;
            func_00148738(q, 0x441);
        }
    }
}
