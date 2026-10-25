typedef struct {
    u8 pad0[6];
    s16 size;
    u16 flags;
    s16 magic;
    u8 padC[4];
    s32 off;
    u8 pad14[8];
    s32 done;
} Hdr16D278;

#define RELOC(v) (base + ((tbl[(v) >> 17] << 17) + ((v) & 0x1FFFF)))

void func_0016D278(s32 arg0, Hdr16D278 *h, u8 *tbl, s32 base) {
    s32 *o;
    u32 f;
    s32 size;
    s32 *p;
    if (h->done != 0) return;
    h->done = -1;
    h->magic = -0x5805;
    o = (s32 *)RELOC(h->off);
    f = h->flags;
    h->off = (s32)o;
    if (f & 1) {
        *o = RELOC(*o);
        return;
    }
    if (!(f & 0x100)) return;
    size = 0x48;
    p = o;
    *p = RELOC(*p);
    p += 1;
    while (*(s8 *)p != -1) {
        s32 x0 = ((s8 *)p)[0];
        s32 y0 = ((s8 *)p)[1];
        s32 x1 = ((s8 *)p)[2];
        s32 y1 = ((s8 *)p)[3];
        s32 x, y;
        p++;
        size += ((((y1 - y0) << 11) + 0x800) * (x1 - x0 + 1)) / 128 + 6;
        for (y = y0; y <= y1; y++) {
            for (x = x0; x <= x1; x++) {
                *p = RELOC(*p);
                p += 1;
            }
        }
    }
    h->size = size;
}
