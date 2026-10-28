typedef struct {
    char pad0[0xC];
    s32 flags;
    char pad10[0xA0 - 0x10];
    u64 flags64;
    char padA8[0xEC - 0xA8];
    s32 state;
    s32 prev;
} Obj;
s32 func_00142158(Obj *, s32, s32);
void *func_00143A80(Obj *, char *, s32);
void func_001640D0(void *);
void func_001D3E88(void *);
extern char D_004607B8[];
extern char D_004607D0[];

s32 func_0010A428(Obj *a, s32 b) {
    s32 old = a->state;
    void *r;
    a->prev = old;
    if (a->flags64 & 0x10000000) {
        a->state = func_00142158(a, old, 0xABE0) != 0;
    } else {
        a->state = func_00142158(a, old, b) != 0;
    }
    if ((a->flags & 0xC00000) && old != a->state) {
        if (a->state == 0) {
            r = func_00143A80(a, D_004607B8, 0);
            if (r) func_001D3E88(r);
        } else {
            r = func_00143A80(a, D_004607D0, 0);
            if (r) func_001D3E88(r);
        }
    }
    if (a->state == 0) {
        func_001640D0((char *)a + 0x120);
    }
    return a->state;
}
