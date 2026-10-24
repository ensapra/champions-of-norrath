void func_00105148(u8 *b, s32 x, s32 y, s32 z) {
    s32 *p2 = (s32 *)(b + 0x6C);
    s32 *p1 = (s32 *)(b + 0x44);
    s32 i;
    for (i = 0; i < 5; i++) {
        if (*p1 == 0) {
            *p1 = x;
            p2[-5] = y;
            *p2 = z;
            return;
        }
        p2++;
        p1++;
    }
}
