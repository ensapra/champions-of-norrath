/* identical to func_0010B3C0 (matched), with its names changed by decompdecomp */
/* identical to func_00300188 (matched), with its names changed by decompdecomp */

extern u8 D_001BD8BC[9];
s32 func_00301088(s32 arg0, void *arg1);
void func_002FFDE8(void);
void func_002FFF98(void *arg0, s32 arg1, s32 arg2, void *arg3);
void func_00118340(s32 arg0);

void func_00137760(void) {
    func_00118340(*(s32 *)D_001BD8BC);
}

void func_00118340(s32 arg0) {
    func_00301088(arg0, (void *)func_002FFDE8);
}

void func_003001A8(void *arg0) {
    void *tmp;
    tmp = (char *)arg0 + 0x1E4;
    *(void **)((char *)arg0 + 0x3C) = (void *)func_00118340;
    *(s32 *)((char *)arg0 + 0x38) = 1;
    func_002FFF98(tmp, 4, 0, arg0);
    func_002FFF98((char *)arg0 + 0x23C, 9, 1, arg0);
    func_002FFF98((char *)arg0 + 0x294, 0xA, 2, arg0);
    *(s32 *)((char *)arg0 + 0x1D8) = 0;
    *(void **)((char *)arg0 + 0x1E0) = tmp;
    *(s32 *)((char *)arg0 + 0x1DC) = 3;
}

s32 func_00300238(s32 *arg0, char *arg1, s32 *arg2) {
    s32 v1;
    s32 a3;
    s32 t0;
    char c0;
    c0 = arg1[0];
    if (c0 == 0x72) {
        t0 = 4;
        v1 = 0;
        a3 = 0;
        goto L1;
    }
    if (c0 < 0x73) {
        t0 = 0x108;
        if (c0 != 0x61) {
            *arg0 = 0x16;
            return 0;
        }
        v1 = 1;
        a3 = 0x208;
        goto L1;
    }
    t0 = 8;
    if (c0 != 0x77) {
        *arg0 = 0x16;
        return 0;
    }
    v1 = 1;
    a3 = 0x600;
L1:
    if (arg1[1] == 0) {
        goto L2;
    }
    if (arg1[1] == 0x2B) {
        t0 = 0x10;
        v1 = 2;
        goto L2;
    }
    if (arg1[2] != 0x2B) {
        v1 |= a3;
        goto L3;
    }
    v1 |= a3;
    t0 = 0x10;
    goto L2;
L2:
    v1 |= a3;
L3:
    *arg2 = v1;
    return t0;
}
