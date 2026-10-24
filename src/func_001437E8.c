typedef struct Link { struct Link *next; struct Link *prev; } Link;
typedef struct Owner { u32 pad[2]; Link *link; } Owner;
typedef struct Outer { u32 pad[2]; Owner *owner; } Outer;
Link *D_00486890;
extern void func_00194660(void *, void *, s32);
extern void func_00194700(void *, s32);
extern void func_00194750(void *);
extern s32 func_00194390(void *, void *, void *);
extern void func_001944A0(void *);
extern u8 D_00486880[8];

void func_00143558(Outer *arg0) {
    Link **hp;
    Link *old;
    Link *n = arg0->owner->link;
    n->prev->next = n->next;
    if (n->next != NULL) n->next->prev = n->prev;
    hp = &D_00486890;
    old = *hp;
    n->prev = (Link *)hp;
    n->next = old;
    *hp = n;
    if (n->next != NULL) n->next->prev = n;
}

s32 func_001435A8(s32 key) {
    u8 it[0x20];
    u8 *node;
    func_00194660(it, &D_00486890, 0);
    node = *(u8 **)(it + 4);
    if (node != 0) {
        do {
            if (*(s32 *)(node + 0xC) == key) {
                func_00194700(it, 2);
                return 1;
            }
            func_00194750(it);
            node = *(u8 **)(it + 4);
        } while (node != 0);
    }
    func_00194700(it, 2);
    return 0;
}

s64 func_001437E8(s32 *arg0) {
    if (arg0[1] != 0) func_001944A0((void *)arg0[1]);
    return func_00194390(D_00486880, arg0, arg0);
}
