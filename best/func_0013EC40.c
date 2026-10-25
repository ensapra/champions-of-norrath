typedef struct Node { s32 a, b, c; void *v; } Node;
typedef struct { s32 x; Node *n; s32 pad[6]; } Iter;
extern void func_00194660(Iter *, void *, s32);
extern void func_00194750(Iter *);
extern void func_00194700(Iter *, s32);
s32 D_00483AC0;
s32 D_00486890;
extern u32 D_004FC0C0[120][120];
extern u32 D_0050A1C0[120][120];

void func_0013EC40(void (*cb)(void *)) {
    Iter it0, it1, it2;
    s32 i, k;
    Node *n;

    for (i = 0; i < 0x78; i++) {
        for (k = 0x77; k >= 0; k--) {
            func_00194660(&it0, &D_004FC0C0[i][0x77 - k], D_00483AC0);
            for (n = it0.n; n != 0; n = it0.n) {
                cb(n->v);
                func_00194750(&it0);
            }
            func_00194700(&it0, 2);
        }
    }
    for (i = 0; i < 0x78; i++) {
        for (k = 0x77; k >= 0; k--) {
            func_00194660(&it1, &D_0050A1C0[i][0x77 - k], D_00483AC0);
            for (n = it1.n; n != 0; n = it1.n) {
                cb(n->v);
                func_00194750(&it1);
            }
            func_00194700(&it1, 2);
        }
    }
    func_00194660(&it2, &D_00486890, D_00483AC0);
    while (it2.n != 0) {
        n = it2.n;
        cb(n->v);
        func_00194750(&it2);
    }
    func_00194700(&it2, 2);
}
