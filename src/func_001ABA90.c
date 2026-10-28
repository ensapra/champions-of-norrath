s32 func_001ABA90(void *a, u8 *p) {
    u32 fl = *(u32*)(p + 0xC);
    u64 v;
    if (!(fl & 0x20)) return 0;
    if (fl & 8) return 0;
    if (fl & 0x40) return 0;
    if (fl & 0x1000000) return 0;
    if (*(s16*)(p + 0x318)) return 0;
    v = *(u64*)(p + 0xA0);
    if (v & 0x4000000) return 0;
    if (v & 0x800) return 0;
    return 1;
}
