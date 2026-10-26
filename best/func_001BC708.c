s8 D_004844B4;
s32 D_00484CA4;
extern char D_00484A30[];
s32 func_001744A0(s32, void *, s32);
void func_001744B8(s32, s32, void *, s32);
void func_00174548(s32, s32, void *, s32);
void func_00190E20(void *, f32, f32, f32, f32, f32, f32, f32, f32);
void func_001919D0(void *, char *, f32, f32, f32, f32, f32, f32, f32);

void func_001BC708(s32 arg0, s32 a1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp[0x200] __attribute__((aligned(16)));
    s32 x, v8, v9, p, q, r;
    x = arg0 * 0x140 + 0x80;
    v9 = 0;
    v8 = 0;
    if (D_004844B4 == 4 || D_004844B4 == 1) {
        v8 = 0x16;
        v9 = 0xB;
    } else if (D_004844B4 == 3) {
        v8 = 0;
        v9 = 0;
    }
    if (arg3 < -5) {
        p = x + v8 - 0xA;
        q = x - 0x4B;
        r = 0x9E;
        if (arg3 == -6) r = 0xB3;
    } else if ((u32)(arg3 - 1) < 4U) {
        p = x + 4;
        q = x + 0x33;
        r = arg3 * 0x14 + 0x13D;
    } else if (arg3 == -2) {
        p = x - 0x2B;
        q = x - 0x2F;
        r = 0x11E;
    } else {
        q = x - 0x59;
        p = x + v9 - 0x30;
        r = 0x101;
    }
    func_00190E20(sp, 0, 0, 0, 0, 0, 0, 0, 0);
    if ((arg5 ^ 0) != 0) r = r - 0x38;
    func_001744B8(p - func_001744A0(D_00484CA4, sp, 1000000), r, sp, 1000000);
    func_001919D0(sp, D_00484A30, (f32)arg2, 0, 0, 0, 0, 0, 0);
    if (arg4 == 0) {
        func_001744B8(q - func_001744A0(D_00484CA4, sp, 1000000), r, sp, 1000000);
        return;
    }
    if (arg0 != 0) {
        func_00174548(p + q - 0x140, r, sp, 1000000);
        return;
    }
    func_00174548(p + q, r, sp, 1000000);
}
