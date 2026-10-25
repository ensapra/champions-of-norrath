typedef struct { s32 a; s32 b; } Ent;
extern s32 func_00143C38(s32);

s32 func_001119D8(u8 *self, u8 *p) {
    u8 *start = p;
    Ent *t;
    s32 i;
    s32 key;
    s32 r;
    s32 x;
    u64 f;

    *(s32 *)p = *(s32 *)(self + 0xF4);
    p += 4;
    *(s32 *)p = (s32)*(f32 *)(self + 0x230);
    p += 4;
    *(s32 *)p = func_00143C38(*(s32 *)(self + 0x37C));
    p += 4;
    if (*(f32 *)(self + 0x230) <= 0.0f) {
        t = *(Ent **)(self + 0x24);
        key = *(s32 *)(self + 0x108 + *(s8 *)(self + 0x124) * 32);
        i = 1;
        while (t[i].a != 0 && t[i].b != key) {
            i++;
        }
        if (t[i].a != 0) {
            r = func_00143C38(t[i].a);
        } else {
            r = -1;
        }
        *(s32 *)p = r;
        p += 4;
    }
    if ((s32)(*(u64 *)(self + 0xA0) & 1)) {
        *(s32 *)p = (s32)*(f32 *)(self + 0x234);
        p += 4;
        *(s32 *)p = *(s8 *)(self + 0x4C);
        p += 4;
    }
    *p++ = *(u8 *)(self + 0x23A);
    f = *(u64 *)(self + 0xA0);
    x = 0;
    if (f & 0x1000000) x = 1;
    if (f & 0x100000000ULL) x |= 2;
    if (f & 0x400000) x |= 4;
    if (f & 0x800000) x |= 8;
    *p++ = x;
    *(u16 *)p = 0;
    p += 2;
    return p - start;
}
