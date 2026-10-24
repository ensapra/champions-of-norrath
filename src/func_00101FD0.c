extern s32 D_001BA9C0[];
extern u16 D_001BA8D0[];
extern u16 D_001BA948[];
extern void func_001A2660(void *, s32, s32);
extern void func_0018A2A8(char *, s32, u16 *);
extern char *func_001A42B8(char *, const char *);

void func_00101FD0(s32 code, char *out) {
    char buf[5];
    u16 idx = code - 0xA6;
    if (idx < 0x3A) {
        func_001A2660(buf, 0, 5);
        if (D_001BA9C0[0] == 2) {
            func_0018A2A8(buf, 5, &D_001BA8D0[idx]);
            func_001A42B8(out, buf);
        } else {
            func_0018A2A8(buf, 5, &D_001BA948[idx]);
            func_001A42B8(out, buf);
        }
    } else {
        *out = 0;
    }
}
