typedef struct {
    s32 f0;
    s32 f4;
    char name[0xFC];
    char desc[0xFC];
} Buf_001B5680;

extern Buf_001B5680 D_0110B1C0;
extern u8 D_0110B3C0[];
s32 func_001B4C40(void);
s32 func_001B4D40(void);
char *func_001A4738(char *, const char *, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B5680(const char *name, const char *desc, s32 *out, s32 arg3)
{
    if (func_001B4C40() < 0)
        return 0xFFFF0000;
    if (func_001B4D40() != 0)
        return 0xFFFEFFFC;
    func_001A4738(D_0110B1C0.name, name, 0xFC);
    D_0110B1C0.name[0xFB] = 0;
    func_001A4738(D_0110B1C0.desc, desc, 0xFC);
    D_0110B1C0.desc[0xFB] = 0;
    if (func_001B08B0(D_0110B3C0, arg3, 0, &D_0110B1C0, 0x200, &D_0110B1C0, 0x10, 0, 0) < 0)
        return 0xFFFEFFFF;
    if (D_0110B1C0.f0 == 0)
        return 0xFFFEFFFD;
    out[0] = D_0110B1C0.f0;
    out[1] = D_0110B1C0.f4;
    return 0;
}
