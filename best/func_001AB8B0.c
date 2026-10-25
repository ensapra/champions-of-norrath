typedef struct S {
    s32 o0; s32 o4; s32 o8; u16 fl; s16 e; s32 o10; s32 o14; s32 o18;
    s32 o1C; s32 (*o20)(s32, s32, s32); s32 pad[3]; s32 o30; s32 pad2; s32 o38; s32 o3C; s32 o40[5]; s32 o54;
} S;
typedef struct T { s32 pad[14]; s32 o38; } T;
extern u8 jtbl_004C006C[];
s32 func_001A9750(S *);
void func_001A9A78(void *);
void func_001A9C28(s32, s32);
void func_001AA470(s32, void *);
void func_001AA5F0(S *);
void ovl_ntgui2_func_001AB878(void);

s32 func_001AB8B0(S *s) {
    T *t;
    if (s->o54 == 0) {
        s->o54 = *(s32 *)(jtbl_004C006C + 0x3A14);
    }
    t = (T *)s->o54;
    if (t->o38 == 0) {
        func_001A9A78(t);
    }
    s->o4 = 0;
    if (s->fl & 0x20) return -1;
    if (!(s->fl & 4)) {
        if (!(s->fl & 0x10)) return -1;
        if (s->fl & 8) {
            if (func_001A9750(s)) return -1;
            s->o8 = 0;
            s->o18 = 0;
            s->fl &= 0xFFF7;
        }
        s->fl |= 4;
    } else {
        if (s->o30) {
            if (s->o30 != (s32)&s->o40) {
                func_001A9C28(s->o54, s->o30);
            }
            s->o30 = 0;
            s->o4 = s->o3C;
            if (s->o3C) {
                s->o0 = s->o38;
                return 0;
            }
        }
    }
    if (s->o10 == 0) {
        func_001AA5F0(s);
    }
    if (s->fl & 3) {
        func_001AA470(s->o54, ovl_ntgui2_func_001AB878);
    }
    s->o0 = s->o10;
    {
        s32 r = s->o20(s->o1C, s->o10, s->o14);
        s->fl &= 0xDFFF;
        s->o4 = r;
        if (r > 0) return 0;
        if (r == 0) {
            s->fl |= 0x20;
        } else {
            s->o4 = 0;
            s->fl |= 0x40;
        }
        return -1;
    }
}
