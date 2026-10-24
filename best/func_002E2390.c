extern s32 func_002DD640(void);
extern s32 func_002DD698(void);
extern s32 func_002E2ED8(s32);
extern s32 D_008E8140[];
extern s32 D_008E8144[];

s32 func_002E2390(s32 arg0) {
    s32 old = 0;
    if (func_002E2ED8(1) == 0) {
        s32 t = func_002DD640();
        old = D_008E8140[0];
        D_008E8140[0] = arg0;
        D_008E8144[0] = 0;
        if (t) {
            func_002DD698();
        }
        return old;
    }
    return old;
}

typedef struct N { s32 a; s32 b; s32 c; s32 d; s32 e; struct N *next; } N;
extern u8 D_008E0440[];

void func_002D84A8(N *arg0, s32 arg1) {
    u8 *b;
    N *p;
    N *q;
    func_002DD640();
    arg0->a = arg1;
    arg0->b = 0;
    arg0->c = 0;
    arg0->d = 0;
    arg0->e = 0;
    arg0->next = 0;
    b = D_008E0440;
    p = *(N **)(b + 0x28);
    if (p == 0) {
        *(N **)(b + 0x28) = arg0;
    } else {
        q = p->next;
        if (q == 0) {
            p->next = arg0;
        } else {
            do {
                p = q;
                q = p->next;
            } while (q != 0);
            p->next = arg0;
        }
    }
    func_002DD698();
}
