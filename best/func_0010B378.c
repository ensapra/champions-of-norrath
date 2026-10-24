typedef struct {
    s32 type;
    s64 p;
} Arg;

extern void func_0014CBF4(s32, Arg *, s32);

void func_0010B378(s32 a, u64 *src) {
    u64 d[2];
    Arg ar[2];
    Arg *p = ar;
    p->type = 0x12;
    d[1] = src[1];
    d[0] = src[0];
    p->p = (s32)d;
    func_0014CBF4(a, p, 1);
}
