/* identical to func_0011A790 (matched), with its names changed by decompdecomp */
typedef struct {
    s32 *data;
    s32 cap;
    s32 unk8;
    s32 len;
    s32 grow;
} PtrArr;

void func_00143058(PtrArr *, s32, s32);
void func_00143170(PtrArr *p, s32 *src);

PtrArr func_001433B0(PtrArr *src, s32 start, s32 end) {
    PtrArr tmp;
    s32 i;
    func_00143058(&tmp, end - start + 1, src->grow);
    for (i = start; i <= end; i++)
        func_00143170(&tmp, &src->data[i]);
    return tmp;
}
