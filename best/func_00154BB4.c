s32 func_001A4174(s32);
void func_0011B9E0(s32);
s32 func_0016FA70(s32);

void func_00154BB4(char *a, s32 b) {
    s32 t;
    t = *(s32 *)(a + 0x924);
    if (t == 0) {
        if (b != 0) goto L7;
    } else if ((b == 0) || (func_001A4174(t) != 0)) {
        t = *(s32 *)(a + 0x924);
        if (t != 0) {
            func_0011B9E0(t);
        }
L7:
        if (b != 0) {
            *(s32 *)(a + 0x924) = func_0016FA70(b);
        } else {
            *(s32 *)(a + 0x924) = 0;
        }
        *(s32 *)(a + 0x98) = 2;
    }
}
