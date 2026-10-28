typedef struct LNode {
    s32 pad0[2];
    struct LNode *next;
    s32 pad1;
    s32 key;
} LNode;

void func_001529A8(LNode *);

void func_00150FC0(u8 *o, s32 key) {
    LNode *head = (LNode *)(o + 0x840);
    LNode *p = head;
    LNode *n;
    if (*(s32 *)(o + 0x864) == key)
        *(s32 *)(o + 0x864) = 0;
top:
    n = p->next;
    if (n == head)
        return;
    p = n;
    if (n->key != key)
        goto top;
    func_001529A8(n);
    *(s32 *)(o + 0x854) -= 1;
}
