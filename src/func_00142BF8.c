/* identical to func_0011A790 (matched), with its names changed by decompdecomp */
typedef struct {
    s32 *data;
    s32 cap;
    s32 unk8;
    s32 len;
    s32 grow;
} PtrArr;

void func_001428A0(PtrArr *, s32, s32);
void func_001429B8(PtrArr *p, s32 *src);

PtrArr func_00142BF8(PtrArr *src, s32 start, s32 end) {
    PtrArr tmp;
    s32 i;
    func_001428A0(&tmp, end - start + 1, src->grow);
    for (i = start; i <= end; i++)
        func_001429B8(&tmp, &src->data[i]);
    return tmp;
}
