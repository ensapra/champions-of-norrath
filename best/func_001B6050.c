extern s32 Copy_2(s32, void *, s32);
extern s32 FlushCache(s32);
extern s32 GetEntryAddress_2(s32);
extern void SetSyscall_3(s32, s32);
extern s32 func_001B5FE8();
extern u8 D_004C3FE0[];
extern s32 D_004C4788[];

void func_001B6050(void) {
    s32 *p;
    u32 i;
    if (func_001B5FE8() != 0) {
        SetSyscall_3(D_004C4788[0], D_004C4788[1]);
        Copy_2(0x80074000, D_004C3FE0, 0x7A8);
        FlushCache(0);
        FlushCache(2);
        SetSyscall_3(D_004C4788[2], D_004C4788[3]);
        p = &D_004C4788[4];
        for (i = 2; i < 3; i++) {
            SetSyscall_3(*p, GetEntryAddress_2(*p));
            p += 2;
        }
    }
}
