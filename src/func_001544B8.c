typedef struct {
    char pad0[0x4EC];
    s32 buf;
    char pad4F0[0x5AC - 0x4F0];
    s32 w;
    s32 h;
    char pad5B4[0x40C14 - 0x5B4];
    s32 dx;
    s32 dy;
} Ctx;

void func_00171AE0(void *);

void func_001544B8(Ctx *c)
{
    s32 n = 0;
    s32 done = 0;
    if (c->h > 0 && c->w > 0) {
        s32 y;
        s32 b = c->buf ^ 1;
        char *p = (char *)c + b * 0x20040 + 0x950;
        char *q = (char *)c + b * 0x140 + 0x40990;
        s32 x;
        for (y = 0; y < c->h; ) {
            for (x = 0; !done && x < c->w; x += c->dx) {
                func_00171AE0(p);
                p += 0x40;
                func_00171AE0(q);
                n++;
                if (n >= 0x800) {
                    done = 1;
                    break;
                }
            }
            y += c->dy;
            if (done) break;
        }
        func_00171AE0((char *)c + (c->buf ^ 1) * 0x20040 + 0x910);
    }
}
