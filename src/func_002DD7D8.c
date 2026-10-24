extern s32 D_00444A20[];
extern u8 *D_00444A18;
void SetSyscall_8(s32, s32);
u8 *FindAddress_2(void *, void *, void *);
void copy_words(void);
void find_word(void);

void func_002DD7D8(void)
{
    u8 *pa;
    u8 *pb;
    u8 *a;
    u8 *b;

    SetSyscall_8(D_00444A20[0], D_00444A20[1]);
    SetSyscall_8(D_00444A20[2], D_00444A20[3]);
    pa = FindAddress_2((void *)0x80000000, (void *)0x80080000, find_word);
    a = pa - 0x20C;
    pb = FindAddress_2((void *)0x80000000, (void *)0x80080000, copy_words);
    b = pb - 0x168;
    while (a != b) {
        if (a < b) {
            pa = FindAddress_2(pa + 4, (void *)0x80080000, find_word);
            a = pa - 0x20C;
        } else {
            pb = FindAddress_2(pb + 4, (void *)0x80080000, copy_words);
            b = pb - 0x168;
        }
    }
    D_00444A18 = a;
}
