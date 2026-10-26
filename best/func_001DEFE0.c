typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x48]; void *vt; } Fx;
extern char D_0044AC90[];
extern char D_0046D020[];
extern char D_0046D030[];
extern char D_0046D060[];
u32 D_00483E5C;
extern char D_00485098[];
Fx *func_001441B8(s32);
void func_00149068(Fx *, V3 *, char *, char *, char *, s32, s32, s32, f32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_00165DC0(char *, char *);
void func_0016C238(s32, s32, V3 *, s16, s32, V3 *, V3 *, s32, f32);
s32 func_0016CD50(s32);
void func_0024D4F8(s32, V3 *, f32);
void func_00303EB8(char *, char *, s32);

void func_001DEFE0(s32 ctx, s32 s1, V3 *p, s16 ang, f32 cnt, f32 f1, f32 f2) {
    V3 pos;
    char buf[64];
    V3 pt, tmp, dd, pt2;
    s32 n = (s32)cnt;
    s32 q, acc = 0, kind, r;
    Fx *fx;
    pos = *p;
    q = func_0016CD50(ctx) / n;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    func_00303EB8(buf, D_0046D060, (D_00483E5C >> 16) % 3 + 1);
    func_0024D4F8(func_00165DC0(D_00485098, buf), &pos, 1.0f);
    if (q == 0 || n <= 0) return;
    do {
        kind = 2;
        acc = (acc + q) % func_0016CD50(ctx);
        func_0016C238(ctx, s1, &pos, ang, acc, &pt, &tmp, 0, f1);
        D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
        r = ((D_00483E5C >> 16) % 10) & 0xFFFF;
        if (r != 0) kind = (r >= 3) ? 4 : 3;
        if (f2 != 0.0f) {
            f32 c = func_0015A070(ang) * f2;
            f32 s = func_0015A100(ang) * f2;
            dd.x = c;
            dd.y = s;
            dd.z = 0.0f;
            pt.z += dd.z;
            pt.x += c;
            pt.y += dd.y;
        }
        fx = func_001441B8(0x248);
        if (fx) {
            pt2 = pt;
            func_00149068(fx, &pt2, D_00485098, D_0046D020, D_0046D030, kind, 0x30A, 0, 1.0f);
            fx->vt = D_0044AC90;
        }
    } while (--n > 0);
}
