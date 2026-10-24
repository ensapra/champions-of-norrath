extern s32 func_00165DC0(char *, char *);
extern void func_00172708(s32, s32, s32, s32, u32);
s32 D_004844A4;
s32 D_004866C0;
extern char D_0047ABA8[];
extern char D_0047ABB8[];
extern char D_0047ABD0[];
typedef struct { u8 pad[0xC]; s32 fC; u8 pad2[0x54]; s32 f64; } S34BEB8;
extern S34BEB8 D_0034BEB8;

s32 func_002CD7D8(void) {
    S34BEB8 *s;
    func_00172708(func_00165DC0(D_0047ABA8, D_0047ABB8), 0xC0, 0x14A, 3, 0x80808080);
    func_00172708(func_00165DC0(D_0047ABA8, D_0047ABD0), 0x40, 0x32, 3, 0x80808080);
    s = &D_0034BEB8;
    if (D_004844A4 >= 0x12D) {
        return 1;
    }
    if (s->fC | s->f64) {
        D_004866C0 = 1;
        return 1;
    }
    return 0;
}
