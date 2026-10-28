typedef struct Ent { void **head; void **tail; s32 a; s32 b; } Ent;
typedef struct Blk { Ent e[4][4]; char pad0[0x30]; s32 id; char pad[4]; } Blk;
extern Blk D_006F5AD0[];
extern void **D_004869F0;

void func_00180468(s32 id) {
    Blk *b;
    void **fl;
    s32 i, j;
    s32 id2 = id;
    if (id2 == 0) return;
    if (D_006F5AD0[id2 & 0xFF].id != id2) return;
    fl = D_004869F0;
    b = &D_006F5AD0[id2 & 0xFF];
    for (i = 0; i < 4; i++) {
        for (j = 3; j >= 0; j--) {
            Ent *e = &b->e[i][3 - j];
            void **n = e->head;
            if (n) {
                void **cur = n;
                do {
                    n = (void **)*n;
                    *cur = fl;
                    fl = cur;
                    cur = n;
                } while (fl != e->tail);
            }
        }
    }
    D_004869F0 = fl;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            b->e[i][j].head = 0;
            b->e[i][j].a = 1;
            b->e[i][j].tail = 0;
            b->e[i][j].b = 0x101;
        }
    }
    b->id = 0;
}
