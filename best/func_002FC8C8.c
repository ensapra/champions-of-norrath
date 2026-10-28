typedef struct Ent { s32 pad0, pad1; u32 start; u32 size; } Ent;
typedef struct Node {
    u32 lo, hi;
    s32 f8;
    s32 *arr;
    s32 count;
    struct Node *next;
} Node;
extern s32 D_00444A34[];
extern Node *D_008EAB18[];
extern void WaitSema_2(s32);
extern void SignalSema_2(s32);
extern void *func_002FC708(s32, u32);
extern void func_002FC760(Node *);

void *func_002FC8C8(u32 arg0) {
    Node *n;
    void *r;
    s32 *p;
    s32 f;
    WaitSema_2(D_00444A34[0]);
    for (n = D_008EAB18[0]; n != 0; n = n->next) {
        if (n->lo == 0) func_002FC760(n);
        if (arg0 >= n->lo && arg0 < n->hi) break;
    }
    if (n == 0) {
        SignalSema_2(D_00444A34[0]);
        return 0;
    }
    p = n->arr;
    f = n->f8;
    if (p == 0 || (s32)p == f) {
        func_002FC760(n);
        p = n->arr;
        f = n->f8;
    }
    if (p != 0 && (s32)p != f) {
        u32 lo, hi;
        Ent *e;
        SignalSema_2(D_00444A34[0]);
        hi = n->count;
        lo = 0;
        if (hi == 0) return 0;
        do {
            u32 mid = (lo + hi) >> 1;
            e = (Ent *)n->arr[mid];
            if (arg0 < e->start) {
                hi = mid;
            } else {
                lo = mid + 1;
                if (arg0 < e->start + e->size) return e;
            }
        } while (lo < hi);
        return 0;
    }
    if (p != 0) {
        s32 *pp = n->arr;
        while (1) {
            r = func_002FC708(*pp, arg0);
            pp++;
            if (r != 0 || *pp == 0) break;
        }
    } else {
        r = func_002FC708(f, arg0);
    }
    SignalSema_2(D_00444A34[0]);
    return r;
}
