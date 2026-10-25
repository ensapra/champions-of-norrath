typedef struct Node { struct Node *next; struct Node *prev; struct Node *child; s32 pad; s32 value; } Node;
void func_0014B6F4(s32); void func_0011B9E0(void*); void func_0014B8E0(void*,void*);
void func_0014F440(u8 *a) {
    Node *head = (Node *)(a + 0x840);
    Node *p = head;
    Node *q, *c, *end;
    if (head->child != head) {
        do {
            p = p->child;
            func_0014B6F4(p->value);
        } while (p->child != head);
    }
    while (((Node *)(a + 0x9b4))->next != (Node *)(a + 0x9b4)) {
        q = *(Node **)(a + 0x9b4);
        end = (Node *)(a + 0x9b4);
        while (q != end) {
            Node *n = q->next;
            c = q->child;
            n->prev = q->prev;
            q->prev->next = q->next;
            func_0011B9E0(q);
            q = n;
            func_0014B8E0(c, a);
        }
    }
    func_0014B8E0(a, 0);
}
