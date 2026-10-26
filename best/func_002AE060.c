extern "C" {
struct V { f32 x, y, z; };
extern f32 D_00482C38, D_00482C3C, D_00482C40;
extern char D_008D7720[];
s32 func_001441B8(s32);
s32 func_0015E948(void *);
void func_0016C238(s32, void *, void *, s32, s32, void *, void *, s32, f32);
s32 func_0016CD50(s32);
void func_00180338(s32);
void func_00180380(s32);
void func_00180DA0(void *, void *, void *, f32);
void func_001E5278(s32, V *, s32, s32, V *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

struct VT { s16 off; s16 pad; s32 (*fn)(void *, ...); };

f32 func_002AE060(char *t) {
    s32 i = 0;
    s32 a, b;
    V sp20, sp30, sp40, sp50, sp60, sp70, sp80;
    char *x;
    {
        x = *(char **)(t + 0xC);
        VT *vt = (VT *)(*(char **)(x + 0x48) + 0x80);
        a = func_0016CD50(vt->fn(x + vt->off));
    }
    {
        x = *(char **)(t + 0xC);
        VT *vt = (VT *)(*(char **)(x + 0x48) + 0x80);
        b = vt->fn(x + vt->off);
    }
    func_00180338(*(s32 *)(t + 0x24));
    do {
        s32 h = func_0015E948(t) % a;
        sp50 = *(V *)(*(char **)(t + 0xC) + 0x10);
        func_0016C238(b, *(char **)(t + 0xC) + 0x120, &sp50, *(s16 *)(*(char **)(t + 0xC) + 0x38), h, &sp20, &sp40, 0, 1.0f);
        do {
            sp80.x = 2.0f * ((f32)func_0015E948(t) * 0.0000152587890625f) - 1.0f;
            sp80.y = 2.0f * ((f32)func_0015E948(t) * 0.0000152587890625f) - 1.0f;
            sp80.z = 2.0f * ((f32)func_0015E948(t) * 0.0000152587890625f) - 1.0f;
        } while (sp80.x * sp80.x + sp80.y * sp80.y + sp80.z * sp80.z > 1.0f);
        sp70 = sp80;
        i++;
        sp60.x = sp70.x * 37.0f;
        sp60.y = sp70.y * 37.0f;
        sp60.z = sp70.z * 37.0f;
        sp30 = sp60;
        func_00180DA0(D_008D7720, &sp20, &sp30, 0.0f);
    } while (i < 0xF1);
    func_00180380(*(s32 *)(t + 0x24));
    if (*(f32 *)(t + 0x1C) <= 0.0f) {
        s32 o = func_001441B8(0xBC);
        if (o) {
            V s90, sa0;
            V *c = (V *)(*(char **)(t + 0xC) + 0x10);
            sa0.x = 0.0f; sa0.y = 0.0f; sa0.z = 60.0f;
            s90.x = c->x + 0.0f; s90.y = c->y; s90.z = c->z + 60.0f;
            func_001E5278(o, &s90, 0, 0, &s90, 64.0f, 64.0f, 125.0f, 0, 0, 0, 0, 0, 120.0f, 60.0f, 0.5f, D_00482C38);
        }
        *(f32 *)(t + 0x1C) = D_00482C3C;
    }
    {
        char *e = *(char **)(t + 8);
        VT *vt = (VT *)(*(char **)(e + 0x60) + 0x58);
        return (f32)vt->fn(e + vt->off, 0, (s32)*(s8 *)t, e) * D_00482C40;
    }
}
}
