extern s32 func_00149360(void *);
extern void func_001493C8(void *, s32);
typedef struct { s32 a, b; } P;
s32 func_00158A94(s32 a) {
    P s;
    s32 c;
    s.a = s.b = a;
    c = func_00149360(&s);
    switch (c) {
    case 0x306F: case 0x3072: case 0x3075: case 0x3078: case 0x307B:
    case 0x30CF: case 0x30D2: case 0x30D5: case 0x30D8: case 0x30DB:
        break;
    default:
        return -1;
    }
    func_001493C8(&s.b, c + 2);
    return 1;
}

typedef struct { u8 pad[0xD24]; s32 d24; } G1;
typedef struct { s32 t, ok, n; } M;
extern s32 func_001517DC(s32, void *, void *);
extern u8 func_001C98F0[];
s32 func_0015826C(G1 *g, s32 a, s32 n, s32 b, s32 c) {
    M m;
    if (n == 0) return 1;
    m.t = 0x15;
    m.ok = 1;
    m.n = n;
    func_001517DC(g->d24, g, &m);
    if (m.ok == 0) return 0;
    return ((s32 (*)(void *, s32, s32, s32))*(void **)(func_001C98F0 + 0x270 + n * 4))(g, a, b, c);
}

typedef struct { u8 pad[0xBC8]; s32 bc8; u8 p2[0xC8C-0xBCC]; s32 c8c; u8 p3[0xCC8-0xC90]; u32 cc8; u8 p4[0xD00-0xCCC]; s32 d00; } G2;
extern s32 func_0014D29C();
extern s32 func_0014F200(s32, u64, void *, void *);
extern void func_0014F288(s32, s32);
extern void func_0015ADA4(void);
void func_001581B0(G2 *g, s32 v) {
    s32 t;
    if (g == 0) return;
    if (g->d00 == v) return;
    g->d00 = v;
    t = g->c8c;
    if (v == 1) {
        if (t != 0)
            func_0014F288(func_0014D29C(), g->c8c);
        if (g->cc8 != 0) {
            g->c8c = func_0014F200(func_0014D29C(g), g->cc8, g, func_0015ADA4);
            g->bc8 = v;
        }
    } else if (t != 0) {
        func_0014F288(func_0014D29C(), g->c8c);
        g->c8c = 0;
    }
}
