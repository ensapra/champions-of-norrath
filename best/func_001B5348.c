s32 func_001B5680(s32, void *, s32, s32);
extern u8 D_00507628[];
typedef struct {
    s32 v;
    s32 pad;
    char str[0xFC];
} S1B52A8;
extern S1B52A8 D_0110B1C0;
extern u8 D_0110B3C0[];
s32 func_001B4C40(void);
s32 func_001B4D40(void);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void *func_001A4738(void *, void *, s32);

s32 func_001B5788(s32 a, void *b, s32 c)
{
    return func_001B5680(a, b, c, 1);
}

s32 func_001B57A8(s32 a, s32 c)
{
    return func_001B5680(a, D_00507628, c, 1);
}

s32 func_001B5348(s32 arg0)
{
    if (func_001B4C40() < 0) {
        return 0xFFFF0000;
    }
    if (func_001B4D40() != 0) {
        return 0xFFFEFFFC;
    }
    D_0110B1C0.v = arg0;
    if (func_001B08B0(D_0110B3C0, 10, 0, &D_0110B1C0, 4, &D_0110B1C0, 4, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    return D_0110B1C0.v;
}

s32 func_001B52A8(void *arg0)
{
    if (func_001B4C40() < 0) {
        return 0xFFFF0000;
    }
    if (func_001B4D40() != 0) {
        return 0xFFFEFFFC;
    }
    func_001A4738(D_0110B1C0.str, arg0, 0xFC);
    D_0110B1C0.str[0xFB] = 0;
    if (func_001B08B0(D_0110B3C0, 9, 0, &D_0110B1C0, 0x200, &D_0110B1C0, 4, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    return D_0110B1C0.v;
}
