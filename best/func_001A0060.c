typedef struct {
    s32 pad[2];
    s32 key;
} SortItem;

typedef struct {
    SortItem **items;
    s32 count;
} SortList;

void func_001A0060(SortList *dst, SortList *src)
{
    s32 m = src->count;
    s32 k = m;

    if (m != 0) {
        s32 n = dst->count;
        SortItem **a = dst->items;
        SortItem **s = src->items + m;
        s32 i = n;
        do {
            SortItem *it = *--s;
            k--;
            while (i != 0 && a[i - 1]->key - it->key > 0) {
                a[i + k] = a[i - 1];
                i--;
            }
            a[i + k] = it;
        } while (k != 0);
        dst->count = n + m;
    }
}
