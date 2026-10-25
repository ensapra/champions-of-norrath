typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Hold { u8 pad[8]; Node *node; } Hold;
typedef struct Ent { u8 pad[8]; Hold *h; u32 flags; f32 x; f32 y; } Ent;
extern Node *D_004FC0C0[];
extern Node *D_0050A1C0[];
extern Node *D_00486890;
void func_00143630(Ent *e) {
    Node *n = e->h->node;
    Node **head;
    s32 x, y;
    n->prev->next = n->next;
    if (n->next != 0) n->next->prev = n->prev;
    x = ((s32)e->x + 0x3C00) >> 8;
    y = ((s32)e->y + 0x3C00) >> 8;
    if ((u32)x < 0x78 && y >= 0 && y < 0x78) {
        if (e->flags & 0x800) head = &D_0050A1C0[y * 120 + x];
        else head = &D_004FC0C0[y * 120 + x];
    } else {
        head = &D_00486890;
    }
    n->next = *head;
    n->prev = (Node *)head;
    *head = n;
    if (n->next != 0) n->next->prev = n;
}
