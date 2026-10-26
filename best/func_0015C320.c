typedef struct { f32 x, y; s32 handle; s32 a1; f32 sc; s32 a6, a7; } Icon;
typedef struct { char c[11]; } __attribute__((aligned(8))) S11;
typedef struct { char c[13]; } __attribute__((aligned(8))) S13;
s32 func_00165DC0(void *, void *);
void func_00303EB8(void *, void *, void *);
void func_00303F50(void *, void *, ...);
s32 func_003044FC(void *, void *);
s32 func_00304F60(void *, void *, s32);
extern char D_00463198[], D_004631A8[], D_004631B8[], D_004631C8[], D_004631D8[], D_004631E8[], D_004631F8[], D_00463208[];
extern char D_00483E90[], D_00483E98[], D_00483EA0[], D_00483EA8[], D_00483EB0[];
f32 D_0047FF2C;
s32 D_004868B8;
extern Icon D_006023C8[];
void func_0015C320(f32 *pos, s32 a1, char *name, s32 ang, char *s1, char *s2, s32 a6, s32 a7) {
    char buf[256];
    s32 ox = 0, oy = 0, flag = 0;
    if (name) {
        Icon *ic;
        f32 sc;
        if (s1) func_00303F50(s1, D_00483E90, &ox, &oy);
        if (s2) func_00303F50(s2, D_00483E98, &flag);
        if (func_00304F60(name, D_00483EA0, 4) == 0) {
            s32 k = -1;
            s32 r;
            S13 *src;
            if (func_003044FC(name, D_00483EA8) == 0) k = 0;
            else if (func_003044FC(name, D_00463198) == 0) k = 1;
            else if (func_003044FC(name, D_004631A8) == 0) k = 2;
            else if (func_003044FC(name, D_004631B8) == 0) k = 3;
            r = (k - ang / 0x4000 + 4) % 4;
            switch (r) {
            case 0: *(S11 *)buf = *(S11 *)D_004631C8; break;
            case 1: src = (S13 *)D_004631D8; goto cp;
            case 2: src = (S13 *)D_004631E8; goto cp;
            case 3: src = (S13 *)D_004631F8;
            cp: *(S13 *)buf = *src; break;
            }
        } else {
            func_00303EB8(buf, D_00483EB0, name);
        }
        ic = &D_006023C8[D_004868B8];
        ic->x = pos[0];
        ic->y = pos[1];
        ic->x += *(f32 *)&ox;
        ic->y += *(f32 *)&oy;
        ic = &D_006023C8[D_004868B8];
        ic->handle = func_00165DC0(D_00463208, buf);
        sc = D_0047FF2C;
        ic->a1 = a1;
        if (flag == 0) sc = 1.0f;
        D_006023C8[D_004868B8].sc = sc;
        ic = &D_006023C8[D_004868B8++];
        ic->a6 = a6;
        ic->a7 = a7;
    }
}
