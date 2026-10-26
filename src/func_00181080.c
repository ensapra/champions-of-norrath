typedef struct Node { struct Node *next; } Node;
typedef struct Rec { s32 pad0; s32 idx; s32 cnt; void (*fn)(void *); } Rec;
typedef struct Item { u8 pad[6]; s16 time; u8 pad8[6]; u16 ref; } Item;
typedef struct Ent { Node *cur; Node *end; s32 idx; s32 limit; } Ent;
typedef struct Slot { u8 pad[0x10]; Rec *r; u8 pad2[0x2C]; } Slot;
extern s32 D_0037F720[];
extern Node *D_004869F0;
extern s16 D_004869F4;
extern u8 D_00700080[];
extern u8 D_00780080[];
extern s32 D_00780280[];
extern Slot D_00780308[];
#define BASE(n) (D_00700080 + (((u8 *)(n) - D_00780080) << 10))

s32 func_00181080(Ent *e) {
    s32 result = 0;
    s32 i, j;
    Ent *p;
    for (i = 0; i < 4; i++) {
        p = (Ent *)((i << 6) + (s32)e);
        for (j = 0; j < 4; j++, p++) {
            Node *t = p->cur;
            Node *n, *end;
            s32 idx, lim, off;
            u8 *base;
            if (t == 0) continue;
            n = t;
            end = p->end;
            idx = p->idx;
            lim = p->limit;
            base = BASE(n);
            off = D_0037F720[j];
            while (!(n == end && idx == lim)) {
                Item *it = (Item *)(base + idx * 16);
                Rec *r;
                result = 1;
                if (!(it->time + off < D_004869F4)) break;
                r = D_00780308[(s16)it->ref >> 2].r;
                if (r->fn) r->fn(it);
                it->ref = 0;
                if (--r->cnt == 0) {
                    D_00780280[r->idx] = -1;
                    r->idx = -1;
                }
                idx++;
                if ((idx & 0x1F) == 0x1F) {
                    if (idx == 0xFF && n != end) {
                        Node *c = n;
                        n = n->next;
                        idx = 1;
                        c->next = D_004869F0;
                        D_004869F0 = c;
                        base = BASE(n);
                        continue;
                    }
                    idx += 2;
                }
            }
            p->cur = n;
            p->idx = idx;
            if (n == p->end && idx == p->limit) {
                n->next = D_004869F0;
                p->idx = 1;
                p->limit = 0x101;
                D_004869F0 = p->cur;
                p->cur = 0;
                p->end = 0;
            }
        }
    }
    return result;
}
