extern char *D_00444900[];
extern char D_0047B500[];
char *func_00304640(char *, char *);
s32 func_002E4E48(s32, s32, void *, s32, s32);

void func_002D3C40(u32 arg0, char *arg1) {
    if (arg0 < 8) {
        func_00304640(arg1, D_00444900[arg0]);
    } else {
        *arg1 = D_0047B500[0];
    }
}

s32 func_002E5C58(s32 arg0, s32 *arg1, s32 arg2) {
    *arg1 = arg2;
    if (func_002E4E48(arg0, 0x33, arg1, 4, 4) < 0) {
        return -0x21E;
    }
    return *arg1;
}

s32 func_002E5CA0(s32 arg0, s32 *arg1, s32 arg2) {
    *arg1 = arg2;
    if (func_002E4E48(arg0, 0x34, arg1, 4, 4) < 0) {
        return -0x21E;
    }
    return *arg1;
}

s32 func_002E5CE8(s32 arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    *arg1 = arg2;
    if (arg3 != 0) {
        arg1[1] = *arg3;
    } else {
        arg1[1] = 0;
    }
    if (func_002E4E48(arg0, 0x35, arg1, 8, 8) < 0) {
        return -0x21E;
    }
    if (arg3 != 0) {
        *arg3 = arg1[1];
    }
    return *arg1;
}
