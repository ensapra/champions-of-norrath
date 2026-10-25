void func_00166EA4(u8 *o) {
    s32 l = *(s32 *)(o + 0x5EB0);
    s32 r = *(s32 *)(o + 0x5EB4);
    s32 t = *(s32 *)(o + 0x5EB8);
    s32 b = *(s32 *)(o + 0x5EBC);
    s32 m = *(s32 *)(o + 0x5ED0) * 3 / 4;
    s32 w = *(s32 *)(o + 0x5AC);
    s32 h = *(s32 *)(o + 0x5B0);
    s32 x, y;
    if (w < (l + r) * 2) {
        l = l * w / ((l + r) * 2);
        r = r * w / ((*(s32 *)(o + 0x5EB0) + r) * 2);
    }
    if (h < (t + b) * 2) {
        t = t * h / ((t + b) * 2);
        b = b * h / ((*(s32 *)(o + 0x5EB8) + b) * 2);
    }
    x = *(s32 *)(o + 0x5A0) + *(s32 *)(o + 0x5D4);
    y = *(s32 *)(o + 0x5A4) + *(s32 *)(o + 0x5D4);
    *(s32 *)(o + 0xC4) = y + h - b + m;
    *(s32 *)(o + 0xB8) = x + l - m;
    *(s32 *)(o + 0xBC) = y + t - m;
    *(s32 *)(o + 0xC0) = x + w - r + m;
}
