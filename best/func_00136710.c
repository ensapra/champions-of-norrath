typedef struct { s32 a, b, c, d; } R4;
typedef struct { s32 a; s32 pad; s64 z; u8 rest[0x70]; } Q;

extern s32 func_0011BA18(s32);
extern s32 func_00110720(s32, void *);
extern s32 func_001105B0(s32, void *, ...);
extern s32 func_0010F3F8(s32, void *, f32, s32, s32, s32, s32, void *, void *, void *);
extern void func_0014CBF4(s32, void *, s32);
extern s32 func_0010FB30(s32, void *, s32);
extern void func_0014CD0C(s32, s32, void *, s32);
extern void func_0010DE10(s32, s32);
extern void func_0014D270(s32);
extern void func_00137610(void);
extern void func_00137120(void), func_00137020(void), func_00136FE8(void);
extern s32 D_010CE388[], D_010CE390[], D_010CE3A0[], D_010CE3B0[], D_010CE3C0[], D_010CE3D0[];
extern u8 D_004CADE0[], D_004CADF0[], D_001BB730[], D_001BD8AC[];
extern s32 D_001BAC84[];

void func_00136710(void) {
    R4 r;
    Q q;
    u8 buf[0x10];
    s32 *qa = &q.a;
    s32 i = 0, j = 0, y = 0x40;
    D_010CE388[0] = func_00110720(func_0011BA18(0x8E), buf);
    do {
        r.a = 0x90;
        r.b = y;
        y += 0x2C;
        r.c = 0x160;
        r.d = 0x28;
        D_010CE3A0[i] = func_001105B0(D_010CE388[0], &r, 0x28);
        r.b = 6;
        r.a = 0x10;
        r.c = 0x140;
        r.d = 0x1C;
        D_010CE3B0[i] = func_0010F3F8(D_010CE3A0[i], &r, 0.0f, 0, 1, 1, 0, D_004CADE0, D_004CADF0, D_001BB730);
        D_010CE390[i] = func_001105B0(D_010CE3A0[i], &r);
        q.z = 0;
        *qa = 0x11;
        func_0014CBF4(D_010CE390[i], qa, 1);
        r.a = 0;
        r.b = 0;
        D_010CE3C0[i] = func_0010FB30(D_010CE390[i], &r, func_0011BA18(i + 0x8F));
        func_0014CD0C(D_010CE3B0[i], 0x58, (void *)func_00137120, j);
        func_0014CD0C(D_010CE3B0[i], 6, (void *)func_00137020, j);
        func_0014CD0C(D_010CE3B0[i], 7, (void *)func_00136FE8, j++);
        if (D_001BAC84[0] & 4) {
            func_0010DE10(D_010CE3B0[i], func_0011BA18(i + 0x97));
            i++;
        } else {
            s32 *p = &D_010CE3B0[i];
            s32 a = func_0011BA18(i + 0x93);
            i++;
            func_0010DE10(*p, a);
        }
    } while (i < 4);
    D_010CE3D0[0] = func_001105B0(*(s32 *)D_001BD8AC, &r);
    r.a = 0;
    r.b = 0;
    func_0010FB30(D_010CE3D0[0], &r, (s32)D_004CADE0);
    func_0014D270(D_010CE3D0[0]);
    func_00137610();
}
