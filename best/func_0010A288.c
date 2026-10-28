extern int func_0010A5B8(int);
extern void func_0010A600(int, int);
extern void func_00114948(int, int, int, int, void *, int);
extern int func_001169E8(void);
extern int func_0011BA18(int);
extern int func_0011C6C8(void);
extern int func_0011C6F0(void);
extern int func_0011C728(void);
extern int func_0011C738(void);
extern void func_0011E320(void);
extern void func_0011E358(void);
extern char func_0010A140[];
extern char func_0010A1A0[];
extern int D_001BB6C4[];
extern int D_001BD874[];
extern int D_001BD87C[];
extern int D_001C3BF0[];

int func_0010A288(void) {
    if (func_001169E8() == 2) {
        if ((func_0011C6C8() & 0x2000) && !(func_0011C6F0() & 0x2000)) {
            if (func_0010A5B8(D_001BD87C[0]) != 0) func_0011E320();
        } else if ((func_0011C6C8() & 0x8000) && !(func_0011C6F0() & 0x8000)) {
            if (func_0010A5B8(D_001BD874[0]) != 0) func_0011E358();
        } else if ((func_0011C6C8() & D_001C3BF0[0]) && !(func_0011C6F0() & D_001C3BF0[0])) {
            if (func_0011C738() == 0) {
                func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x11), func_0010A140, D_001BB6C4[0]);
            } else {
                int b = 0xF;
                if (func_0011C728() != 0) b = 0x10;
                func_00114948(1, 0x1F4, 0xFA, func_0011BA18(b), func_0010A1A0, D_001BB6C4[0]);
            }
        }
    } else if ((func_0011C6C8() & D_001C3BF0[0]) && !(func_0011C6F0() & D_001C3BF0[0])) {
        func_0010A600(0, 0);
    }
    return 1;
}
