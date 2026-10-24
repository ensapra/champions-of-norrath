/* identical to func_00142E68 (matched), with its names changed by decompdecomp */
typedef struct Vec { s32 *data; s32 size; s32 unk8; s32 count; } Vec;
void func_001430A0(Vec *v);
void func_00143620(Vec *v, Vec *src) {
    s32 n = src->count;
    s32 c;
    s32 *d, *s;
    s32 i;
    while (v->size < v->count + n)
        func_001430A0(v);
    c = v->count;
    if (n > 0) {
        s = src->data;
        d = (s32 *)((s32)(c << 2) + (s32)v->data);
        i = n;
        do { *d++ = *s++; } while (--i);
    }
    v->count = c + n;
}
