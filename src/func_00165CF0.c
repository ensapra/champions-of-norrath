/* identical to func_001659E4 (matched), with its names changed by decompdecomp */
extern u8 D_001CB220[];
extern u8 func_001CB5F8[];
extern u8 func_001C8098[];
void func_0016698C(void *);
void func_001662E0(void *);
void func_00171AE0(void *);
void func_0016FCC4(void *, void *, void *, void *);
void func_0016526C(void *);

void func_00165CF0(void *arg0) {
    u8 *p = D_001CB220;
    p = *(u8 **)(p + 0x430);
    ((void (*)(void *))p)(arg0);
    func_0016698C(arg0);
    func_001662E0(arg0);
}

void func_00165C70(u8 *arg0) {
    u8 *p = func_001CB5F8;
    p = *(u8 **)(p + 0x50);
    ((void (*)(void *))p)(arg0);
    if (*(s32 *)(arg0 + 0x2880) != 0) {
        func_00171AE0(arg0 + (*(s32 *)(arg0 + 0x4EC) ^ 1) * 0xF80 + 0x970);
    }
}

void func_001656B0(u8 *arg0) {
    s32 flag = 0;
    u8 *p;
    if (*(s32 *)(arg0 + 0x538) != 0) {
        flag = *(s32 *)(arg0 + 0x53C) != 0;
    }
    p = func_001C8098;
    p = *(u8 **)(p + 0xE08);
    ((void (*)(void))p)();
    if (flag) {
        func_0016FCC4(arg0 + 0x540, arg0 + 0x1250, arg0 + 0x1240, arg0 + 0x1230);
        func_0016526C(arg0);
    }
}

typedef struct {
    char pad[0x98];
    s32 x98;
    char pad2[0x2888 - 0x9C];
    s32 v[4];
} S_00165D28;

s32 func_00165D28(S_00165D28 *arg0, S_00165D28 *arg1, S_00165D28 *arg2) {
    u8 *p = func_001CB5F8;
    s32 r;
    p = *(u8 **)(p + 0xA0);
    r = ((s32 (*)(void *, void *, void *))p)(arg0, arg1, arg2);
    if (arg1->v[0] != arg2->v[0]) {
        arg0->v[0] = arg1->v[0];
        arg0->x98 = 2;
        r = 1;
    }
    if (arg1->v[1] != arg2->v[1]) {
        arg0->v[1] = arg1->v[1];
        arg0->x98 = 2;
        r = 1;
    }
    if (arg1->v[2] != arg2->v[2]) {
        arg0->v[2] = arg1->v[2];
        arg0->x98 = 2;
        r = 1;
    }
    if (arg1->v[3] != arg2->v[3]) {
        arg0->v[3] = arg1->v[3];
        arg0->x98 = 2;
        r = 1;
    }
    return r;
}
