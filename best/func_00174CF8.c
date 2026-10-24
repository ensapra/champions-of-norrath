typedef struct {
    s32 depth;
    s32 vals[0x23];
    s32 ptrs[0x20];
} Stack175;

extern Stack175 D_010EAA60;
void func_00171AE0(s32);

s32 func_00174CF8(void) {
    Stack175 *s = &D_010EAA60;
    s32 r = -1;
    s32 p;
    if (s->depth != 0) {
        s->depth--;
        p = s->ptrs[s->depth];
        if (p != 0) {
            func_00171AE0(p);
            r = s->vals[s->depth];
        } else {
            r = 0xFFFF;
        }
    }
    return r;
}
