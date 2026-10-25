typedef struct { u32 code; u32 flags; u8 p8[8]; s32 x10; u8 p14[8]; s32 x1C; u8 p20[4]; } Ent;
typedef struct {
    u8 p0[0x5AC]; s32 x5AC;
    u8 p5B0[0x8D4-0x5B0]; s32 x8D4;
    u8 p8D8[0xB80-0x8D8]; Ent *ent;
    u8 pB84[0xBF0-0xB84]; s32 cnt; s32 base; s32 r0; s32 r1;
    u8 pC00[0xD0C-0xC00 + 0]; 
} W;

void func_0015B520(W *w) {
    Ent *p = w->ent;
    s32 idx = -1;
    s32 last = 0;
    s32 i = 0;
    s32 base, cnt, n, lim, a;
    if (*(s32 *)((u8 *)w + 0xD0C) == 0) {
        w->r0 = 0;
        w->r1 = 0;
        return;
    }
    base = w->base;
    cnt = w->cnt;
    w->r0 = base;
    w->r1 = base;
    if (cnt > 0) {
        for (;;) {
            u32 c;
            if (p->flags & 0x50) { idx = i; break; }
            c = p->code;
            if (c >= 0x80) {
                n = c < 0xE0 ? 1 : c < 0xF0 ? 2 : c < 0xF8 ? 3 : 0;
                i += n;
                p = (Ent *)((u8 *)p + n * 36);
            }
            i++;
            p++;
            if (i >= cnt) break;
        }
    }
    if (idx >= 0) {
        w->r0 = base + p->x1C;
        w->r1 = p->x1C;
        cnt = w->cnt;
        if (i < cnt) {
            for (;;) {
                u32 c;
                w->r1 = p->x1C;
                last = p->x10;
                if (!(p->flags & 0x50)) {
                    if (i < w->cnt) goto out;
                    break;
                }
                c = p->code;
                if (c >= 0x80) {
                    n = c < 0xE0 ? 1 : c < 0xF0 ? 2 : c < 0xF8 ? 3 : 0;
                    i += n;
                    p = (Ent *)((u8 *)p + n * 36);
                }
                i++;
                p++;
                if (i >= cnt) break;
            }
        }
        w->r1 += last;
out:
        lim = w->x5AC - (w->x8D4 + *(s32 *)((u8 *)w + 0xCF0)) * 2;
        a = w->r0;
        w->r1 += base;
        if (a < 0) w->r0 = 0;
        else if (a > lim) w->r0 = lim;
        if (w->r1 < 0) { w->r1 = 0; return; }
        if (w->r1 > lim) w->r1 = lim;
    }
}
