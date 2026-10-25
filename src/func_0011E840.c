extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern char func_0011E568[];
extern s32 func_001B9FD8[];
extern s32 func_001C40C0[];
void func_0011E840(s32 a) {
    switch (a) {
    case 0:
        func_001C40C0[9] = 3;
        break;
    case 1: {
        s32 v = func_0011BA18(0x68);
        func_00114948(2, 0x1F4, 0xFA, v, (void*)func_0011E568, *(s32*)((char*)func_001B9FD8 + 0x16EC));
        func_001C40C0[9] = 0;
        break;
    }
    }
}
