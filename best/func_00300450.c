typedef struct F { u8 *p; s32 r; s32 w; s32 pad[3]; s32 lbf; } F;
extern s32 func_00309250(s32, F *);
static inline s32 sputc(s32 ch, F *f) {
    s32 res;
    if (--f->w < 0) {
        if (f->w >= f->lbf) {
            *f->p = ch;
            if (*f->p != '\n') {
                res = *f->p++;
                goto out;
            }
        }
        res = func_00309250('\n', f);
    } else {
        *f->p = ch;
        res = *f->p++;
    }
out:
    return res;
}
s32 func_00300450(s32 c, F *fp) {
    return sputc(c, fp);
}
