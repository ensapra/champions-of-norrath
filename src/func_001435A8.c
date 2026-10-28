typedef struct S_n1435 { s32 a, b, c; s32 key; } S_n1435;
typedef struct { s32 f0; S_n1435 *head; s32 pad[6]; } S_l1435;
s32 D_00486890;
void func_00194660(S_l1435 *, void *, s32);
void func_00194750(S_l1435 *);
void func_00194700(S_l1435 *, s32);

s32 func_001435A8(s32 key) {
    S_l1435 l;
    func_00194660(&l, &D_00486890, 0);
    while (l.head != NULL) {
        if (l.head->key == key) {
            func_00194700(&l, 2);
            return 1;
        }
        func_00194750(&l);
    }
    func_00194700(&l, 2);
    return 0;
}
