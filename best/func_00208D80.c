typedef struct { s32 a, b, c; } V3;
typedef struct { char pad14[0x14]; f32 f14; s8 b18; char pad19[3]; f32 f1C; s8 b20; } Prm;
typedef struct { char pad0[0xC]; s32 f0C; char pad10[0x2C]; s32 f3C; char pad40[0xC]; Prm *p4C; char pad50[0xC]; Prm *p5C; char pad60[4]; Prm *p64; } Inf;
typedef struct {
    char pad0[0x1C]; f32 f1C; char pad20[4]; Inf *inf; char pad28[0x10]; s16 s38; char pad3a[0xE];
    char *f48; char pad4c[0x10]; f32 f5C; f32 f60; char pad64[0x44]; f32 fA8; char padAC[4]; f32 fB0;
    char padB4[0x38]; s32 fEC; char padF0[8]; s32 fF8; char padFC[0x12C]; s64 f228; char pad230[0xC]; s16 s23C;
    char pad23e[0x182]; s32 f3C0;
} Obj;
void func_001092F0(void *, s32, f32, f32, f32, f32, f32);
void func_001438A0(void *);
s32 func_00153FA8(void *);
void func_001601F8(void *);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
s64 func_0016C970(s32, s32);
s32 func_00305328(void *, void *, s32, s32);
void ovl_ntgui2_func_00108E58(void *, V3, s16, void *, s32, f32);
extern char D_0034B6B1[];
extern char D_0042C078[];
extern char D_0044B440[];
extern f32 D_0048136C, D_00481370, D_00481374, D_00481378, D_0048137C;
extern s32 D_004844A4;
extern char D_00485308[];
extern char D_00485310[];

void func_00208D80(Obj *p, V3 v, s16 s, s32 n) {
    f32 one = 1.0f;
    char *r;
    s32 t = func_00153FA8(p);
    r = (char *)p + 0x120;
    ovl_ntgui2_func_00108E58(p, v, s, D_0042C078, n, (f32)((t & 7) + (func_00153FA8(p) & 7) + 0x20));
    p->f48 = D_0044B440;
    p->fB0 = 80.0f;
    p->fA8 = D_0048136C;
    p->f1C = 48.0f;
    p->fF8 = D_004844A4;
    p->s38 = s;
    p->fEC = 0;
    p->s23C = 0;
    func_001092F0(p, 1, 8.0f, one, D_00481370, D_00481370, 5.5f);
    func_001637A8(r);
    func_00163830(r, p->inf->f3C, 1);
    func_001601F8(r);
    p->f228 = func_0016C970(p->inf->f0C, 0);
    func_001438A0(p);
    {
    f32 g = D_00481374, h = D_00481378, k = D_0048137C;
    Prm *a = p->inf->p4C;
    a->b18 = 2;
    a->f14 = g;
    a = p->inf->p4C;
    a->b20 = 1;
    a->f1C = g;
    a = p->inf->p64;
    a->b18 = 1;
    a->f14 = h;
    a = p->inf->p5C;
    a->b18 = 4;
    a->f14 = k;
    a = p->inf->p5C;
    a->b20 = 1;
    a->f1C = k;
    }
    if (func_00305328(D_0034B6B1, D_00485308, 1, 4)) {
        p->f3C0 = 1;
        p->f60 = -1.0f;
        p->f5C = one;
    } else if (func_00305328(D_0034B6B1, D_00485310, 1, 4)) {
        p->f3C0 = 2;
    }
}
