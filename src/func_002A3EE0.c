class Cb {
public:
    char pad[0x48];
    virtual void Fn(s32 a);
};
struct Node { Node *next; s32 pad[2]; Cb *cb; };
class Obj {
public:
    char pad0[0x14];
    void *vt;
    Node *list;
};
extern "C" {
extern u8 D_00451AC0[];
extern u8 D_0044E670[];
void func_0013EAC8(void *, s32);
void func_0013EB28(void *);
s32 func_001447D8(void *);
void func_00194300(void *);
void func_0024CF80(s32);
s32 func_002A3EE0(Obj *o, s32 f) {
    Node *n, *next;
    u8 *g;
    o->vt = D_00451AC0;
    n = o->list;
    if (n) {
        do {
            next = n->next;
            if (n->cb)
                n->cb->Fn(3);
            n = next;
        } while (n);
    }
    func_0024CF80(*(s32 *)((u8 *)o + 0x74));
    g = (u8 *)o + 0x2C;
    *(s32 *)((u8 *)o + 0x74) = -1;
    func_0013EB28(g);
    func_0013EAC8(g, 2);
    func_00194300((u8 *)o + 0x18);
    o->vt = D_0044E670;
    func_00194300((u8 *)o + 4);
    if (f & 1)
        return func_001447D8(o);
}
}
