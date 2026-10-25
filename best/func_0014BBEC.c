typedef struct DNode DNode;
typedef struct Item Item;

struct DNode {
    struct DNode *next;
    struct DNode *prev;
    struct Item *item;
};

struct Item {
    u8 pad[0xAC];
    s32 f_ac;
    s32 f_b0;
    s32 f_b4;
};

u8 *func_001515B8(u8 *arg0, u8 *arg1) {
    u8 *p;

    if (arg1 != 0) {
        p = *(u8 **)(arg1 + 0xC);
    } else {
        p = *(u8 **)(arg0 + 0x84C);
        while (*(s32 *)p == 0) {
            p = *(u8 **)(p + 0xC);
            if (p == (u8 *)(arg0 + 0x840)) {
                return 0;
            }
        }
        return p;
    }
    while (p != 0) {
        if (p == (u8 *)(arg0 + 0x840)) {
            return 0;
        }
        if (*(s32 *)p != 0) {
            return p;
        }
        p = *(u8 **)(p + 0xC);
    }
    return 0;
}

void *func_001521A0(void *, s32);

void func_00151964(u8 *g) {
    void *r = func_001521A0(g, 1);
    if (r != 0) {
        *(s32 *)((u8 *)r + 0x10) = 1;
        *(s32 *)((u8 *)r + 0x14) = *(s32 *)(g + 0xFD4);
        *(s32 *)((u8 *)r + 0x18) = *(s32 *)(g + 0xFD8);
        *(s32 *)((u8 *)r + 0x1C) = *(s32 *)(g + 0xFDC);
    }
}

void func_0011B9E0(DNode *, DNode *);
void func_0014B8E0(Item *, u8 *);

void func_0014F86C(u8 *arg0) {
    DNode *head = (DNode *)(arg0 + 0x9B4);
    DNode *p;
    if (head->next == head) {
        return;
    }
    p = head->next;
    while (p != head) {
        Item *it = p->item;
        DNode *nextp = p->next;
        if (it->f_ac != 0 && it->f_b4 == 0) {
            if (it->f_b0 != 0) {
                nextp->prev = p->prev;
                p->prev->next = nextp;
                func_0011B9E0(p, nextp);
                func_0014B8E0(it, arg0);
                p = nextp;
            } else {
                it->f_b0 = 1;
                p = nextp;
            }
        } else {
            p = nextp;
        }
    }
}

void func_0014BBEC(s32 *a, s32 *b, s32 *c, u8 *p, u8 *q, s32 x, s32 lo, s32 hi) {
    s32 d = hi - lo;
    s32 v = p[0];
    s32 w = hi - x;
    s32 z = q[0];
    s32 t = x - lo;
    if (hi == lo) {
        *a = (v + z) >> 1;
        *b = (p[1] + q[1]) >> 1;
        *c = (p[2] + q[2]) >> 1;
        return;
    }
    *a = (z * t + v * w) / d;
    *b = (q[1] * t + p[1] * w) / d;
    *c = (q[2] * t + p[2] * w) / d;
}
