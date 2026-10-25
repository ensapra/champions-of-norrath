typedef struct Node { s32 a, b, c; s32 arg; } Node;
typedef struct Iter { s32 x; Node *cur; s32 pad[6]; } Iter;
extern s32 D_00483AC0;
extern s32 D_00486878[2];
extern s32 D_004FBF90[16];
extern s32 D_004FBFD0[60];
void func_00194660(Iter *, void *, s32);
void func_00194700(Iter *, s32);
void func_00194750(Iter *);

void func_0013EDE8(void (*cb)(s32)) {
    Node *n;
    Iter a, b, c;
    s32 *p;
    s32 i;
    func_00194660(&a, D_00486878, D_00483AC0);
    n = a.cur;
    while (n) {
        cb(n->arg);
        func_00194750(&a);
        n = a.cur;
    }
    func_00194700(&a, 2);
    p = D_004FBF90;
    for (i = 14; i >= 0; i--) {
        func_00194660(&b, p, D_00483AC0);
        n = b.cur;
        while (n) {
            cb(n->arg);
            func_00194750(&b);
            n = b.cur;
        }
        func_00194700(&b, 2);
        p++;
    }
    p = D_004FBFD0;
    for (i = 59; i >= 0; i--) {
        func_00194660(&c, p, D_00483AC0);
        while (c.cur) {
            cb(c.cur->arg);
            func_00194750(&c);
        }
        func_00194700(&c, 2);
        p++;
    }
}
