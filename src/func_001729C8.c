extern s32 D_00486974;
extern u8 D_006E5E80[];
typedef struct Blk { s32 used; struct Blk *next; } Blk;
void func_001729C8(void *a) {
    s32 v = *(s32 *)((u8 *)a + 0x14);
    Blk *p;
    if (v == 0) return;
    p = (Blk *)(D_006E5E80 + (((v - D_00486974) >> 12) << 3));
    *(s32 *)((u8 *)a + 0x14) = 0;
    while (p != NULL) {
        p->used = 0;
        p = p->next;
    }
}
