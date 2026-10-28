extern s32 D_010D44A0[];
extern s32 D_010D44E8[];
extern void (*D_010D44EC[])(s32);
extern s32 D_001C6878[];
extern s32 D_001C3BF0[];
s32 func_0011C6C8(void);
s32 func_0011C6F0(void);
s32 func_0011C718(void);
void func_00145618(void);
void func_00145DF0(s32);

s32 func_00145EA0(void) {
    s32 i;
    switch (*D_010D44A0) {
    default:
        return 0;
    case 0:
        break;
    case 1:
    case 3:
        return 1;
    }
    if (((func_0011C6C8() & 0x1000) && !(func_0011C6F0() & 0x1000)) || (func_0011C718() & 0x1000)) {
        i = *D_010D44E8;
        if (++D_001C6878[i] >= 0x100) {
            D_001C6878[i] = 0;
        }
        func_00145DF0(i);
    } else if (((func_0011C6C8() & 0x4000) && !(func_0011C6F0() & 0x4000)) || (func_0011C718() & 0x4000)) {
        i = *D_010D44E8;
        if (--D_001C6878[i] < 0) {
            D_001C6878[i] = 0xFF;
        }
        func_00145DF0(i);
    }
    if ((func_0011C6C8() & *D_001C3BF0) && !(func_0011C6F0() & *D_001C3BF0)) {
        (*D_010D44EC)(0);
        func_00145618();
    }
    return 1;
}
