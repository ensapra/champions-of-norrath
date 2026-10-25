s32 func_0017D410(void *arg0, s32 index, f32 val) {
    s32 *rows;
    s32 *cols;
    s32 count;
    if (index < 0) {
        return;
    }
    rows = *(s32 **)((u8 *)arg0 + 0x54);
    count = *(s16 *)((u8 *)rows + index * 0x1C + 0x18);
    cols = *(s32 **)((u8 *)arg0 + 0x20);
    *(s32 *)((u8 *)cols + count * 0x24 + 0x1C) = (s32)val;
}

void func_0017D450(void *arg0, s32 index, s32 enable) {
    s32 *rows;
    s32 i;
    s32 count;
    s32 *entries;
    s32 *e;
    if (index < 0) {
        return;
    }
    rows = *(s32 **)((u8 *)arg0 + 0x54);
    count = *(s16 *)((u8 *)rows + index * 0x1C + 4);
    if (count <= 0) {
        return;
    }
    entries = *(s32 **)((u8 *)arg0 + 0x24);
    for (i = 0; i < count; i++) {
        e = (s32 *)((u8 *)entries + (*(s32 *)((u8 *)rows + index * 0x1C) + i) * 0x3C);
        if (enable) {
            e[9] |= 0x100;
        } else {
            e[9] &= 0xFFFFFEFF;
        }
    }
}

extern void func_00159AE0(void *arg0, void *arg1, s32 arg2);
extern u8 D_0037EF00[];
extern f32 D_004800C8;

void func_0017DCC0(void *arg0, s32 arg1) {
    f32 f0, f1, f3;
    func_00159AE0(arg0, D_0037EF00, arg1);
    f0 = ((f32 *)arg0)[1];
    f1 = ((f32 *)arg0)[0];
    f3 = ((f32 *)arg0)[2];
    f0 = f0 * 2.0f;
    f0 = f0 / f3;
    f0 = f0 * 320.0f + 320.0f;
    f1 = f1 * D_004800C8;
    f1 = f1 / f3;
    f1 = f1 * 240.0f + 240.0f;
    ((f32 *)arg0)[1] = f0;
    ((f32 *)arg0)[0] = f1;
}

extern u8 D_006EBB40[];
extern u8 D_006E9D68[];
extern s32 D_00484190, D_00484194, D_00484198, D_004841C0;
extern s8 D_0048418C;
extern void func_0013EB28(void *);

void func_0017C398(void) {
    s32 j;
    u8 *p;
    u8 *b2;
    s32 i;
    s32 off;
    s32 *q;
    p = D_006EBB40 + 4;
    D_00484190 = 0;
    D_00484198 = 0;
    D_00484194 = 0;
    D_004841C0 = 0;
    D_0048418C = 1;
    for (j = 63; j >= 0; j--) {
        *(s32 *)(p + 0x24) = 0;
        *p = 0;
        p += 0x30;
    }
    off = 0;
    b2 = D_006E9D68;
    q = (s32 *)(b2 - 8);
    for (i = 15; i >= 0; i--) {
        func_0013EB28((void *)(b2 + off));
        off += 0x44;
        q[1] = 0;
        q[0] = 0;
        q = (s32 *)((u8 *)q + 0x44);
    }
}
