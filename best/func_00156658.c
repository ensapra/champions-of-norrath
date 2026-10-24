void func_00156658(char *arg0) {
    s32 t5, t6, t9, h1, h2;
    s32 *t8;

    t5 = *(s32 *)(arg0 + 0x5D4);
    t8 = (s32 *)(arg0 + 0x910);
    t9 = *(s32 *)(arg0 + 0x5A0) + t5;
    t6 = *(s32 *)(arg0 + 0x5A4) + t5;
    h1 = *(s32 *)(arg0 + 0x5AC) >> 1;
    h2 = *(s32 *)(arg0 + 0x5B0) >> 1;
    t8[0] = 0;
    switch (*(s32 *)(arg0 + 0x924)) {
    case 1:
        t8[1] = t9 + h1;
        t8[2] = t6 + h2;
    case 0:
    case 2:
        t8[1] = t9;
        t8[2] = t6;
        return;
    }
}
