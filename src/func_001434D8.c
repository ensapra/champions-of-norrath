typedef struct S_n1434 S_n1434;
typedef struct { s32 f0; S_n1434 *head; s32 pad[6]; } S_l1434;
typedef struct { s32 a, b, c; s32 flags; } S_i1434;
struct S_n1434 { s32 a, b, c; S_i1434 *child; };

s32 D_00483AC0;
s32 D_00486888[2];
void func_00194660(S_l1434 *, void *, s32);
void func_00194750(S_l1434 *);
void func_00194700(S_l1434 *, s32);
void func_00194300(void *);

void func_001434D8(void) {
    S_l1434 l;
    func_00194660(&l, D_00486888, D_00483AC0);
    while (l.head != NULL) {
        S_i1434 *y = l.head->child;
        y->flags &= ~2;
        func_00194750(&l);
    }
    func_00194700(&l, 2);
    func_00194300(D_00486888);
}

typedef struct { s32 x, y, z; } S_vec12;
extern u8 D_0044CB08[];
extern u8 D_0044CA78[];
void func_001411F0(void *, void *, s32, s32);

void func_00154F00(void *a0, void *a1, s16 id) {
    S_vec12 t = *(S_vec12 *)a1;
    s32 fl;
    func_001411F0(a0, &t, 0, 0);
    fl = *(s32 *)((u8 *)a0 + 0xC);
    *(s16 *)((u8 *)a0 + 0x38) = id;
    *(void **)((u8 *)a0 + 0x48) = D_0044CB08;
    *(u8 *)((u8 *)a0 + 0x69) = 1;
    *(s32 *)((u8 *)a0 + 0xC) = fl | 8;
}

volatile unsigned long long func_001552C8(void *a0, void *a1, s16 id) {
    S_vec12 t = *(S_vec12 *)a1;
    func_001411F0(a0, &t, 0, 0);
    *(s16 *)((u8 *)a0 + 0x38) = id;
    *(void **)((u8 *)a0 + 0x48) = D_0044CA78;
    *(s32 *)((u8 *)a0 + 0xC) |= 8;
}
