typedef struct VE { s16 adj; s16 pad; void (*fn)(void *, s32); } VE;
typedef struct Obj { char pad[0x14]; char *vt; } Obj;
typedef struct Node { char pad[0xC]; Obj *obj; } Node;
typedef struct It { s32 a; Node *cur; s32 c, d; s32 e[4]; } It;
extern char D_004488F0[];
void func_00194660(It *, void *, s32);
void func_00194750(It *);
void func_00194700(It *, s32);
void func_00194300(void *);
void func_001E5DB0(void *, s32);
void func_00164050(void *, s32);
void func_00141658(void *, s32);
void func_001447D8(void *);
void func_00112340(char *self, s32 flags) {
    It it;
    char *list = self + 0x378;
    *(char **)(self + 0x48) = D_004488F0;
    func_00194660(&it, list, 0);
    while (it.cur != 0) {
        Obj *o = it.cur->obj;
        if (o != 0) {
            VE *e = (VE *)(o->vt + 8);
            e->fn((char *)o + e->adj, 3);
        }
        func_00194750(&it);
    }
    func_00194700(&it, 2);
    func_00194300(list);
    func_001E5DB0(self + 0x338, 2);
    func_00194300(self + 0x2F0);
    func_00194300(self + 0x240);
    func_00164050(self + 0x120, 0);
    func_00141658(self, 0);
    if (flags & 1) func_001447D8(self);
}
