typedef struct {
    u16 swap : 1;
    u16 alt : 1;
    u16 pad : 6;
    u16 code : 8;
    u16 v[4];
} Ent2E78D0;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
} Flags2E78D0;

u32 func_002E78D0(s32 code, Flags2E78D0 flags, Ent2E78D0 *tbl, s32 n)
{
    u32 c = code & 0xFF;
    u32 hi = 0x80000000;
    s32 lo = 0;
    s32 hiIdx = n - 1;
    s32 mid;
    s32 mode;

    while (lo <= hiIdx) {
        mid = (lo + hiIdx) / 2;
        if (c < tbl[mid].code) {
            hiIdx = mid - 1;
        } else if (tbl[mid].code < c) {
            lo = mid + 1;
        } else {
            if (tbl[mid].alt) {
                hi |= 0x40000000;
                if (!flags.b2) break;
            }
            if (flags.b3) {
                mode = flags.b0 ? 3 : 2;
            } else {
                mode = flags.b0 ? 1 : 0;
                if (flags.b1) mode ^= tbl[mid].swap;
            }
            switch (mode) {
            case 1: return tbl[mid].v[1];
            case 2: return tbl[mid].v[2];
            case 3: return tbl[mid].v[3];
            default: return tbl[mid].v[0];
            }
        }
    }
    return c | hi;
}
