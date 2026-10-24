extern s32 D_004C3FC8[];
extern u8 *D_004C3FC0;
void SetSyscall_2(s32, s32);
u8 *FindAddress(void *, void *, void *);
void func_001B5D58(void);
void func_001B5D90(void);

void func_001B5E18(void)
{
    u8 *pa;
    u8 *pb;
    u8 *a;
    u8 *b;

    SetSyscall_2(D_004C3FC8[0], D_004C3FC8[1]);
    SetSyscall_2(D_004C3FC8[2], D_004C3FC8[3]);
    pa = FindAddress((void *)0x80000000, (void *)0x80080000, func_001B5D90);
    a = pa - 0x20C;
    pb = FindAddress((void *)0x80000000, (void *)0x80080000, func_001B5D58);
    b = pb - 0x168;
    while (a != b) {
        if (a < b) {
            pa = FindAddress(pa + 4, (void *)0x80080000, func_001B5D90);
            a = pa - 0x20C;
        } else {
            pb = FindAddress(pb + 4, (void *)0x80080000, func_001B5D58);
            b = pb - 0x168;
        }
    }
    D_004C3FC0 = a;
}
