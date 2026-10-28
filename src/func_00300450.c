typedef struct F { u8 *p; s32 r; s32 w; s32 pad[3]; s32 lbf; } F;
extern s32 func_00309250(s32, F *);

s32 func_00300450(s32 c, F *fp) {
    s32 res;
    F *p = fp;
    s32 cc = c;
    if (--p->w < 0) {
        if (p->w >= p->lbf) {
            *p->p = cc;
            if (*p->p != '\n') {
                res = *p->p++;
                goto out;
            }
            res = func_00309250('\n', fp);
        } else {
            res = func_00309250(c, fp);
        }
    } else {
        *p->p = cc;
        res = *p->p++;
    }
out:
    return res;
}
