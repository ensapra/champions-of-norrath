typedef struct { u8 x[8]; s16 y; } Item;
static inline void swap(Item *p, Item *q) { Item t = *p; *p = *q; *q = t; }
void func_002E7A38(Item *a, s32 lo, s32 hi) {
    s32 i, last;
    if (lo < hi) {
        swap(&a[lo], &a[(lo + hi) / 2]);
        last = lo;
        for (i = lo + 1; i <= hi; i++) {
            if (a[i].x[1] < a[lo].x[1]) {
                last++;
                swap(&a[last], &a[i]);
            }
        }
        swap(&a[lo], &a[last]);
        func_002E7A38(a, lo, last - 1);
        func_002E7A38(a, last + 1, hi);
    }
}
