typedef struct {
    char *key;
    void *val;
    s32 pad;
} Rec00165DC0;

typedef struct {
    u16 n;
    u16 pad;
    Rec00165DC0 rec[1];
} Tbl00165DC0;

typedef struct {
    char name[0x10];
    Tbl00165DC0 *tbl;
    s32 flags;
    u8 pad[0x10];
} Cache00165DC0;

Tbl00165DC0 *func_00165B30(char *);
s32 func_003044FC(char *, char *);
s32 D_00483F8C;
extern Cache00165DC0 D_006CB280[];

static inline Rec00165DC0 *search(Rec00165DC0 *rec, s32 n, char *key) {
    s32 lo = 0;
    s32 hi = n - 1;
    s32 max = hi;
    s32 mid, c;

    do {
        mid = (lo + hi) >> 1;
        c = 1;
        if (mid >= 0) {
            c = -1;
            if (mid <= max) {
                c = func_003044FC(key, rec[mid].key);
            }
        }
        if (c == 0) return &rec[mid];
        if (lo >= hi) return NULL;
        if (c > 0) lo = mid + 1;
        else hi = mid - 1;
    } while (1);
}

void *func_00165DC0(char *arg0, char *arg1) {
    s32 i;
    Tbl00165DC0 *t = NULL;
    Rec00165DC0 *r;

    for (i = 0; i < D_00483F8C; i++) {
        if (func_003044FC(D_006CB280[i].name, arg0) == 0) {
            if (D_006CB280[i].flags & 1) {
                if (func_003044FC((char *)D_006CB280[i].tbl, arg1) == 0) {
                    return (u8 *)D_006CB280[i].tbl + 0x100;
                }
            } else {
                t = D_006CB280[i].tbl;
                break;
            }
        }
    }
    if (t == NULL) {
        t = func_00165B30(arg0);
        if (t == NULL) return NULL;
    }
    r = search(t->rec, t->n, arg1);
    if (r == NULL) return NULL;
    return r->val;
}
