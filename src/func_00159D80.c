void func_00159D80(f32 *m, const f32 *v, const f32 *t) {
    m[0] = v[0];
    m[4] = v[1];
    m[8] = v[2];
    m[12] = t[0];
    m[1] = v[3];
    m[5] = v[4];
    m[9] = v[5];
    m[13] = t[1];
    m[2] = v[6];
    m[6] = v[7];
    m[10] = v[8];
    m[14] = t[2];
    m[15] = 1.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[3] = 0.0f;
}

extern s32 D_00484538;
extern s8 D_00486678;
extern u8 D_00408600[];
extern u8 D_007CB770[];
s32 func_00195560(void) {
    s32 n = D_00484538;
    s32 i = 0;
    s32 *x;
    s8 *q;
    if (n > 0) {
        x = (s32 *)D_00408600;
        x = (s32 *)((u8 *)x + 0x54);
        q = (s8 *)D_007CB770;
        q += 0x50;
        do {
            s32 want;
            s32 b;
            s32 v = *x;
            x = (s32 *)((u8 *)x + 0x5DB0);
            if (q[5] != v + 1)
                return 0;
            b = q[6];
            want = 0;
            if (n >= 2 || D_00486678 != 0)
                want = 1;
            if (b != want)
                return 0;
            i++;
            q += 0x58;
        } while (i < n);
    }
    return 1;
}

s32 func_001ABA90(void *a, u8 *p) {
    u32 fl = *(u32 *)(p + 0xC);
    u64 v;
    u32 lo;
    if ((fl & 0x20) == 0)
        return 0;
    if (fl & 8)
        return 0;
    if (fl & 0x40)
        return 0;
    if (fl & 0x1000000)
        return 0;
    if (*(s16 *)(p + 0x318) != 0)
        return 0;
    v = *(u64 *)(p + 0xA0);
    if (v & 0x4000000)
        return 0;
    lo = (u32)v;
    return (lo & 0x800) == 0;
}

typedef struct { u8 pad[0x5588]; s32 x5588; s32 x558C; s32 x5590; s32 x5594; } Big;
extern u8 D_0040DB90[];
s32 func_001ABC60(s32 i, s32 k) {
    u8 **q;
    Big *b;
    s32 r = 0;
    q = *(u8 ***)((u8 *)D_0040DB90 + i * 0x5DB0);
    if (k == 0xB)
        return r;
    if (q != 0 && *(s8 *)(*q + 0x1E) == 4)
        return r;
    r = 1;
    b = (Big *)((u8 *)D_00408600 + i * 0x5DB0);
    if (b->x5590 != 0)
        return r;
    if (b->x5588 != 0)
        return r;
    return b->x5594 != 0;
}
