typedef struct malloc_chunk {
    u32 prev_size;
    u32 size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
} *mchunkptr;

extern void func_00302270(void *);
extern void func_003022F0(void *);
extern char *func_00303880(void *, s32);
extern mchunkptr D_00448488[];
extern char *D_004488A0[];
extern u32 D_004488B8[];

s32 func_00300900(void *reent_ptr, u32 pad)
{
    long top_size;
    long extra;
    char *current_brk;
    char *new_brk;

    func_00302270(reent_ptr);

    top_size = (u32)(D_00448488[2]->size & ~3);
    extra = ((top_size - pad - 16 + 4095) / 4096UL - 1) * 4096;

    if (extra < 4096) {
        func_003022F0(reent_ptr);
        return 0;
    }
    current_brk = func_00303880(reent_ptr, 0);
    if (current_brk != (char *)D_00448488[2] + top_size) {
        func_003022F0(reent_ptr);
        return 0;
    }
    new_brk = func_00303880(reent_ptr, -extra);
    if (new_brk == (char *)-1) {
        current_brk = func_00303880(reent_ptr, 0);
        top_size = current_brk - (char *)D_00448488[2];
        if (top_size >= 16) {
            D_004488B8[0] = current_brk - D_004488A0[0];
            D_00448488[2]->size = top_size | 1;
        }
        func_003022F0(reent_ptr);
        return 0;
    }
    D_00448488[2]->size = (top_size - extra) | 1;
    D_004488B8[0] -= extra;
    func_003022F0(reent_ptr);
    return 1;
}
