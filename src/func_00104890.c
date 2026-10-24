extern s32 D_010B4440[];
extern s32 D_001BAC60[];
extern void func_00104D50(s32, void *, s32);

void func_00104820(void) {
    s32 *p = D_010B4440;
    if (p[1] != 0) {
        func_00104D50(D_001BAC60[0], p, 0x100);
        p[1] = 0;
    }
}

extern char D_010B4400[];
extern void func_0017B760(void *, s32, s32);

void func_00104868(void) {
    func_0017B760(D_010B4400, 0, 0x601290);
}

void func_00104890(void) {
    func_0017B760(D_010B4400, 0, 0x607790);
}
