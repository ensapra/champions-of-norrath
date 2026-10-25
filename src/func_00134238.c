extern s32 D_010CDB60[];
extern u8 func_001C5078[];
extern void func_0010A600(s32, s32);
extern void func_00138990(s32);

void func_00134238(s32 a)
{
    s32 i = 0;
    s32 *b = D_010CDB60;
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
            *(s32 *)(func_001C5078 + 0x2BC) = 1;
        }
        i++;
        p++;
    } while (i < 3);
}
