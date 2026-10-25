extern s64 func_00171040(s64, s64);
extern s64 func_001712C8(s64, s64);
extern s64 func_00179948(s64, s64);
extern s32 func_001799B0(s64, s64);
extern s32 func_00179AB8(s64);
extern s32 func_001AEEE0(s32);
extern void func_001AF6D8(char *, s32);
extern u8 jtbl_004C006C[];
extern u8 jtbl_00503023[];

void func_001AEF78(s64 x)
{
    s32 e = 0;

    if (func_001799B0(x, 0) < 0) {
        x = func_00179948(0, x);
        (*(void (**)(s32))(jtbl_004C006C + 0x3EA0))(0x2D);
    }
    if (func_001799B0(x, *(s64 *)(jtbl_00503023 + 0x4445)) < 0) {
        while (func_001799B0(x, *(s64 *)(jtbl_00503023 + 0x444D)) < 0) {
            x = func_00171040(x, 0x4024000000000000LL);
            e--;
        }
    } else {
        while (func_001799B0(x, 0x3FF0000000000000LL) >= 0) {
            x = func_001712C8(x, 0x4024000000000000LL);
            e++;
        }
    }
    func_001AF6D8(jtbl_00503023 + 0x442D,
                  func_001AEEE0(func_00179AB8(func_00171040(x, *(s64 *)(jtbl_00503023 + 0x4455)))));
    if (e >= 0) {
        func_001AF6D8(jtbl_00503023 + 0x4435, e);
    } else {
        func_001AF6D8(jtbl_00503023 + 0x443D, e);
    }
}
