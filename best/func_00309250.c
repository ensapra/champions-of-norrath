typedef struct R { char pad[0x38]; int didinit; } R;
typedef struct F {
    unsigned char *p; int r; int w; short flags; short file;
    unsigned char *base; int size; int lbfsize;
    char pad[0x38]; R *data;
} F;
extern R *D_00448480[];
extern void func_003001A8(R *);
extern int func_003093C0(F *);
extern int func_002FFDE8(F *);

int func_00309250(int c, F *fp) {
    int n;
    if (fp->data == 0) fp->data = D_00448480[0];
    if (fp->data->didinit == 0) func_003001A8(fp->data);
    fp->w = fp->lbfsize;
    if (((fp->flags & 8) == 0 || fp->base == 0) && func_003093C0(fp)) return -1;
    c = (unsigned char)c;
    n = fp->p - fp->base;
    if (n >= fp->size) {
        if (func_002FFDE8(fp)) return -1;
        n = 0;
    }
    fp->w--;
    *fp->p++ = c;
    if (++n == fp->size || ((fp->flags & 1) && c == '\n')) {
        if (func_002FFDE8(fp)) return -1;
    }
    return c;
}
