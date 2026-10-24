void func_002D70D0(char *, ...);
extern char D_00464328[];
extern u8 D_01FC0000[];

void func_00191310(s32 a, s32 b)
{
    u8 *base = D_01FC0000;
    s32 i;
    for (i = 0; i < 0x1400; i++) {
        if (base[i] != 0xA5) {
            func_002D70D0(D_00464328, a, b);
            *(s32 *)0 = 0;
        }
    }
}
