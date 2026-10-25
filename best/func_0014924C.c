s32 func_0014924C(u8 **pp, s32 *out) {
    u8 *p = *pp;
    u8 c = *p++;
    s32 v;
    s32 n, len;
    if (c == 0) return 0;
    v = c;
    if ((s8)c >= 0) {
        len = 1;
        goto done;
    }
    if (c < 0xC0) return -1;
    if (c < 0xE0) { v = c & 0x1F; n = 1; len = 2; }
    else if (c < 0xF0) { v = c & 0xF; n = 2; len = 3; }
    else if (c < 0xF8) { v = c & 7; n = 3; len = 4; }
    else return -1;
    do {
        c = *p++;
        if ((c & 0xC0) != 0x80) return -1;
        v = (v << 6) | (c & 0x3F);
    } while (--n);
done:
    *pp = p;
    if (out) {
        out[0] = v;
        out[1] = len;
    }
    return 1;
}
