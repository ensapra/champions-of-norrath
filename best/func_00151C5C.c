typedef struct Node { u8 pad[0x1C]; struct Node *next; } Node;
void func_0015217C(Node *);

void func_00151E24(u8 *arg0, Node *arg1) {
    Node *prev = (Node *)(arg0 + 0xFA0);
    Node *next;
    Node *cur;
    cur = *(Node **)(arg0 + 0xFBC);
    if (arg1 != NULL) {
        while (cur != NULL) {
            next = cur->next;
            if (cur == arg1) {
                prev->next = next;
                func_0015217C(cur);
            } else {
                prev = cur;
            }
            cur = next;
        }
    }
}

extern s32 D_0047FC1C;
s32 func_001520EC(s32, u32);

void func_00151DB8(u8 *arg0, u32 arg1) {
    Node *p = (Node *)(arg0 + 0xFA0);
    u64 t = D_0047FC1C - *(u64 *)(arg0 + 0xFC0);
    if (t >= arg1) arg1 = t + 1;
    while (p->next != NULL) {
        p = p->next;
    }
    *(s32 *)&p->next = func_001520EC((s32)p->next, arg1);
}

void *func_001521A0(void *, s32);

void func_00151C5C(u8 *arg0, s32 arg1) {
    s32 *t = func_001521A0(arg0, 0xF);
    if (t != NULL) {
        t[4] = 1;
        t[8] = arg1;
        t[5] = *(s32 *)(arg0 + 0xFD4);
        t[6] = *(s32 *)(arg0 + 0xFD8);
        t[7] = *(s32 *)(arg0 + 0xFDC);
    }
}
