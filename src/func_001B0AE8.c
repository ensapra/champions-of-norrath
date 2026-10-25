extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
typedef struct M { s32 f0, f4, f8, fC, f10; struct M *next; } M;
extern u8 D_01109780[];

void func_001B0AE8(M *arg0, s32 arg1) {
    u8 *b;
    M *head;
    func_001B5C80();
    b = D_01109780;
    arg0->f0 = arg1;
    arg0->f4 = 0;
    arg0->f8 = 0;
    arg0->fC = 0;
    arg0->f10 = 0;
    arg0->next = 0;
    head = *(M **)(b + 0x28);
    if (head == 0) {
        *(M **)(b + 0x28) = arg0;
    } else {
        M *p = head;
        while (p->next != 0) {
            p = p->next;
        }
        p->next = arg0;
    }
    func_001B5CD8();
}
