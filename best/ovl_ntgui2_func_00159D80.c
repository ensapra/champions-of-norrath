s32 func_0014CE60(s32, s32, s32);
s32 func_00165B8C(s32, s32, s32);
void ovl_ntgui2_func_00159D80(u8 *o) {
    s32 x, y, h, t;
    x = *(s32 *)(o + 0x5A0);
    y = *(s32 *)(o + 0x5A4);
    h = *(s32 *)(o + 0x5B0);
    t = *(s32 *)(o + 0x8D4) + *(s32 *)(o + 0x5D4);
    x += *(s32 *)(o + 0xB84);
    x += t;
    y += *(s32 *)(o + 0xCF4);
    y += t;
    x += *(s32 *)(o + 0xCF0);
    h -= (*(s32 *)(o + 0x8D4) + *(s32 *)(o + 0xCF4)) * 2;
    func_0014CE60(*(s32 *)(o + 0x914), x, y);
    func_00165B8C(*(s32 *)(o + 0x914), x, y + h);
}
