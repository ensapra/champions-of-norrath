void *func_0011B9A8(s32);
void func_001AF710(void *);
extern char D_004CB3F8[];
extern char D_004CB448[];

typedef struct Node14F2E0 {
    struct Node14F2E0 *next;
    struct Node14F2E0 *prev;
    s32 val;
} Node14F2E0;

void func_0014F2E0(u8 *obj, s32 v)
{
    Node14F2E0 *n;
    Node14F2E0 *list;
    Node14F2E0 *last;
    if (obj == 0) {
        func_001AF710(D_004CB3F8);
        return;
    }
    n = func_0011B9A8(0x10);
    if (n == 0) {
        func_001AF710(D_004CB448);
        return;
    }
    list = (Node14F2E0 *)(obj + 0x9B4);
    last = list->prev;
    n->val = v;
    n->prev = last;
    n->next = list;
    last->next = n;
    list->prev = n;
}
