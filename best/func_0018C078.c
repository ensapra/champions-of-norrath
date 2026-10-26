struct Obj {
    char pad[0x48];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
struct Ev { f32 t; s32 id; char pad[12]; };
extern "C" {
extern f32 D_00480188, D_0048018C, D_00480190, D_00480194, D_00480198, D_0048019C, D_004801A0;
s32 D_00483E58;
s8 D_00484319;
s32 D_00484328;
s8 D_00484334;
s32 D_00484344;
s32 D_004843A4;
s32 D_004843A8;
f32 D_004843AC;
s32 D_00486A04;
Obj **D_00486A0C;
s32 D_00486A10;
char *D_00486A14;
Ev *D_00486A18;
s32 D_00486A1C;
f32 D_00486A20;
s32 D_00486A28;
void func_00134F68(s32, s32, s32);
s32 func_001352E8(void);
s32 func_00164130(void *, s32);
void func_0017D500(s32);
void func_00187B38(void *);
s32 func_0024ADB8(s32);
s32 func_0024F3B0(s32);

f32 func_0018C078(f32 t) {
    s32 i, k, n;
    char *r;
    Ev *base;
    for (i = 0; i < D_00486A10; i++) {
        Obj *o = *(Obj **)((char *)D_00486A0C + i * 0x2C);
        D_00483E58 = D_00484328 + i;
        if (o) o->v4();
    }
    func_0017D500(1);
    D_00484328++;
    if (D_00484344 < D_00486A1C) {
        base = D_00486A18;
        if (base[D_00484344].t <= t) {
            do {
                Ev *e = &base[D_00484344++];
                if (!D_00484334 && e->id == 0x3FF9D && D_00484319) {
                    if (!D_004843A8 && !func_0024ADB8(2)) {
                        D_004843A8 = 1;
                        func_00134F68(D_00486A28, 0, 0);
                    }
                    n = func_001352E8();
                    if (D_004843A4 < ((n >= 1) ? n : 1)) {
                        D_00484328--;
                        D_00484344--;
                        t = (f32)D_00484328 * D_00480198;
                        D_00486A20 -= D_00480198;
                        goto done;
                    }
                    D_004843A8 = 0;
                    D_004843A4 = 0;
                }
                func_00187B38(e);
                if (D_00484344 >= D_00486A1C) break;
                base = D_00486A18;
            } while (base[D_00484344].t <= t);
        }
    }
done:
    r = D_00486A14;
    if (r) {
        char *q = r + 0x120;
        k = func_00164130(q, 0x20);
        if (k >= 0) {
            s32 m = func_0024F3B0(2);
            if (m != D_00486A04) {
                f32 a = (f32)(m - 0x400) * D_0048018C;
                f32 b = *(f32 *)(r + (k << 5) + 0x140) * D_00480188 - D_00480194;
                D_00486A04 = m;
                if (__builtin_fabsf(a - b) < D_00480190) {
                    D_004843AC = 0.0f;
                } else if (b < a) {
                    D_004843AC = D_0048019C;
                } else {
                    D_004843AC = D_004801A0;
                }
            }
            if (D_004843AC != 0.0f) {
                for (i = 0; i < q[4]; i++) {
                    *(f32 *)(q + 0x10 + (i << 5) + 0x10) += D_004843AC;
                }
            }
        }
    }
    return t;
}
}
