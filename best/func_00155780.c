typedef struct {
    u8 pad0[0x4D0]; s32 f4D0;
    u8 pad1[0x914 - 0x4D4];
    s32 line; signed char *s1; signed char *s2; s32 pad2; s32 id1; s32 id2;
} W;
void func_001558B0(void *, s32, signed char *, s32);
signed char *func_0016FA70(s32);
void func_00155780(W *w) {
    signed char *p, *q;
    if (w->id1 == 0) w->s1 = 0; else w->s1 = func_0016FA70(w->id1);
    w->id1 = 0;
    if (w->id2 != 0) w->s2 = func_0016FA70(w->id2); else w->s2 = 0;
    p = w->s1;
    w->id2 = 0;
    w->f4D0 = 0;
    w->line = 0;
    if (p != 0) {
        q = p;
        if (*q != 0) {
            while (1) {
                if (*q == 10) {
                    func_001558B0(w, w->line, p, q - p);
                    w->line = w->line + 1;
                    p = q + 1;
                    q = q + 1;
                } else q = q + 1;
                if (*q == 0) break;
                if (!(w->line < 0x28)) break;
            }
        }
        if (w->line < 0x28 && q != p) {
            func_001558B0(w, w->line, p, q - p);
            w->line = w->line + 1;
        }
    }
    {
        s32 n = w->line;
        while (n < 0x28) {
            func_001558B0(w, n, 0, 0);
            n++;
        }
    }
}
