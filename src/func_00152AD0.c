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
void func_00154068(s32);
void func_00154130(s32);
void func_00154394(s32);
extern char func_001C8098[];
s32 func_00171000(f32);
void func_001A2850(void *, s32);

void func_0015398C(s32 arg0) {
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

f32 func_00152B70(void) {
    f32 f;
    if (D_010E4558.getf != NULL) {
        f = D_010E4558.getf();
        func_001A2850(D_004CB4F0, func_00171000(f));
        return f;
    }
    return 1.0f;
}

void func_00152AD0(CbTable *arg0) {
    D_010E4558 = *arg0;
    if (D_010E4558.init != NULL) {
        D_010E4558.init();
    }
}

void func_00152A08(LNode *head, LNode *n) {
    n->next->prev = n->prev;
    n->prev->next = n->next;
    head->next->prev = n;
    n->prev = head;
    n->next = head->next;
    head->next = n;
}
