/* identical to func_00142A20 (matched), with its names changed by decompdecomp */
typedef struct Vec {
    s32 *data;
    s32 size;
    s32 unk8;
    s32 count;
    s32 grow;
} Vec;

void func_00143858(Vec *v);

void func_00143990(Vec *v, s32 index, s32 *value) {
    s32 count = v->count;
    s32 i;
    s32 *p;
    if (count >= v->size) {
        func_00143858(v);
        count = v->count;
    }
    i = count - 1;
    if (i >= index) {
        p = (s32 *)(i * 4 + (u32)v->data);
        do {
            p[1] = p[0];
            i--;
            p--;
        } while (i >= index);
    }
    p = (s32 *)*value;
    v->count = count + 1;
    v->data[index] = (s32)p;
}
