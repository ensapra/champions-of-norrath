extern "C" {
struct V { f32 x, y, z; };
extern s32 D_00452C60[];
extern f32 D_00482ECC;
extern s32 D_004844A4;
void func_001411F0(void *, void *, s32, s32);
void func_0013EF30(void *, void *, void *, s32);
s32 func_0010B1C8(void *);
void func_00113948(void *, void *);
void func_00143830(void *);
void *func_001441B8(s32);
s32 func_00153FA8(void *);
void func_002BA028(void *, s32, void *, void *, void *);
void func_001E5278(void *, V *, s32, s32, V *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_001E6910(void *, V *, s32, s32, s32, s32);

struct VT { s16 off; s16 pad; s32 (*fn)(void *, ...); };

void func_002B94D0(char *t, V *p, s32 a2, char *a3, char *a4) {
    V sp20;
    void *list[64];
    V sp130, sp140, sp150[2], sp170;
    s32 n, r;
    f32 f;
    sp20 = *p;
    func_001411F0(t, &sp20, 0, 0);
    *(s32 **)(t + 0x48) = D_00452C60;
    *(s32 *)(t + 0x4C) = D_004844A4 + 0x3C;
    *(s32 *)(t + 0xC) |= 0x421B;
    {
        VT *vt = (VT *)(*(char **)(a4 + 0x60) + 0x58);
        n = vt->fn(a4 + vt->off, 3, a2) * 12;
    }
    f = (f32)n;
    *(s32 *)(t + 0x50) = n;
    sp130.x = *(f32 *)(t + 0x10) - f;
    sp130.y = *(f32 *)(t + 0x14) - f;
    sp130.z = *(f32 *)(t + 0x18) - f;
    sp140.x = *(f32 *)(t + 0x10) + f;
    sp140.y = *(f32 *)(t + 0x14) + f;
    sp140.z = *(f32 *)(t + 0x18) + f;
    func_0013EF30(&sp130, &sp140, list, 0x40);
    if (list[0]) {
        s32 i = 0;
        do {
            char *o = (char *)list[i];
            i++;
            {
                VT *vt = (VT *)(*(char **)(a3 + 0x48) + 0xA0);
                if (vt->fn(a3 + vt->off, o)) {
                    VT *v2 = (VT *)(*(char **)(a4 + 0x60) + 0x58);
                    r = v2->fn(a4 + v2->off, 0, a2);
                    if (func_0010B1C8(o)) r = r / 2 + 1;
                    if ((f32)func_00153FA8(t) * 0.0000152587890625f * 100.0f < (f32)r) {
                        void *w = func_001441B8(0x20);
                        if (w) func_002BA028(w, a2, a3, o, a4);
                        func_00113948(o, w);
                        {
                            VT *v3 = (VT *)(*(char **)(a4 + 0x60) + 0x58);
                            VT *v4 = (VT *)(*(char **)(o + 0x48) + 0xD8);
                            v4->fn(o + v4->off, v3->fn(a4 + v3->off, 2, a2) * 0x3C);
                        }
                    }
                }
            }
        } while (list[i]);
    }
    {
        void *w = func_001441B8(0xBC);
        if (w) {
            s32 m = *(s32 *)(t + 0x50);
            sp150[0] = *(V *)(t + 0x10);
            func_001E5278(w, sp150, 0, 0, sp150, 86.0f, 128.0f, 250.0f, -32.0f, 0, 0, 0, 0, (f32)(m + 0x18), (f32)(m / 2 + 0x18), D_00482ECC, 1.0f);
        }
    }
    {
        void *w = func_001441B8(0x5C);
        if (w) {
            sp170 = *(V *)(t + 0x10);
            func_001E6910(w, &sp170, 0x3C, 0x56, 0x80, 0xFA);
        }
    }
    func_00143830(t);
}
}
