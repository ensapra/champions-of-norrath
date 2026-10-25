extern s32 D_010C2B28[];
extern s32 D_010C2B70[];
extern s32 D_010C2B74[];
extern s32 D_010C2B84[];
extern volatile s32 D_001C3BF0[];
s32 func_0011C6C8(void);
s32 func_0011C6F0(void);
void func_00138990(s32);
void func_00116730(s32, s32, s32);

s32 func_001167F0(void) {
    switch (D_010C2B28[0]) {
    case 0:
        switch (D_010C2B84[0]) {
        case 0:
            if ((func_0011C6C8() & 0x8000) && !(func_0011C6F0() & 0x8000)) {
                func_00138990(D_010C2B70[0]);
            } else if ((func_0011C6C8() & 0x2000) && !(func_0011C6F0() & 0x2000)) {
                func_00138990(D_010C2B74[0]);
            }
            if (func_0011C6C8() & D_001C3BF0[0]) {
                if (!(func_0011C6F0() & D_001C3BF0[0])) {
                    func_00116730(D_010C2B74[0], 2, 0);
                }
            }
            return 1;
        case 1:
            if (func_0011C6C8() & D_001C3BF0[0]) {
                func_0011C6F0() & D_001C3BF0[0];
            }
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        case 4:
            return 1;
        case 5:
            return 1;
        default:
            return 1;
        }
    case 1:
        return 1;
    case 2:
        return 0;
    default:
        return 3;
    }
}
