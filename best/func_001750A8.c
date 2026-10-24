typedef struct {
    s32 count;
    s32 vals[35];
    s32 ptrs[1];
} Stk;
extern Stk D_010EA840;
void func_00171AE0(s32);

s32 func_001750A8(void) {
    s32 r = -1;
    if (D_010EA840.count != 0) {
        s32 n = D_010EA840.count - 1;
        s32 v;
        D_010EA840.count = n;
        v = ((s32 *)((u8 *)&D_010EA840 + 0x90))[n];
        if (v != 0) {
            func_00171AE0(v);
            r = D_010EA840.vals[D_010EA840.count];
        } else {
            r = 0xFFFF;
        }
    }
    return r;
}
