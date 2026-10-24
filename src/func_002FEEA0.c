extern s32 D_00483F30;
extern u8 D_008D88B8[12];
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8*)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8[4] = 0;
        D_008D88B8[1] = 0;
        D_008D88B8[3] = 0x20;
        D_008D88B8[0] = 1;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}

extern u8 D_008D6B90[];
extern f32 D_004827F4;
void func_00180D78(u8 *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                   f32 f0, f32 f1, f32 f2, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12);

void func_002989F0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_008D6B90, 0x118, 0xBA, 0x38, 0x7D, 0xF, 0x13, 0xD3,
                          70.0f, 2.0f, D_004827F4, 0x3F, 3, arg0, 9, 0);
        }
    }
}

void **func_002FA108(void);
void *func_002FEEA0(void) {
    return (char *)*func_002FA108() + 8;
}

typedef struct FNode {
    char pad[0x14];
    s32 busy;
    struct FNode *next;
} FNode;
void func_002FEE30(void) __attribute__((noreturn));
void func_002FF138(void) {
    FNode **head = (FNode **)func_002FA108();
    FNode **pp = head;
    FNode *n;
    for (;;) {
        n = *pp;
        if (n == 0)
            func_002FEE30();
        if (n->busy != 0)
            break;
        pp = &n->next;
    }
    if (pp != head) {
        *pp = n->next;
        n->next = *head;
        *head = n;
    }
    n->busy = 0;
}
