typedef struct {
    u32 type;
    s64 p;
} Arg;

extern void func_0014CBF4(s32, Arg *, s32);

void func_0010B378(s32 a, u64 *src) {
    u64 d[2];
    Arg ar[2];
    register Arg *p = ar;
    d[0] = src[0];
    d[1] = src[1];
    p->type = 0x12;
    p->p = d;
    func_0014CBF4(a, p, 1);
}
