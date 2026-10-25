typedef struct {
    char pad0[0x80];
    s32 id;
    s32 a;
    s32 b;
    char pad8C[0x1C];
    void *cb;
    void *cb1;
    void *cb2;
    char padB4[0xC];
} Widget;

extern void func_001050A8(Widget *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00105190(Widget *);
extern void func_00136A10(void);
extern void func_00136C98(void);
extern s32 D_010CE390[];
extern s32 D_010CE3D8[];
extern s32 D_010CE3E8[];

void func_00136CC8(s32 idx)
{
    Widget w;
    s32 i;
    for (i = 0; i < 4; i++) {
        s32 d = i - idx;
        s32 ad = __builtin_abs(d);
        func_001050A8(&w, D_010CE390[i], 0, ad * 4, 0x5A, 0xA, 0, 0, 0, 0);
        w.id = i;
        if (ad == 0) {
            w.a = 0;
            w.b = 8;
            D_010CE3D8[idx] += 0xC;
        } else {
            D_010CE3D8[idx] = D_010CE3D8[idx] - ad * 2 + 0xA;
            D_010CE3E8[idx] += 8 / d;
            w.a = 8 / d;
            w.b = 6 - ad * 2;
        }
        w.cb1 = func_00136A10;
        w.cb2 = func_00136C98;
        func_00105190(&w);
    }
}
