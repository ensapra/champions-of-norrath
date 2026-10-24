typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size)
        r->wr = r->data;
}

extern void func_001B5C80(void);
extern void func_001B5CD8(void);
typedef struct N { s32 id; s32 f4, f8, fC, f10; struct N *next; } N;
typedef struct { u8 pad[0x28]; N *head; } NList;
extern NList D_01109780;

void func_001B0AE8(N *n, s32 id) {
    N *p;
    func_001B5C80();
    n->id = id;
    n->f4 = 0;
    n->f8 = 0;
    n->fC = 0;
    n->f10 = 0;
    n->next = 0;
    if (D_01109780.head == 0) {
        D_01109780.head = n;
    } else {
        for (p = D_01109780.head; p->next != 0; p = p->next)
            ;
        p->next = n;
    }
    func_001B5CD8();
}

typedef struct M { u8 pad[0x38]; struct M *next; } M;
typedef struct { u8 pad[8]; M *head; } MList;

M *func_001B0C50(M *arg0, MList *l) {
    M *p;
    func_001B5C80();
    p = l->head;
    if (p == arg0) {
        l->head = p->next;
    } else if (p != 0) {
        while (p->next != arg0) {
            p = p->next;
            if (p == 0) goto done;
        }
        p->next = arg0->next;
    }
done:
    func_001B5CD8();
    return p;
}

N *func_001B0CE8(N *arg0) {
    N *p;
    func_001B5C80();
    p = D_01109780.head;
    if (p == arg0) {
        D_01109780.head = p->next;
    } else if (p != 0) {
        while (p->next != arg0) {
            p = p->next;
            if (p == 0) goto done;
        }
        p->next = arg0->next;
    }
done:
    func_001B5CD8();
    return p;
}
