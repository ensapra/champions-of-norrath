typedef struct DNode { struct DNode *next; struct DNode *prev; struct Item *item; } DNode;
typedef struct Item { u8 pad[0xAC]; s32 f_ac; s32 f_b0; s32 f_b4; } Item;
void func_0011B9E0(DNode *, DNode *);
void func_0014B8E0(Item *, u8 *);

void func_0014F86C(u8 *arg0) {
    DNode *head = (DNode *)(arg0 + 0x9B4);
    DNode *p = head->next;
    DNode *nx;
    DNode *cur;
    Item *it;
    if (p != head) {
        do {
            it = p->item;
            nx = p->next;
            if (it->f_ac != 0 && it->f_b4 == 0) {
                cur = p;
                if (it->f_b0 != 0) {
                    nx->prev = p->prev;
                    p->prev->next = p->next;
                    p = nx;
                    func_0011B9E0(cur, nx);
                    func_0014B8E0(it, arg0);
                } else {
                    it->f_b0 = 1;
                    goto next;
                }
            } else {
next:
                p = nx;
            }
        } while (p != head);
    }
}
