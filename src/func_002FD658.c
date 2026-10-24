s32 func_002FD2E0(s32, s32);

s32 func_002FD658(void *a0, s32 a1, s32 a2, s32 a3, s32 *a4) {
    if (func_002FD2E0((s32)a0, a2)) {
        a4[0] = a3;
        a4[2] = 8;
        a4[1] = a1;
        return (a1 & 6) == 4;
    } else {
        s32 obj = *(s32 *)((char *)a0 + 8);
        char *vt = *(char **)(obj + 4) + 0x10;
        return (*(s32 (**)(s32, s32, s32, s32, s32 *))(vt + 4))(
            obj + *(s16 *)vt, a1, a2, a3, a4);
    }
}
