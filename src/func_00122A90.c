extern s32 D_010C6EF0[];
extern u8 func_001C45D0[];
extern void func_0010A600(s32, s32);
extern void func_00138990(s32);

void func_00122A90(s32 a)
{
    s32 i = 0;
    s32 *b = D_010C6EF0;
    s32 *p = b + 1;
    do {
        if (a == p[-1]) {
            if (i == 2) {
                func_0010A600(b[0], 0x63);
                func_00138990(b[0]);
            } else {
                func_0010A600(*p, 0x63);
                func_00138990(*p);
            }
            *(s32 *)(func_001C45D0 + 0x8C) = 1;
        }
        i++;
        p++;
    } while (i < 3);
}
