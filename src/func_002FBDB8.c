/* identical to func_001A0060 (matched), with its names changed by decompdecomp */
typedef struct { s32 pad[2]; s32 key; } SortItem;
typedef struct { SortItem **items; s32 count; } SortList;

void func_002FBDB8(SortList *dst, SortList *src)
{
    s32 m = src->count;
    s32 k = m;
    if (m != 0) {
        s32 n = dst->count;
        s32 i = n;
        do {
            SortItem *it = src->items[--k];
            while (i != 0 && dst->items[i - 1]->key - it->key > 0) {
                dst->items[i + k] = dst->items[i - 1];
                i--;
            }
            dst->items[i + k] = it;
        } while (k != 0);
        dst->count = n + m;
    }
}
