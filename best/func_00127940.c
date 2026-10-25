extern void func_00114948(s32, s32, s32, void *, void *, s32);
extern void *func_0011BA18(s32);
extern void func_001A3D78(char *, void *, char *);
extern void func_001274B0(void);
extern void func_001277D8(void);
extern s32 D_010C92C8[], D_010C92CC[], D_010C9160[];
extern char *D_001C6830[];
extern s32 D_001BB6C4[];
void func_00127940(void) {
    char buf[0x400];
    void *s;
    if (D_010C92C8[0] != 0) {
        D_010C92C8[0]--;
        s = func_0011BA18(0x22);
        func_001A3D78(buf, s, D_001C6830[0] + D_010C9160[D_010C92CC[0] + D_010C92C8[0]] * 0x20C + 0x10C);
        func_00114948(1, 0x1F4, 0xFA, buf, func_001277D8, D_001BB6C4[0]);
    } else if (D_010C92CC[0] != 0) {
        D_010C92CC[0]--;
        s = func_0011BA18(0x23);
        func_001A3D78(buf, s, D_001C6830[0] + D_010C9160[D_010C92CC[0]] * 0x20C + 0x10C);
        func_00114948(1, 0x1F4, 0xFA, buf, func_001277D8, D_001BB6C4[0]);
    } else {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x3B), func_001274B0, D_001BB6C4[0]);
    }
}
