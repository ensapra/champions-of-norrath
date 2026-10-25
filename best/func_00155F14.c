typedef struct Win_155F14 {
    u8 pad0[0x5AC];
    s32 w5AC;
    s32 h5B0;
    u8 pad1[0x914 - 0x5B4];
    s32 count;
    s32 pad918[2];
    s32 spacing;
    s32 pad924[4];
    s32 padL;
    s32 padR;
    s32 padT;
    s32 padB;
    s32 bordX;
    s32 bordY;
    s32 pad94C[2];
    s32 vertical;
    u8 pad2[0x99C - 0x958];
    struct Win_155F14 *child[1];
} Win_155F14;

void func_0014CF0C(Win_155F14 *w, s32 x, s32 y);
void func_0014CF78(Win_155F14 *w, s32 *x, s32 *y);

void func_00155F14(Win_155F14 *w) {
    s32 n = w->count;
    s32 i;
    s32 cw, ch;

    if (w->vertical == 0) {
        s32 mw = 0;
        s32 th = 0;
        for (i = 0; i < w->count; i++) {
            if (w->child[i] != 0) {
                s32 x, y;
                func_0014CF78(w->child[i], &x, &y);
                if (mw < x) mw = x;
                th += y;
            }
        }
        {
            s32 cx, cy;
            th += w->padT + w->padB + w->bordY * 2 + w->spacing * (w->count - 1);
            mw += w->padL + w->padR + w->bordX * 2;
            func_0014CF78(w, &cx, &cy);
            if (cx != mw || cy != th) {
                func_0014CF0C(w, mw, th);
            }
        }
    } else {
        cw = w->w5AC - (w->padL + w->padR + w->bordX * 2);
        ch = (w->h5B0 - (w->padT + w->padB + w->bordY * 2) + w->spacing) / n - w->spacing;
        if (ch < 0) ch = 0;
        for (i = 0; i < n; i++) {
            if (w->child[i] != 0) {
                func_0014CF0C(w->child[i], cw, ch);
            }
        }
    }
}
