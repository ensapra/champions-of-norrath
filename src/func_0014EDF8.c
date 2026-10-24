s32 func_0014EDF8(u8 *o, s32 x0, s32 y0, s32 x1, s32 y1) {
    s32 dx = x1 - x0;
    s32 dy = y1 - y0;
    if (*(s32 *)(o + 0x5FC) != 0)
        return 1;
    if (dx >= *(s32 *)(o + 0xB8) && dx < *(s32 *)(o + 0xC0)) {
        if (dy >= *(s32 *)(o + 0xBC) && dy < *(s32 *)(o + 0xC4))
            return 1;
    }
    return 0;
}
