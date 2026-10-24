typedef struct {
    s32 depth;
    s32 vals[0x23];
    void *ptrs[0x20];
} Stack175;

extern Stack175 D_010EA950;
void func_00171AE0(void *);

s32 func_00175250(void) {
    Stack175 *s = &D_010EA950;
    s32 n;
    void *p;
    if (s->depth == 0) {
        return -1;
    }
    n = --s->depth;
    p = s->ptrs[n];
    if (p != 0) {
        func_00171AE0(p);
        return s->vals[s->depth];
    }
    return 0xFFFF;
}
