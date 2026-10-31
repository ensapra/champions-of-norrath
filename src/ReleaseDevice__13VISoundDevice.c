/* identical to func_00100390 (matched), with its names changed by decompdecomp */
/* identical to func_00134EC0 (matched), with its names changed by decompdecomp */

extern s32 D_004F3ED0[16];
extern s32 D_004F3F10[4];

s32 D_0048383C;
s32 D_00483844;
s32 D_00483864;
s32 D_00483868;
s32 D_0048386C;
s32 D_00483E5C;

void func_0017D5B8(s32);

s32 ReleaseDevice__13VISoundDevice(void) {
    return 0;
}

s32 func_00134EC8(s32 arg0) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (D_004F3ED0[i] == arg0) {
            return i;
        }
    }
    for (i = 0; i < 16; i++) {
        if (D_004F3ED0[i] == 0) {
            break;
        }
    }
    D_004F3ED0[i] = arg0;
    return i;
}

s32 func_00135068(s32 arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_004F3F10[i] == arg0) {
            return i;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_004F3F10[i] == 0) {
            break;
        }
    }
    D_004F3F10[i] = arg0;
    return i;
}

void func_00135110(void) {
    D_00483864 = D_00483844;
    D_0048383C = D_00483844;
    D_00483E5C = 0;
    func_0017D5B8(0);
    D_00483868 = 0;
    D_0048386C = D_0048383C - 0xA;
}
