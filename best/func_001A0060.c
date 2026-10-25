typedef struct { s32 pad[2]; s32 key; } SortItem;
typedef struct { SortItem **items; s32 count; } SortList;

void func_001A0060(SortList *dst, SortList *src)
{
    s32 m = src->count;
    s32 k = m;
    if (m != 0) {
        do {
            SortItem *it = src->items[--k];
            s32 n = dst->count;
            s32 j = n + k;
            while (n != 0 && dst->items[n - 1]->key - it->key > 0) {
                dst->items[j] = dst->items[n - 1];
                n--;
                j--;
            }
            dst->items[j] = it;
        } while (k != 0);
        dst->count += m;
    }
}
