extern void func_0011C3B8(s32, s32, s32, s32);
extern void func_0011C298(s32, void *);
extern void func_00100A20(char **, s32);
extern void func_00185318(void *, s32);
extern void func_001853D0(void *, s32);
extern void func_00185370(void *, s32);
extern s32 func_001A444C(char *);
extern s32 func_0018ABA0(char **);
extern void func_00184590(void *, s32, char **, s32);
extern void func_0011C388(s32);
extern void func_0011C340(s32, s32);
extern void func_0011C370(s32, s32);
extern u8 jtbl_004C006C[];
extern u8 func_001B9FD8[];
extern s32 D_00B0B928[];
extern s32 D_00B0B978[];
extern s32 D_00B0B97C[];
extern s32 D_00B0B980[];
extern u8 D_00B08A48[];

void func_00100B60(u32 a, char *str) {
    char *words[1024];
    char *cur;
    char **w;
    u8 *obj;
    s32 dir = 0;
    s32 total;
    func_0011C3B8(0, 1, 3, 0);
    func_0011C298(4, jtbl_004C006C + 0x575C);
    func_00100A20(0, 0);
    switch (a) {
    case 1:
        dir = -1;
        goto def;
    case 2:
        dir = 1;
    case 3:
        obj = func_001B9FD8 + 0x668;
        break;
    default:
    def:
        obj = func_001B9FD8 + 0x568;
        break;
    case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 0:
        obj = func_001B9FD8 + 0x568;
        break;
    }
    total = D_00B0B97C[0] + D_00B0B980[0];
    D_00B0B928[0] = 0x309B;
    D_00B0B928[10] = 0x309C;
    D_00B0B928[1] = 0;
    D_00B0B928[11] = 0;
    func_00185318(D_00B0B928, 2);
    switch (D_00B0B978[0]) {
    case 0:
        func_001853D0(D_00B08A48, total);
        break;
    case 2:
        func_00185370(D_00B08A48, total);
        break;
    case 1:
    default:
        func_00185370(D_00B08A48, 0);
        break;
    }
    cur = str;
    w = words;
    if (func_001A444C(cur) > 0) {
        char *x;
        while ((x = (char *)func_0018ABA0(&cur)) != 0) { *w = x; w++; }
    }
    *w = 0;
    func_00184590(obj, dir, words, 0);
    func_0011C388(0);
    func_0011C340(0x32, -0x12C);
    func_0011C370(0x32, 0x44);
}
