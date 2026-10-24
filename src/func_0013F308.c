extern s32 D_010D1244[], D_010D1248[], D_010D124C[], D_010D1250[];
extern s32 D_001C6828[], D_001C682C[], D_001C6830[], D_001C6834[], D_001C6838[], D_001C683C[];
extern s32 D_010D1230[];
extern void func_00140010(void *);
extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern s32 func_001B4C40(void);
extern s32 func_001B4D40(void);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
typedef struct { s32 v; s32 pad; char str[0xFC]; } S1B52A8;
extern S1B52A8 D_0110B1C0;
extern u8 D_0110B3C0[];

s32 func_001B5348(s32 arg0) {
    if (func_001B4C40() < 0) return 0xFFFF0000;
    if (func_001B4D40() != 0) return 0xFFFEFFFC;
    D_0110B1C0.v = arg0;
    if (func_001B08B0(D_0110B3C0, 10, 0, &D_0110B1C0, 4, &D_0110B1C0, 4, 0, 0) < 0) return 0xFFFEFFFF;
    return D_0110B1C0.v;
}

void func_0013F378(void) {
    D_010D1244[0] = 0;
    D_010D1248[0] = 0;
    D_010D124C[0] = 0;
    D_010D1250[0] = 0;
    D_001C6828[0] = 0;
    D_001C682C[0] = 0;
    D_001C6830[0] = 0;
    D_001C6834[0] = 0;
    D_001C6838[0] = 0;
    D_001C683C[0] = 0;
}

void func_0013F340(void *arg0) {
    void (*fn)(s32);
    func_00140010(arg0);
    fn = *(void (**)(s32))((u8 *)arg0 + 8);
    if (fn != 0) fn(D_010D1230[0]);
}

s32 func_0013F308(void) {
    if (func_001404D0() != 0) return 0;
    D_010D1230[0] = func_001404F0();
    return 1;
}
