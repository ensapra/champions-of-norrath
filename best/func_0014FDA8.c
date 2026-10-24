typedef struct LNode {
    s32 pad0[2];
    struct LNode *next;
    s32 pad1;
    s32 key;
} LNode;

void func_001529D8(LNode *, LNode *);

void func_0014FD08(u8 *o, s32 key) {
    LNode *head = (LNode *)(o + 0x840);
    LNode *p = head;
    LNode *n;
    while ((n = p->next) != head) {
        p = n;
        if (key == n->key) {
            func_001529D8(head, n);
            break;
        }
    }
}

void func_0014FCD4(u8 *o, s32 *a, s32 *b) {
    s32 t;
    *a = *(s32 *)(o + 0x810) + *(s32 *)(o + 0x5A0) + *(s32 *)(o + 0x5D4);
    t = *(s32 *)(o + 0x814) + *(s32 *)(o + 0x5A4);
    *b = t + *(s32 *)(o + 0x5D4);
}

void func_0014FDA8(u8 *o, s32 k1, s32 k2) {
    LNode *head;
    LNode *p;
    LNode *n;
    LNode *found = 0;
    if (k1 != k2) {
        head = (LNode *)(o + 0x840);
        p = head;
        while ((n = p->next) != head) {
            p = n;
            if (k1 == n->key) {
                found = n;
                break;
            }
        }
        if (found != 0) {
            p = head;
            while ((n = p->next) != head) {
                p = n;
                if (k2 == n->key) {
                    if (n->next != found) {
                        func_001529D8(n->next, found);
                    }
                    break;
                }
            }
        }
    }
}
