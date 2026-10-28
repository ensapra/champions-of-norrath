typedef struct { u16 id; u8 pad[10]; s16 width; s16 kidx; } GRec;
typedef struct { u16 prev; u16 key; s16 amt; } GKern;
typedef struct {
    s16 nrec;
    u8 pad2[6];
    GRec *recs;
    GKern *kern;
    s16 small[0x2A];
    u16 def;
} GFont;
extern u8 D_004844AC;

s32 func_00173140(GFont *f, u16 *s, s32 n) {
    s32 sum = 0;
    s32 prev = -1;
    if (n == 0) return 0;
    if (*s == 0) return 0;
top:
    {
        u16 c = *s;
        s32 code = 0x7FF;
        GRec *r;
        if (c != 10) {
            if (c < 0x100) {
                u16 *e = (u16 *)((u8 *)f + 0x14) + c;
                if ((s16)*e < 0) code = *(u16 *)((u8 *)f + 0x6E);
                else code = *e;
            } else {
                s32 cnt = f->nrec;
                if (cnt > 0) {
                    s32 i = 0;
                    GRec *q = f->recs;
                    do {
                        if (q->id == c) { code = i & 0xFFFF; goto have; }
                        q++;
                        i++;
                    } while (i < cnt);
                }
                code = 0;
            }
        }
    have:
        if (code != 0x7FF) {
            if (code <= 0) {
                r = f->recs;
            } else {
                r = &f->recs[code];
                if (r->kidx >= 0) {
                    GKern *k = &f->kern[r->kidx];
                    if (k->key == code) {
                        for (;;) {
                            if (k->prev == prev) {
                                if ((s8)D_004844AC != 0) sum += k->amt * 16;
                                else sum += k->amt * 8;
                                break;
                            }
                            k++;
                            if (k->key != code) break;
                        }
                    }
                }
            }
            sum += r->width * 16;
            prev = code;
        }
        n--;
        s++;
        if (n != 0 && *s != 0) goto top;
    }
    return sum >> 4;
}
