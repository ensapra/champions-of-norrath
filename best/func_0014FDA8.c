typedef struct LNode {
    s32 pad0[2];
    struct LNode *next;
    s32 pad1;
    s32 key;
} LNode;

void func_001529D8(LNode *, LNode *);

void func_0014FDA8(u8 *o, s32 k1, s32 k2) {
    LNode *head;
    LNode *p;
    LNode *n;
    LNode *found = 0;
    if (k1 == k2)
        return;
    p = (LNode *)(o + 0x840);
    head = p;
loop1:
    n = p->next;
    if (n == head)
        goto end1;
    p = n;
    if (k1 != n->key)
        goto loop1;
    found = n;
end1:
    if (found == 0)
        return;
    p = head;
loop2:
    n = p->next;
    if (n == head)
        return;
    p = n;
    if (k2 != n->key)
        goto loop2;
    if (n->next != found)
        func_001529D8(n->next, found);
}
