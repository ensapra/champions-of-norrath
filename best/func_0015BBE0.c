s32 func_0015BBE0(void *self, s32 target) {
    s32 count = *(s32 *)((u8 *)self + 0xBF0);
    void *entry = *(void **)((u8 *)self + 0xB80);
    s32 best = -1;
    if (count <= 0) return best;
    s32 base = target - (*(s32 *)((u8 *)self + 0x5D4) + *(s32 *)((u8 *)self + 0xCF0));
    s32 min = 0;
    s32 i = 0;
    s32 end = count + 1;
    do {
        s32 value;
        if (i == *(s32 *)((u8 *)self + 0xBF0))
            value = *(s32 *)((u8 *)self + 0xB98);
        else
            value = *(s32 *)((u8 *)entry + 0x1C);
        s32 diff = base - (*(s32 *)((u8 *)self + 0xBF4) + value);
        if (diff < 0) diff = -diff;
        if (best < 0 || diff < min) {
            min = diff;
            best = i;
        }
        s32 next = i + 1;
        if ((*(s32 *)((u8 *)entry + 4) & 1) == 0) {
            entry = (u8 *)entry + 0x24;
            i = next + 1;
        } else {
            i = next;
        }
        entry = (u8 *)entry + 0x24;
    } while (i < end);
    *(s32 *)((u8 *)self + 0xB8C) = best;
    *(s32 *)((u8 *)self + 0x98) = 2;
    return best;
}
