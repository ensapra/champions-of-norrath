typedef struct LNode {
    s32 unk0;
    s32 unk4;
    struct LNode *next;
    struct LNode *prev;
    s32 data;
} LNode;

void func_001529D8(LNode *head, LNode *n) {
    LNode *next = n->next;
    LNode *prev;
    next->prev = n->prev;
    n->prev->next = next;
    head->prev->next = n;
    prev = head->prev;
    n->next = head;
    n->prev = prev;
    head->prev = n;
}
