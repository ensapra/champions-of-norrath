#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct {
    char pad_0[0x9A8];
    s32 unk_9A8;
} GuiObj;
s32 func_0014B41C(GuiObj *, s32);
GuiObj *func_0014D29C();
extern s32 D_0047FBF4;
s64 func_001AD230(s32, s16, s32, s32);

s64 func_001ABBA0(void *a, s32 b, s32 c) {
    s64 r = func_001AD230(F(a, s32, 0x54), F(a, s16, 14), b, c);
    s32 x = (s32)r;
    u16 f = F(a, u16, 12);
    if (r == -1) f &= 0xEFFF;
    else { F(a, s32, 0x50) = x; f |= 0x1000; }
    F(a, u16, 12) = f;
    return r;
}

void func_001553C8(u8 *o) {
    s32 base = F(o, s32, 0x5D4);
    F(o, s32, 0x828) = F(o, s32, 0x810) + F(o, s32, 0x880) + (base + F(o, s32, 0x5A0)) + F(o, s32, 0x878);
    F(o, s32, 0x82C) = F(o, s32, 0x814) + F(o, s32, 0x888) + (base + F(o, s32, 0x5A4)) + F(o, s32, 0x87C);
}

void func_00155358(u8 *o, s32 a) {
    s32 base = F(o, s32, 0x5D4);
    void *vt = F(o, void *, 0x4C);
    ((void (*)(s32, s32, s32, void *))F(vt, void *, 0x124))(a,
        F(o, s32, 0x810) + F(o, s32, 0x880) + (base + F(o, s32, 0x5A0)) + F(o, s32, 0x878),
        F(o, s32, 0x814) + F(o, s32, 0x888) + (base + F(o, s32, 0x5A4)) + F(o, s32, 0x87C),
        o + 0x818);
}

s32 func_00152320(void) {
    GuiObj *obj = func_0014D29C();
    s32 *p;
    if (obj == NULL || !func_0014B41C(obj, D_0047FBF4)) {
        return 0;
    }
    p = &obj->unk_9A8;
    if (p == NULL) {
        return 0;
    }
    return *p != 0;
}
