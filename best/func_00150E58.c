typedef struct { u8 p0[0x4C]; u8 *vt; u8 p1[0x4EC-0x50]; s32 i4ec; u8 p2[0x5A0-0x4F0]; s32 a5a0; s32 a5a4; u8 p3[0x5D4-0x5A8]; s32 a5d4; u8 p4[0x640-0x5D8]; u8 e640[0x1000]; } O;
typedef struct { u8 p0[0x4C]; u8 *vt; u8 p1[0x5A0-0x50]; s32 a5a0; s32 a5a4; u8 p3[0x5D4-0x5A8]; s32 a5d4; u8 p4[0x810-0x5D8]; s32 a810; s32 a814; s32 a818; } P;
void func_00150BB8(void *o) {
    s32 *p = (s32 *)o;
    s32 x = *(s32 *)((u8 *)o + 0x810) + *(s32 *)((u8 *)o + 0x5A0);
    s32 y = *(s32 *)((u8 *)o + 0x814) + *(s32 *)((u8 *)o + 0x5A4);
    s32 z = *(s32 *)((u8 *)o + 0x5D4);
    *(s32 *)((u8 *)o + 0x82C) = y + z;
    *(s32 *)((u8 *)o + 0x828) = x + z;
}

void func_00150E58(P *o, s32 a1) {
    u8 *vt = o->vt;
    s32 x = o->a810 + o->a5a0;
    s32 y = o->a814 + o->a5a4;
    s32 z = o->a5d4;
    ((void (*)(s32, s32, s32, void *))*(void **)(vt + 0x124))(a1, x + z, y + z, &o->a818);
}

extern s32 D_0047FC30[], D_0047FC34[];
void func_00150914(u8 *o) {
    s32 i = *(s32 *)(o + 0x4EC);
    u8 *e = o + i * 0xA0;
    *(s16 *)(e + 0x650) = (0x800 - (D_0047FC30[0] >> 1)) * 16 - *(u16 *)(o + 0x828);
    *(s16 *)(e + 0x654) = (0x800 - (D_0047FC34[0] >> 1)) * 16 - *(u16 *)(o + 0x82C);
    *(s64 *)(e + 0x6A0) = *(s64 *)(e + 0x650);
}

extern s32 D_0047FC08[];
void func_00150F74(void);
s32 func_0014B41C(void *, s32);
void func_0014D4C0(void *);
void func_0014D418(void *);
s64 func_00152618(void *);
s64 func_00150EA8(u8 *a, u8 *b) {
    func_00150F74();
    if (func_0014B41C(b, D_0047FC08[0]) != 0) {
        void *p = *(void **)(a + 0x4C);
        p = *(void **)((u8 *)p + 0x128);
        ((void (*)(void *, void *))p)(a, b);
    } else {
        u8 *t = *(u8 **)(b + 0x4C);
        if (*(s32 *)(t + 0x6C) != 0) {
            void *f = *(void **)(t + 0xEC);
            if (f != 0)
                ((void (*)(void *, s32, s32, s32, s32))f)(b, *(s32 *)(a + 0x830), *(s32 *)(a + 0x834), *(s32 *)(a + 0x838), *(s32 *)(a + 0x83C));
        }
    }
    func_0014D4C0(b);
    func_0014D418(b);
    return func_00152618(a);
}
