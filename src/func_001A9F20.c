typedef struct malloc_chunk {
    u32 prev_size;
    u32 size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
} *mchunkptr;

extern void func_001A2720(void *);
extern void func_001A27A0(void *);
extern char *func_001A3938(void *, s32);
extern mchunkptr D_004C3A88[];
extern char *D_004C3EA0[];
extern u32 D_004C3EB8[];

s32 func_001A9F20(void *reent_ptr, u32 pad)
{
    long top_size;
    long extra;
    char *current_brk;
    char *new_brk;

    func_001A2720(reent_ptr);

    top_size = (u32)(D_004C3A88[2]->size & ~3);
    extra = ((top_size - pad - 16 + 4095) / 4096UL - 1) * 4096;

    if (extra < 4096) {
        func_001A27A0(reent_ptr);
        return 0;
    }
    current_brk = func_001A3938(reent_ptr, 0);
    if (current_brk != (char *)D_004C3A88[2] + top_size) {
        func_001A27A0(reent_ptr);
        return 0;
    }
    new_brk = func_001A3938(reent_ptr, -extra);
    if (new_brk == (char *)-1) {
        current_brk = func_001A3938(reent_ptr, 0);
        top_size = current_brk - (char *)D_004C3A88[2];
        if (top_size >= 16) {
            D_004C3EB8[0] = current_brk - D_004C3EA0[0];
            D_004C3A88[2]->size = top_size | 1;
        }
        func_001A27A0(reent_ptr);
        return 0;
    }
    D_004C3A88[2]->size = (top_size - extra) | 1;
    D_004C3EB8[0] -= extra;
    func_001A27A0(reent_ptr);
    return 1;
}
