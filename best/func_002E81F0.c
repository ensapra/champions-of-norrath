#define F(e, t, o) (*(t *)((u8 *)(e) + (o)))

static inline s32 has(u8 *ids, s32 cnt, u8 id) {
    s32 j = 0;
    if (cnt > 0) {
        do {
            u8 v = ids[j];
            j++;
            if (id == v) return 1;
        } while (j < cnt);
    }
    return 0;
}

s32 func_002E81F0(u8 *s, u8 *q) {
    s32 n = F(q, s16, 0x10);
    s32 i = 0;
    s32 ret = 0;
    if (n > 0) {
        u8 *ids = s + 0x104;
        u8 *qid = q + 0x14;
        u8 *w = s + 0x28;
        do {
            u8 id = qid[i];
            if (!has(ids, F(s, s32, 0x100), id)) {
                u8 *b = s + (id >> 3) + 0xE0;
                u8 *h = s + 0x24;
                u32 idx = F(h, u16, 2);
                *b |= 1 << (id & 7);
                if (F(h, u16, 2) < 10) {
                    s32 o = idx * 16;
                    F(w, s32, o) = F(q, s32, 0);
                    ret = 0;
                    F(h + o, s16, 8) = id;
                    F(h + o, s16, 0xC) = q[0xA];
                    F(h + o, s16, 0x10) = 1;
                    F(h + o, s16, 0xE) = q[0xB];
                    F(h, u16, 2) = F(h, u16, 2) + 1;
                } else {
                    ret = 0x8000000D;
                }
            }
            i++;
        } while (i < n);
    }
    return ret;
}
