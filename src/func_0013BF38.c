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
    char *p;
    s32 count;
    s32 off;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.obj, l.s);
    p = (char *)l.items;
    func_00140678(l.obj, p, 0x80);
    count = 0;
    for (off = 0; *(Item_0013BE48 **)(p + off) != NULL; off += 4) {
        if (((*(Item_0013BE48 **)(p + off))->flags & 0x28) != 0x28) {
            count++;
        }
    }
    return count;
}

typedef struct {
    char s[5];
} Name5;

typedef struct {
    Name5 name;
    char pad2[0x5DB0 - 5];
} S_00408624;

extern S_00408624 D_00408624[];
extern char D_00483A30[];
s32 D_00484538;

s32 func_0013BF38(void) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        D_00408624[i].name = *(Name5 *)D_00483A30;
    }
    return 0;
}
