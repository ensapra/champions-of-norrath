typedef struct LNode { u8 pad[8]; struct LNode *next; s32 pad2; s32 key; } LNode;
void func_001529D8(LNode *, LNode *);

void func_0014FE3C(LNode *cur, s32 arg1, s32 arg2) {
    LNode *found1 = NULL;
    LNode *head, *n;
    if (arg1 != arg2) {
        cur = (LNode *)((u8 *)cur + 0x840);
        head = cur;
        while ((n = cur->next) != head) {
            cur = n;
            if (arg1 == cur->key) {
                found1 = cur;
                break;
            }
        }
        if (found1 != NULL) {
            cur = head;
            while ((n = cur->next) != head) {
                cur = n;
                if (arg2 == cur->key) {
                    func_001529D8(cur, found1);
                    break;
                }
            }
        }
    }
}
