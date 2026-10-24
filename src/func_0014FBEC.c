typedef struct LNode {
    s32 pad0[2];
    struct LNode *next;
    s32 pad1;
    s32 key;
} LNode;

void func_001529D8(LNode *, LNode *);

void func_0014FD08(u8 *o, s32 key) {
    LNode *head = (LNode *)(o + 0x840);
    LNode *n;
    for (n = head->next; n != head; n = n->next) {
        if (n->key == key) {
            func_001529D8(head, n);
            return;
        }
    }
}

void func_0014FCD4(u8 *o, s32 *a, s32 *b) {
    *a = *(s32 *)(o + 0x810) + *(s32 *)(o + 0x5A0) + *(s32 *)(o + 0x5D4);
    *b = *(s32 *)(o + 0x814) + *(s32 *)(o + 0x5A4) + *(s32 *)(o + 0x5D4);
}

void func_0014FDA8(u8 *o, s32 k1, s32 k2) {
    LNode *head;
    LNode *n;
    LNode *found = 0;
    if (k1 == k2) {
        return;
    }
    head = (LNode *)(o + 0x840);
    for (n = head->next; n != head; n = n->next) {
        if (n->key == k1) {
            found = n;
            break;
        }
    }
    if (found == 0) {
        return;
    }
    for (n = head->next; n != head; n = n->next) {
        if (n->key == k2) {
            if (n->next != found) {
                func_001529D8(n->next, found);
            }
            return;
        }
    }
}

typedef struct {
    s32 w[4];
    u64 pad[6];
    s32 w2[4];
} Pkt;

typedef struct {
    u8 pad[0x8E0];
    Pkt p0;
    Pkt p1;
} PktOwner;

void func_0014FB9C(PktOwner *);
s32 func_00170894(s32, s32, s32, s32);

void func_0014FBEC(PktOwner *o)
{
    func_0014FB9C(o);
    o->p0.w[0] = 0x10000003;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 3, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}
