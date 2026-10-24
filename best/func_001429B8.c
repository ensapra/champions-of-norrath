typedef struct Vec { s32 *data; s32 size; s32 unk8; s32 count; } Vec;
void func_001428E8(Vec *v);
void func_001429B8(Vec *v, s32 *value) {
    s32 *d;
    s32 val;
    s32 count = v->count;
    if (count >= v->size) {
        func_001428E8(v);
        count = v->count;
    }
    d = v->data;
    val = *value;
    count++;
    v->count = count;
    d[count - 1] = val;
}
