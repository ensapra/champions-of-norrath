extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);

typedef struct {
    char pad[0xC];
    s32 flags;
} Item_0013BE48;

s32 func_0013BE48(void *arg0, s32 *arg1) {
    struct {
        char obj[0xA0];
        void *s;
        char pad[0xC];
        Item_0013BE48 *items[0x80];
    } l;
    s32 count;
    s32 off;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.obj, l.s);
    func_00140678(l.obj, l.items, 0x80);
    off = 0;
    count = 0;
    while (*(Item_0013BE48 **)((char *)l.items + off) != NULL) {
        if (((*(Item_0013BE48 **)((char *)l.items + off))->flags & 0x28) != 0x28) {
            count++;
        }
        off += 4;
    }
    return count;
}
