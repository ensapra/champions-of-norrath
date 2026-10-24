#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0014B558(void *, void *, s32);
void func_0014A994(u8 *a) {
    func_0014B558(a, a + 0x128, 5);
}

s32 func_001A4174(s32, s32);
s32 func_0014A808(void *a, s32 x) {
    s32 i;
    if (F(a, 0x870) == 0) {
        return -1;
    }
    for (i = 0; i < F(a, 0x878); i++) {
        if (func_001A4174(x, (*(s32 **)((char *)a + 0x870))[i]) == 0) {
            return i;
        }
    }
    return -1;
}
