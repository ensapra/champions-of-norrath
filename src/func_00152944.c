typedef struct LNode {
    s32 unk0;
    s32 unk4;
    struct LNode *next;
    struct LNode *prev;
    s32 data;
} LNode;
void func_0011B9E0(void *);
void *func_0011B9A8(s32);

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

void func_001529A8(LNode *n) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    func_0011B9E0(n);
}

LNode *func_00152944(s32 data, LNode *head) {
    LNode *prev = head->prev;
    LNode *node = func_0011B9A8(0x20);
    if (node != NULL) {
        node->next = head;
        node->prev = prev;
        node->data = data;
        head->prev = node;
        node->unk0 = 1;
        prev->next = node;
    }
    return node;
}

void func_00152930(LNode *head) {
    head->prev = head;
    head->next = head;
    head->data = 0;
    head->unk0 = 0;
}
