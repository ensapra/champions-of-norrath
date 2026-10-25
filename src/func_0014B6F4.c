typedef struct Node {
    s32 pad0;
    s32 pad4;
    struct Node *next;
    s32 padC;
    void *data;
} Node;

s32 func_0014B41C(void *, s32);
void *func_0014D29C(void *);
void func_0014F2E0(void *, void *);
s32 func_00152254(void *);
void func_00152520(void *);
extern s32 D_0047FBF4;
extern s32 D_0047FC08;

void func_0014B6F4(char *arg0) {
    Node *n;
    Node *head;
    char *parent = func_0014D29C(arg0);

    if (*(s32 *)(arg0 + 0xAC) != 0) return;
    if (func_0014B41C(arg0, D_0047FC08)) {
        head = (Node *)(arg0 + 0x840);
        for (n = head; n->next != head; ) {
            n = n->next;
            func_0014B6F4(n->data);
        }
    }
    *(s32 *)(arg0 + 0xB0) = 0;
    *(s32 *)(arg0 + 0xAC) = 1;
    if (parent == NULL || !func_0014B41C(parent, D_0047FBF4)) {
        *(s32 *)(arg0 + 0xB4) = 1;
        return;
    }
    if (arg0 == parent) {
        *(s32 *)(arg0 + 0xB4) = 1;
    } else {
        *(s32 *)(arg0 + 0xB4) = 0;
        func_0014F2E0(parent, arg0);
    }
    if (!func_00152254(arg0)) return;
    func_00152520(arg0);
}
