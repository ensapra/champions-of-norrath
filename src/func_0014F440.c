typedef struct Node { struct Node *next, *prev, *child; s32 pad, value; } Node;
void func_0014B6F4(s32);
void func_0011B9E0(void *);
void func_0014B8E0(void *, void *);
void func_0014F440(u8 *a) {
    Node *h = (Node *)(a + 0x840);
    Node *p = h;
    Node *q, *n, *c;
    if (h->child != h) {
        do {
            p = p->child;
            func_0014B6F4(p->value);
        } while (p->child != h);
    }
    while (((Node *)(a + 0x9b4))->next != (Node *)(a + 0x9b4)) {
        q = ((Node *)(a + 0x9b4))->next;
        while (q != (Node *)(a + 0x9b4)) {
            n = q->next;
            c = q->child;
            q->next->prev = q->prev;
            q->prev->next = q->next;
            func_0011B9E0(q);
            q = n;
            func_0014B8E0(c, a);
        }
    }
    func_0014B8E0(a, 0);
}
