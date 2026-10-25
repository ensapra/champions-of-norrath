extern s32 D_001BB6B8[];
extern s32 D_001BB6C0[];
extern char D_010C1EB0[];
s32 func_0011ADE8(char *, char *);
s32 func_0015826C(s32, s32, s32, void *, s32);
s32 func_00158E40(s32, void *, s32, void *, s32);
void func_001A42B8(char *, void *);
s32 func_001A444C(char *);
#define CNT (D_001BB6B8[0])
#define HND (D_001BB6C0[0])

void func_0010B0E0(void *arg0) {
    char sp[16];
    void *sp10[2];
    s32 h = HND;
    s32 r;
    func_001A42B8(D_010C1EB0 + CNT, arg0);
    CNT++;
    D_010C1EB0[CNT] = 0;
    sp[0] = 0;
    r = func_0011ADE8(D_010C1EB0, sp);
    if (r == 1) {
        if (func_00158E40(h, arg0, 9, sp10, 1) == 0) goto fail;
    } else {
        sp10[0] = sp;
        if (func_0015826C(h, 0, 9, sp10, 1) != 0 && (r != 2 || func_00158E40(h, D_010C1EB0, 9, sp10, 1) != 0)) {
            CNT = func_001A444C(D_010C1EB0);
        } else {
fail:
            CNT = 0;
        }
    }
}
