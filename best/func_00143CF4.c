typedef struct Vec { s32 *data; s32 size; s32 unk8; s32 count; } Vec;
void func_00143858(Vec *v);
void func_00143CF4(Vec *v, s32 pos, Vec *src) {
    s32 n = src->count;
    s32 c, end, *d, *s, *p, i, lim;
    while (v->size < v->count + n)
        func_00143858(v);
    c = v->count;
    end = c + n - 1;
    lim = pos + n;
    if (end >= lim) {
        p = (s32 *)((end << 2) + (s32)v->data);
        do {
            p[1] = p[0];
            end--;
            p--;
        } while (end >= lim);
    }
    if (n > 0) {
        s = src->data;
        d = (s32 *)((pos << 2) + (s32)v->data);
        i = n;
        do { *d++ = *s++; } while (--i);
    }
    v->count = c + n;
}
