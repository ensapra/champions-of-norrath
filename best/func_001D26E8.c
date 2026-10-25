typedef struct { s32 a; s32 b; s32 c; s32 d; } Ent;
typedef struct { f32 v; s8 idx; char pad[27]; } Slot;
typedef struct { char pad[0x120]; Slot s[8]; } Obj;
extern Ent D_007D0DC8[];
extern f32 D_0048069C, D_004806A0, D_004806A4, D_004806A8;
extern Obj *D_00485008;
extern s32 D_00485014;
extern s8 D_0048501F;
extern char D_00485050[];
s32 func_00152CC8(void *, char *);
void func_00160128(void *, s32, s32, f32);
void func_001637B0(s32);
s32 func_00163930(void *, s32, s32);

s64 func_001D26E8(void) {
    s32 r;
    if (D_00485008 != 0) {
        if (D_007D0DC8[D_0048501F].b == 0) {
            r = func_00152CC8(D_00485008, D_00485050);
            {
                f32 ga = D_0048069C;
                if (r != 0) {
                    s32 q;
                    f32 g;
                    func_00160128(&D_00485008->s[0], r, 3, ga);
                    q = D_00485014;
                    g = D_004806A0;
                    if (q != 0) {
                        f32 t = (f32)D_007D0DC8[D_0048501F].d * D_004806A4 * 60.0f;
                        func_00160128(&D_00485008->s[0], q, 3, g);
                        D_00485008->s[D_00485008->s[0].idx].v = -t;
                    }
                }
            }
        } else {
            s32 h = D_007D0DC8[D_0048501F].a;
            func_001637B0(h);
            func_00160128(&D_00485008->s[0], h, 0x26, D_004806A8);
            if (D_00485014 != 0) {
                return func_00163930(&D_00485008->s[0], D_00485014, 3);
            }
        }
    }
}
