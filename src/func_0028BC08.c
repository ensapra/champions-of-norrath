class Cb {
public:
    char pad[0x48];
    virtual void Fn(s32 a);
};
struct Node { Node *next; s32 pad[2]; Cb *cb; };
class Obj {
public:
    char pad0[0x48];
    void *vt;
    char pad1[0x0C];
    Cb *c58;
    char pad2[0x9C];
    Node *list;
};
extern "C" {
extern u8 D_004506B0[];
s8 D_00484318;
void func_00141658(void *, s32);
s32 func_001447D8(void *);
void func_00164050(void *, s32);
void func_00194300(void *);
s32 func_0028BC08(Obj *o, s32 f) {
    Node *n, *next;
    o->vt = D_004506B0;
    n = o->list;
    if (n) {
        do {
            next = n->next;
            if (n->cb) {
                n->cb->Fn(3);
                n->cb = 0;
            }
            n = next;
        } while (n);
    }
    if (o->c58 && D_00484318)
        o->c58->Fn(3);
    func_00194300(&o->list);
    func_00164050((char *)o + 0x5C, 0);
    func_00141658(o, 0);
    if (f & 1)
        return func_001447D8(o);
}
}
