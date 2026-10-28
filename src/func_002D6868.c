/* identical to func_001AEEA8 (matched), with its names changed by decompdecomp */
void func_002D6778(s32);

void func_002D6868(s32 arg0) {
    if (arg0 == 10) {
        func_002D6778(13);
        func_002D6778(10);
    } else {
        func_002D6778(arg0);
    }
}

extern u8 jtbl_004C006C[];
extern u8 D_01107C00[];
s32 func_001B80A8(void *);

s32 func_001AEDF8(s32 arg0) {
    s32 i = *(s32 *)(jtbl_004C006C + 0x3E9C);
    if (i >= 0x7E) {
        *(s32 *)(jtbl_004C006C + 0x3E9C) = 0;
        D_01107C00[0x7F] = 0;
        func_001B80A8(D_01107C00);
        i = *(s32 *)(jtbl_004C006C + 0x3E9C);
    }
    if (arg0 == 10) {
        *(s32 *)(jtbl_004C006C + 0x3E9C) = 0;
        D_01107C00[i] = arg0;
        D_01107C00[i + 1] = 0;
        return func_001B80A8(D_01107C00);
    }
    *(s32 *)(jtbl_004C006C + 0x3E9C) = i + 1;
    D_01107C00[i] = arg0;
    return (s32)&D_01107C00[i];
}
