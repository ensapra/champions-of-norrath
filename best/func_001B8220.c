typedef struct { s32 a, b; } P;
extern u8 jtbl_004C006C[];
s32 Copy_5(u32, void *, s32);
void FlushCache(s32);
s32 GetEntryAddress_4(s32);
void SetSyscall_6(s32, s32);

void func_001B8220(void) {
    P *t = (P *)(jtbl_004C006C + 0x528C);
    P *p = t + 3;
    u32 i = 3;
    SetSyscall_6(t[0].a, t[0].b);
    Copy_5(0x80075000, jtbl_004C006C + 0x4F0C, 0x330);
    FlushCache(0);
    FlushCache(2);
    SetSyscall_6(t[1].a, t[1].b);
    SetSyscall_6(t[2].a, t[2].b);
    do {
        i++;
        SetSyscall_6(p->a, GetEntryAddress_4(p->a));
        p++;
    } while (i < 8);
    *(s32 *)(jtbl_004C006C + 0x5284) = GetEntryAddress_4(3);
}
