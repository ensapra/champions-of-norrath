extern s32 D_010CB030[];
extern s32 D_010CB038[];
extern s32 D_010CB060[];
extern char D_004CA2A0[];
typedef struct { char data[0xC0]; } Buf0012A058;
void func_001050A8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00105190(void *);
void func_0010B378(s32, void *);
void func_0010C7E8(s32, s32, s32, s32);
s32 func_0011BA18(s32);
void func_0011CEF0(s32, s32, s32);
void func_0011E420(s32, s32);

void func_0012A058(s32 mode) {
    Buf0012A058 b1;
    Buf0012A058 b2;
    s32 i;

    func_0011E420(0, 0);
    func_0011CEF0(D_010CB030[0], mode, 0x18);
    if (mode < 0) return;
    i = 0;
    if (mode >= 7) {
        if (mode < 14) goto test;
        return;
    }
    for (; i < 2; i++) {
        func_0010B378(D_010CB038[i], D_004CA2A0);
        D_010CB060[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        func_001050A8(&b1, D_010CB038[i], 0xB, 0, 1, 0, 0x10, 0x14, 0x150, 0x14);
        func_00105190(&b1);
    }
    func_0010C7E8(0, func_0011BA18(2), func_0011BA18(3), 0);
    return;
body:
    func_001050A8(&b2, D_010CB038[i++], 0xB, 0, 0xA, 0, 0x10, 6, 0x150, 6);
    func_00105190(&b2);
test:
    if (i < 2) goto body;
}
