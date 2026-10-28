void func_001636A4(u8 *p) {
    s32 i = 0;
    u8 *base = p + *(s32 *)(p + 0x4EC) * 0x1C60;
    u8 *o0 = base + 0x9E0;
    u8 *o1 = base + 0x1330;
    u8 *o2 = base + 0x1C80;
loop: {
        s32 d = 255;
        u8 *p1 = p + 1;
        u8 *p2 = p + 2;
        u8 *p3 = p + 3;
        s32 q = i - (i / 2) * 2;
        s32 j0 = q * 4 + 0x930;
        s32 j1 = q * 4 + 0x934;
        s32 j2 = q * 4 + 0x938;
        u8 *a = o0 + i * 32;
        u8 *b = o1 + i * 32;
        u8 *c = o2 + i * 32;
        a[0] = p[j0];
        a[1] = p1[j0];
        a[2] = p2[j0];
        a[3] = *(s32 *)(p + 0x618) * p3[j0] / d;
        b[0] = p[j1];
        b[1] = p1[j1];
        b[2] = p2[j1];
        b[3] = *(s32 *)(p + 0x618) * p3[j1] / d;
        c[0] = p[j2];
        c[1] = p1[j2];
        c[2] = p2[j2];
        c[3] = *(s32 *)(p + 0x618) * p3[j2] / d;
        i++;
        if (i < 74) goto loop;
    }
}
