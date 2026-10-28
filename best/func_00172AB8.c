typedef struct { s16 pad0[6]; s16 w; s16 kern; } Glyph;
typedef struct { u16 prev; u16 id; s16 adv; } Kern;
typedef struct {
    s16 pad0[4];
    Glyph *glyphs;
    Kern *kerns;
    s16 pad1[2];
    s16 map[256];
} Font;
extern s8 D_004844AC;

s32 func_00172AB8(Font *f, s8 *s, s32 n) {
    s16 prev = -1;
    s32 w = 0;
    if (n != 0) {
        if (*s != 0) {
            Glyph *gs = f->glyphs;
            do {
                s16 g = f->map[(u8)*s];
                s32 off = g * 16;
                if (g <= 0) {
                    w += gs->w * 16;
                } else {
                    s16 kn = *(s16 *)((char *)gs + off + 0xE);
                    if (kn >= 0) {
                        Kern *k = &f->kerns[kn];
                        if (k->id == g) {
                            u16 *q = &k->id;
                            while (1) {
                                q += 3;
                                if (k->prev == (u16)prev) {
                                    if (D_004844AC) w += k->adv * 16;
                                    else w += k->adv * 8;
                                    break;
                                }
                                k++;
                                if (*q != g) break;
                            }
                        }
                    }
                    w += *(s16 *)((char *)gs + off + 0xC) * 16;
                }
                n--;
                prev = g;
                s++;
            } while (n != 0 && *s != 0);
        }
        return w >> 4;
    }
    return 0;
}
