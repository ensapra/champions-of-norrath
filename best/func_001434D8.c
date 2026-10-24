s16 D_00486858[4];
s16 D_00486860[4];
s32 D_00483AB0;

void func_0013E7D0(void) {
    D_00483AB0 = 1;
    D_00486858[3] = 0;
    D_00486858[2] = 0;
    D_00486858[1] = 0;
    D_00486860[3] = 0;
    D_00486860[2] = 0;
    D_00486860[1] = 0;
    D_00486858[0] = 0;
    D_00486860[0] = 0;
}

typedef struct YN {
    s32 p0[3];
    s32 flags;
} YN;

typedef struct LN {
    s32 p0[3];
    YN *y;
} LN;

typedef struct {
    s32 f0;
    LN *head;
    s32 f8, fC;
    s32 pad[4];
} List;

s32 D_00483AC0;
u8 D_00486888[8];

void func_00194660(List *, void *, s32);
void func_00194750(List *);
void func_00194700(List *, s32);
void func_00194300(void *);

void func_001434D8(void) {
    List l;
    LN *n;
    func_00194660(&l, D_00486888, D_00483AC0);
    n = l.head;
    if (n != NULL) {
        do {
            YN *y = n->y;
            y->flags &= ~2;
            func_00194750(&l);
            n = l.head;
        } while (n != NULL);
    }
    func_00194700(&l, 2);
    func_00194300(D_00486888);
}
