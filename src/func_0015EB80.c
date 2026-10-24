typedef struct Pkt_15EB80 {
    u32 tag;
    s32 flags;
    void *owner;
    struct Pkt_15EB80 *next;
} Pkt_15EB80;

typedef struct {
    char pad0[4];
    u16 prio;
    char pad6[0x16];
    s32 frame;
    Pkt_15EB80 *slots[8];
} Owner_15EB80;

extern s32 D_004868E4;
extern s32 D_00483EF4;
extern s32 D_004840B0;
extern s32 D_004844A8;
extern Pkt_15EB80 D_00604200[][0x800];
extern Pkt_15EB80 *D_00614200[][8];

Pkt_15EB80 *func_0015EB80(u32 tag, s32 slot, Owner_15EB80 *obj, Pkt_15EB80 *after, s32 flags) {
    Pkt_15EB80 *p;
    Pkt_15EB80 *prev;
    Pkt_15EB80 *head;
    s32 i;

    if (D_004868E4 >= 0x800)
        return NULL;
    p = &D_00604200[D_00483EF4][D_004868E4++];
    if (obj != NULL && obj->prio >= D_004840B0)
        obj = NULL;
    p->flags = flags;
    p->owner = obj;
    p->tag = tag & 0x0FFFFFFF;
    if (obj != NULL) {
        if (obj->frame == D_004844A8) {
            prev = obj->slots[slot];
        } else {
            prev = NULL;
            for (i = 7; i >= 0; i--)
                obj->slots[i] = NULL;
            obj->frame = D_004844A8;
        }
        obj->slots[slot] = p;
    } else {
        prev = NULL;
    }
    if (after != NULL) {
        if (after->flags & 2)
            p->flags |= 2;
        else
            after->flags |= 2;
        p->next = after->next;
        after->next = p;
        return p;
    }
    if (prev != NULL && ((flags ^ 1) & 1)) {
        while (prev->flags & 2)
            prev = prev->next;
        p->next = prev->next;
        prev->next = p;
        return p;
    }
    head = D_00614200[D_00483EF4][slot];
    p->next = head->next;
    head->next = p;
    return p;
}
