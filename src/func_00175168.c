typedef struct {
    s32 count;
    s32 vals[35];
    s32 ptrs[1];
} Stk;
typedef struct {
    s32 x0;
    s32 x4;
    u8 pad[0x1E];
    s16 x26;
} Ent;
extern Stk D_010EA840;
extern Ent D_010EA1E0[];
void func_00171AE0(s32);
void func_0018E0C0(s32);

void func_00175168(void) {
    D_010EA840.count = 0;
}

void func_00175118(s32 arg0) {
    if (D_010EA1E0[arg0].x26 == 1) {
        func_0018E0C0(D_010EA1E0[arg0].x4 + 0x10);
    }
}

s32 func_001750A8(void) {
    s32 n = D_010EA840.count;
    s32 r = -1;
    if (n != 0) {
        n--;
        D_010EA840.count = n;
        if (((s32 *)((u8 *)&D_010EA840 + 0x90))[n] != 0) {
            func_00171AE0(((s32 *)((u8 *)&D_010EA840 + 0x90))[n]);
            return D_010EA840.vals[D_010EA840.count];
        }
        r = 0xFFFF;
    }
    return r;
}
