extern char D_001C5500[];
extern char D_004CA1D8[];
extern char D_004CA200[];
extern char D_004CA220[];
extern s32 D_001BB6C4[];
void func_001270C0(void);
void func_0013DE28(void *);
s32 func_0013B698(void *);
void func_0013B5F8(void *, void *);
s32 func_0011BA18(s32);
void func_0011DA20(s32, s32);
void func_001288B0(void);
void func_00114948(s32, s32, s32, s32, void *, s32);

void func_00128930(void) {
    func_001270C0();
    func_0013DE28(D_001C5500);
    switch (*(s32 *)(D_001C5500 + 0x1304)) {
    case 2:
        if (*(s32 *)(D_001C5500 + 0x1300) == 0 && func_0013B698(D_004CA200) == 0
            && func_0013B698(D_004CA220) == 0) {
            func_0013B5F8(D_004CA220, D_004CA1D8);
            func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x6E), func_001288B0, D_001BB6C4[0]);
            return;
        }
        func_0011DA20(1, 8);
        return;
    case 1:
    case 3:
        func_0011DA20(1, 0xD);
        return;
    }
}
