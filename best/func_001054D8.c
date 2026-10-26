typedef struct { s32 tag; s32 pad; s64 val; } Item;
typedef struct Ent Ent;
struct Ent {
    s32 h, flags, delay, dur, f10, f14, cnt, t;
    s32 x0, y0, x1, y1, f30, a, b, c, d;
    s32 ids[5];
    s32 v0[5];
    s32 v1[5];
    s32 pad4[10];
    void (*cb1)(s32, Ent *);
    void (*cb2)(s32, Ent *);
    s32 pad[1];
};
extern Ent D_010B6800[];
s32 func_00104F90(s32, s32, s32, s32);
void func_00105440(s32);
void func_0014CBF4(s32, Item *, s32);
void func_0014CECC(s32, s32 *, s32 *);
void func_0014CF78(s32, s32 *, s32 *);

void func_001054D8(s32 idx) {
    Item items[20];
    s32 sx, sy, ex, ey;
    Ent *e = &D_010B6800[idx];
    s32 h = e->h;
    s32 t, dur, fl, n, i, k;
    Item *p;
    if (e->cnt < e->delay) {
        e->cnt++;
        return;
    }
    if (e->cnt == e->delay) {
        func_0014CECC(h, &sx, &sy);
        func_0014CF78(e->h, &ex, &ey);
        e->x1 = sx + ex;
        e->y1 = sy + ey;
        e->x0 = sx;
        e->y0 = sy;
        if (!func_00104F90(h, idx, 0, e->f10)) goto fin;
        if (D_010B6800[idx].cb1) D_010B6800[idx].cb1(e->h, e);
        e->cnt++;
    }
    t = e->t;
    dur = e->dur;
    if (dur >= t) {
        fl = e->flags;
        n = 0;
        if (fl & 1) {
            items[0].tag = 9;
            items[1].tag = 0xB;
            n = 2;
            items[0].val = (e->a * t + e->x0 * (dur - t)) / dur;
            items[1].val = (e->b * t + e->y0 * (dur - t)) / dur;
        }
        if (fl & 2) {
            items[n].tag = 0xE;
            items[n + 1].tag = 0x10;
            items[n].val = (e->c * t + e->x1 * (dur - t)) / dur - (e->a * t + e->x0 * (dur - t)) / dur;
            items[n + 1].val = (e->d * t + e->y1 * (dur - t)) / dur - (e->b * t + e->y0 * (dur - t)) / dur;
            n += 2;
        }
        p = &items[n];
        for (k = 0; k < 5; k++) {
            if (e->ids[k]) {
                n++;
                p->tag = e->ids[k];
                p->val = (e->v1[k] * t + e->v0[k] * (e->dur - t)) / e->dur;
                p++;
            }
        }
        if (n > 0) func_0014CBF4(h, items, n);
        if (e->cb2) e->cb2(h, e);
        e->t++;
        if (e->dur < e->t) func_00105440(idx);
        return;
    }
fin:
    func_00105440(idx);
}
