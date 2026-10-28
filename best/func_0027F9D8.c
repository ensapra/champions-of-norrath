s32 func_001671F8(char *, s32, s32);
s32 func_001744A0(s32, s32, s32);
extern char D_00476888[];
extern char D_004768A0[];
s8 D_004844B4;
s32 D_00484CA0;
s32 D_00486D0C;
s32 D_00486D14;
s32 D_00486D18;
f32 D_00486D50;
f32 D_00486D54;
f32 D_00486D58;
f32 D_00486D5C;
f32 D_00486D60;
f32 D_00486D64;
s32 D_00486D68;

void func_0027F9D8(s32 arg0, s32 arg1) {
    char *str;
    s32 flag;
    s32 q;
    if (arg0 != D_00486D0C) {
        D_00486D5C = D_00486D50;
        D_00486D60 = D_00486D54;
        D_00486D64 = D_00486D58;
        if (arg0 == -1) {
            str = D_00476888;
            q = D_00486D18 / D_00486D14;
            flag = D_004844B4;
            flag = flag ? 0x1D : 0;
            D_00486D50 = (f32)(flag + 0xE9);
            goto common;
        }
        if (arg0 == -2) {
            str = D_004768A0;
            q = D_00486D18 / D_00486D14;
            flag = D_004844B4;
            flag = flag ? 0x1D : 0;
            D_00486D50 = (f32)(flag + 0xA3);
common:
            D_00486D54 = (f32)(q * 20 + 0x7A);
            D_00486D58 = (f32)(func_001744A0(D_00484CA0, func_001671F8(str, D_00486D14, D_004844B4), 1000000) + 10);
        } else {
            flag = D_004844B4;
            flag = flag ? 0x1D : 0;
            D_00486D58 = 20.0f;
            D_00486D54 = (f32)((arg0 / D_00486D14) * 20 + 0x7A);
            D_00486D50 = (f32)((arg0 % D_00486D14) * 20 + flag + 0x3D);
        }
        if (D_00486D0C == -3 || arg1 != 0) {
            D_00486D5C = D_00486D50;
            D_00486D60 = D_00486D54;
            D_00486D64 = D_00486D58;
        }
        D_00486D0C = arg0;
        D_00486D68 = 0;
    }
}
