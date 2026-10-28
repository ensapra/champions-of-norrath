extern char D_004CECB8[], D_004CED70[];
s32 func_001A1568(void *, s32, void *);
s32 func_001A4174(s32, s32);
typedef struct { u8 p0[0x52]; u8 mode; u8 p1[0x15]; u32 count; u8 p2[0xC]; u8 *tab; } T;
s32 func_00195C24(T *p, s32 a1, u8 a2) {
    s32 m = p->mode & 0x7F;
    u32 i;
    s32 off;
    s32 r;
    if (p == 0) func_001A1568(D_004CECB8, 0x54F, D_004CED70);
    i = 0;
    if (p->count != 0) {
        off = 0;
        do {
            s32 tb = (s32)p->tab;
            r = func_001A4174(a1, off + m * 0x30 + tb + 8);
            if (r == 0) {
                u8 *e = (u8 *)(off + (s32)p->tab);
                u8 b = e[0x18C];
                if (!(b & 0x34)) {
                    e[0x18C] = b & ~a2;
                    return r;
                }
            }
            i++;
            off += 0x198;
        } while (i < p->count);
    }
    return 1;
}
