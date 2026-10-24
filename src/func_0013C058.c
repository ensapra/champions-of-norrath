extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);
extern void func_0025ADA8(void);

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
    Item_0013BE48 **p;
    s32 count;
    s32 i;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.obj, l.s);
    p = l.items;
    func_00140678(l.obj, p, 0x80);
    count = 0;
    for (i = 0; p[i] != NULL; i++) {
        if ((p[i]->flags & 0x28) != 0x28) {
            count++;
        }
    }
    return count;
}

typedef struct {
    char s[5];
} Name5;

typedef struct {
    char pad[0x24];
    Name5 name;
    char pad2[0x5DB0 - 0x24 - 5];
} S_00408600;

extern S_00408600 D_00408600[];
extern char D_00483A30[];
s32 D_00484538;

s32 func_0013BF38(void) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        D_00408600[i].name = *(Name5 *)D_00483A30;
    }
    return 0;
}

extern s32 D_0042E300[];
s8 D_00483AC8;
s32 D_00483F14;
s32 D_00483F18;
s8 D_004844E0;
s32 D_00484CD8;
s8 D_00484F99;

s32 func_0013C058(void) {
    D_004844E0 = 0;
    D_00483AC8 = 0;
    D_00483F18 = 1;
    D_00484F99 = 1;
    D_00483F14 = 1;
    if (D_00484CD8 == 1) {
        D_0042E300[0] |= 1;
    } else if (D_00484CD8 == 2) {
        D_0042E300[0] |= 2;
    }
    func_0025ADA8();
    return 0;
}
