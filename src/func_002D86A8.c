extern s32 func_002DD640(void);
extern s32 func_002DD698(void);
typedef struct N { u8 pad[0x14]; struct N *next; } N;
extern u8 D_008E0440[];

N *func_002D86A8(N *arg0) {
    N *p;
    u8 *b;
    func_002DD640();
    b = D_008E0440;
    p = *(N **)(b + 0x28);
    if (p == arg0) {
        *(N **)(b + 0x28) = p->next;
    } else if (p != 0) {
        while (p->next != arg0) {
            p = p->next;
            if (p == 0) goto done;
        }
        p->next = arg0->next;
    }
done:
    func_002DD698();
    return p;
}
