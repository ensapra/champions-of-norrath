#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
void ovl_ntgui2_func_00108E58(void *, P12 *, s16, void *, s32, f32);
void func_001092F0(void *, s32, void *, u64, f32, f32, f32, f32, f32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
void func_001438A0(void *);
void func_001091B0(void *);
extern char D_0042B768[];
extern char D_0044E1C0[];
extern f32 D_00480EEC;
extern f32 D_00480EF0;
extern s32 D_004844A4;

void func_001F7C60(void *a, P12 *b, s16 c, s32 d)
{
    P12 copy = *b;
    void *q = (char *)a + 0x120;
    u64 fl;
    f32 s;
    f32 one;
    f32 t;
    void *vt;
    s32 g;
    ovl_ntgui2_func_00108E58(a, &copy, c, D_0042B768, d, 10.0f);
    vt = D_0044E1C0;
    F(a, s8, 0x28) = 50;
    F(a, s8, 0x29) = 50;
    fl = F(a, u64, 0xA0) | ((u64)0x8001 << 18);
    s = D_00480EEC;
    g = D_004844A4;
    one = 1.0f;
    t = D_00480EF0;
    F(a, u64, 0xA0) = fl;
    F(a, f32, 0x1C) = 25.0f;
    F(a, f32, 0xA8) = s;
    F(a, f32, 0xE0) = one;
    F(a, void *, 0x48) = vt;
    F(a, s32, 0xF8) = g;
    F(a, s32, 0xB0) = 0;
    F(a, s32, 0xC0) = 0;
    F(a, s32, 0xEC) = 0;
    F(a, s16, 0x23C) = 0;
    F(a, s32, 0x100) = 0;
    func_001092F0(a, 1, vt, fl, t, s, one, one, one);
    func_001637A8(q);
    func_00163830(q, F(F(a, void *, 0x24), s32, 0x5C), 1);
    func_001438A0(a);
    func_001091B0(a);
}
