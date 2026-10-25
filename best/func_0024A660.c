typedef struct {
    char name[0x10];
    s32 a[4];
    s32 b[4];
} Slot24A;
typedef struct {
    char pad[0x40];
    Slot24A slots[8];
    s32 count;
} Entry24A;
extern Entry24A D_007DD290[];
s32 func_00164F00(s32, s32 *, s32 *, s32);
void func_0024F448(s32);
void func_00304640(char *, s32);

void func_0024A660(s32 idx, s32 name, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 addr;
    s32 size;
    s32 n = D_007DD290[idx].count;
    s32 v;
    if (n < 8 && func_00164F00(name, &addr, &size, 0)) {
        s32 *a, *b;
        size = (size + 0xF) & ~0xF;
        func_00304640(D_007DD290[idx].slots[n].name, name);
        v = (arg4 < 0) ? size : arg4;
        a = (s32 *)((s8 *)D_007DD290 + (idx * sizeof(Entry24A) + n * sizeof(Slot24A) + 0x50));
        b = (s32 *)((s8 *)D_007DD290 + (idx * sizeof(Entry24A) + n * sizeof(Slot24A) + 0x60));
        b[3] = arg2;
        a[0] = arg3;
        a[2] = arg3;
        b[0] = arg5;
        b[2] = arg7;
        b[1] = arg6;
        a[3] = v;
        a[1] = v;
        D_007DD290[idx].count++;
        func_0024F448(idx);
    }
}
