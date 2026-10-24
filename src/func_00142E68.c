typedef struct Vec { s32 *data; s32 size; s32 unk8; s32 count; } Vec;
void func_001428E8(Vec *v);
void func_00142E68(Vec *v, Vec *src) {
    s32 n = src->count;
    s32 c;
    s32 *d, *s;
    s32 i;
    while (v->size < v->count + n)
        func_001428E8(v);
    c = v->count;
    if (n > 0) {
        s = src->data;
        d = (s32 *)((s32)(c << 2) + (s32)v->data);
        i = n;
        do { *d++ = *s++; } while (--i);
    }
    v->count = c + n;
}
