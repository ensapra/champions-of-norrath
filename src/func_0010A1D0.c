extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern s32 func_0011BA18(s32);
extern void func_0011E320(s32);
extern void func_0011E358(s32);
extern void func_0010A140(s32);
extern s32 func_0010A270(void);
extern s32 func_0010A288(void);
extern s32 func_00114560(void);
extern s32 func_001167F0(void);
extern s32 func_0011AD80(void);
extern s32 func_0011C6C8(void);
extern void func_0011C6F0(void);

void func_0010A1D0(s32 a, s64 mode) {
    switch ((s32)mode) {
    case 0:
        func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x11), func_0010A140, 0);
        break;
    case 1:
        func_0011E358(a);
        break;
    case 2:
        func_0011E320(a);
        break;
    }
}

s64 func_0010A440(void) {
    s32 ok;
    if (func_0011AD80() == 0) {
        if (func_0011C6C8() & 0x10)
            func_0011C6F0();
        ok = func_001167F0() == 0;
        if (ok) {
            ok = func_00114560() ? 0 : ok;
            if (ok) {
                ok = func_0010A270() ? 0 : ok;
                if (ok)
                    return func_0010A288();
            }
        }
    }
}
