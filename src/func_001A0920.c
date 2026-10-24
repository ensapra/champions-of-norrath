typedef struct {
    s32 **arr;
    s32 n;
} L;

void func_001A0920(s32 *p, L *l, s32 *pmin, s32 *pmax)
{
    s32 size = *p;
    s32 min = *pmin;
    s32 max = *pmax;
    s32 next;
    if (size != 0) {
        do {
            if (p[1] != 0) {
                s32 off = p[2];
                if (off != 0) {
                    if (l->arr != 0) {
                        l->arr[l->n++] = p;
                        size = *p;
                    }
                    if ((u32)off < (u32)min)
                        min = off;
                    if ((u32)max < (u32)(off + p[3]))
                        max = off + p[3];
                }
            }
            p = (s32 *)((u8 *)p + size) + 1;
            next = *p;
            size = next;
        } while (next != 0);
    }
    *pmin = min;
    *pmax = max;
}
