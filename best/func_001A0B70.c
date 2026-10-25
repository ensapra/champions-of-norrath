typedef struct Ent { s32 pad0, pad4; u32 base; u32 size; } Ent;
typedef struct Node {
    u32 lo;
    u32 hi;
    void *single;
    void **list;
    u32 count;
    struct Node *next;
} Node;
extern s32 jtbl_004C006C[];
extern Node *D_01106FF0[];
void WaitSema(s32);
void SignalSema(s32);
void *func_001A09B0(void *, u32);
void func_001A0A08(Node *);
#define SEMA (*(s32 *)((u8 *)jtbl_004C006C + 0x3F70))

void *func_001A0B70(u32 addr) {
    Node *n;
    void *r;
    void **p;
    u32 lo, hi, mid;
    WaitSema(SEMA);
    n = D_01106FF0[0];
    for (; n != NULL; n = n->next) {
        if (n->lo == 0) func_001A0A08(n);
        if (addr < n->lo) continue;
        if (addr >= n->hi) continue;
        break;
    }
    if (n == NULL) {
        SignalSema(SEMA);
        return NULL;
    }
    if (n->list == NULL || n->list == n->single) func_001A0A08(n);
    if (n->list != NULL) {
        if (n->list != n->single) {
            SignalSema(SEMA);
            hi = n->count;
            lo = 0;
            if (hi == 0) return NULL;
            do {
                Ent *e;
                mid = (lo + hi) >> 1;
                e = (Ent *)n->list[mid];
                if (addr < e->base) {
                    hi = mid;
                } else {
                    lo = mid + 1;
                    if (addr < e->base + e->size) return e;
                }
            } while (lo < hi);
            return NULL;
        }
        p = n->list;
        if (p != NULL) {
            do {
                r = func_001A09B0(*p, addr);
                p++;
            } while (r == NULL && *p != NULL);
        } else {
            r = func_001A09B0(n->single, addr);
        }
    } else {
        r = func_001A09B0(n->single, addr);
    }
    SignalSema(SEMA);
    return r;
}
