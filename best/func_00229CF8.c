typedef struct { f32 x, y, z; } V3;
typedef struct E E;
extern char D_0042CE60[];
extern char D_0044B260[];
f32 D_00481828, D_0048182C, D_00481830, D_00481834, D_00481838, D_0048183C;
f32 D_00481840, D_00481844, D_00481848, D_0048184C;
s32 D_004844A4;
extern void ovl_ntgui2_func_00108E58(E *, V3, s16, char *, s32, f32);
extern void func_001091B0(E *);
extern void func_001092F0(E *, s32, s64, s32, f32, f32, f32, f32, f32);
extern void func_001128A8(E *, s32, s32, s32, s32, s32, f32, f32, f32, f32);
extern void func_001438A0(E *);
extern void func_001637A8(void *);
extern void func_00163830(void *, s32, s32);
extern s64 func_0016C970(s32, s32);
#define AT(t, o) (*(t *)((char *)e + (o)))

typedef struct { char pad[0x10]; s16 a[4]; s16 b[4]; s8 f0, f1; char pad2[0x1E]; struct { s16 h; char pad[6]; } w[4]; } Q;

void func_00229CF8(E *e, V3 v, s16 a, s32 b) {
    s32 i, g;
    s64 t;
    Q *q = (Q *)((char *)e + 0x410);
    f32 f21, f22;
    ovl_ntgui2_func_00108E58(e, v, a, D_0042CE60, b, 10.0f);
    AT(char *, 0x48) = D_0044B260;
    for (i = 3; i >= 0; i--)
        q->w[i].h = -1;
    q->f0 = -1;
    q->f1 = -1;
    for (i = 0; i < 4; i++) {
        q->a[i] = 0;
        q->b[i] = 0;
    }
    AT(s8, 0x28) = 0x50;
    t = AT(s64, 0xA0) | ((s64)0x8080 << 22);
    f22 = D_0048182C;
    g = D_004844A4;
    AT(f32, 0x1C) = 20.0f;
    AT(s8, 0xAC) = 9;
    AT(f32, 0xA8) = D_00481828;
    AT(s32, 0xF8) = g;
    AT(s64, 0xA0) = t;
    AT(s32, 0xD8) = 1;
    AT(f32, 0xE0) = f22;
    AT(s32, 0xB0) = 0;
    AT(s32, 0xC0) = 0;
    AT(s32, 0xEC) = 0;
    AT(s16, 0x23C) = 0;
    AT(s32, 0x3C4) = 0;
    AT(s32, 0x3C8) = 0;
    func_001092F0(e, 1, t, g, 24.0f, D_00481830, D_00481834, D_00481838, 10.5f);
    AT(s32, 0xF4) = 0;
    f21 = D_0048183C;
    AT(s64, 0x228) = func_0016C970(*(s32 *)(AT(char *, 0x24) + 0xC), 0);
    func_001637A8((char *)e + 0x120);
    func_00163830((char *)e + 0x120, *(s32 *)(AT(char *, 0x24) + 0x44), 1);
    func_001438A0(e);
    func_001128A8(e, 3, 1, 0, 0, 0, D_00481840, 0.0f, 0.0f, 0.0f);
    func_001128A8(e, 4, 1, 2, 4, 0, f21, D_00481844, f22, 0.0f);
    func_001128A8(e, 5, 1, 0, 0, 0, D_00481848, 0.0f, 0.0f, 0.0f);
    func_001128A8(e, 6, 1, 2, 0, 0, f21, D_0048184C, 0.0f, 0.0f);
    AT(f32, 0x68) = 0.5f;
    AT(f32, 0x58) = 0.5f;
    AT(f32, 0x5C) = 0.5f;
    AT(f32, 0x60) = 0.5f;
    AT(f32, 0x64) = 0.5f;
    func_001091B0(e);
}
