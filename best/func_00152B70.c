typedef struct LNode {
    s32 unk0;
    s32 unk4;
    struct LNode *next;
    struct LNode *prev;
} LNode;

typedef struct {
    f32 (*getf)(void);
    void (*init)(void);
    s32 rest[12];
} CbTable;

extern CbTable D_010E4558;
extern char D_004CB4F0[];
s32 func_00171000(f32);
void func_001A2850(void *, s32);

f32 func_00152B70(void) {
    f32 f;
    char *buf;
    if (D_010E4558.getf != NULL) {
        f = D_010E4558.getf();
        buf = D_004CB4F0;
        func_001A2850(buf, func_00171000(f));
        return f;
    }
    return 1.0f;
}

void func_00152A08(LNode *head, LNode *n) {
    LNode *next = n->next;
    next->prev = n->prev;
    n->prev->next = next;
    head->next->prev = n;
    n->prev = head;
    n->next = head->next;
    head->next = n;
}
