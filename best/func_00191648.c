typedef struct __attribute__((packed, aligned(4))) { s32 id; s32 a, b, c; } Ent;
extern s32 D_00484478;
extern s32 D_0048447C;
extern Ent D_00793E60[];
void func_00191738();
void func_00191648(s32 id) {
    s32 n = D_00484478;
    s32 i, j, end;
    for (i = 0; i < n; i++) {
        if (D_00793E60[i].id == id) break;
    }
    if (i == n) return;
    j = D_0048447C;
    end = n - 1;
    if (j >= i) D_0048447C = j - 1;
    {
        s32 k;
        for (k = i; k < end; k++) D_00793E60[k] = D_00793E60[k + 1];
    }
    D_00484478 = end;
    func_00191738(id, i, end, n);
}
