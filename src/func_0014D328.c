void func_0014D370(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x108);
    ((void (*)(void *))p)(obj);
}

void func_0014D34C(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x104);
    ((void (*)(void *))p)(obj);
}

void func_0014D328(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x100);
    ((void (*)(void *))p)(obj);
}

extern u8 jtbl_004C006C[];
extern s32 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B4778(s32 x)
{
    if (*(s32 *)(jtbl_004C006C + 0x3F48) < 0) {
        return 0;
    }
    D_0110B080[0] = x;
    if (func_001B08B0(D_0110B000, 1, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0) {
        return 0;
    }
    return D_0110B040[0];
}
