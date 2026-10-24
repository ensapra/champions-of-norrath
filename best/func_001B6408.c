extern s32 Copy_4(s32, void *, s32);
extern s32 FlushCache(s32);
extern s32 GetEntryAddress_3(s32);
extern s32 SetSyscall_5(s32, s32);
extern u8 jtbl_004C006C[];
extern u8 D_004C47A8[], D_004C4EE8[];
void func_001B6408(void) {
    s32 *p, *q;
    u32 i;
    s32 a, b;
    if (!(*(volatile s32 *)0x10001810 & 0x100)) {
        p = (s32 *)(jtbl_004C006C + 0x4EA4);
        i = 2;
        q = p + 4;
        SetSyscall_5(((s32 *)(jtbl_004C006C + 0x4EA4))[0], p[1]);
        Copy_4(0x80076000, D_004C47A8, 0x740);
        Copy_4(0x82000, D_004C4EE8, 0x28);
        FlushCache(0);
        FlushCache(2);
        a = p[2];
        b = p[3];
        SetSyscall_5(a, b);
        do {
            i++;
            SetSyscall_5(q[0], GetEntryAddress_3(q[0]));
            q += 2;
        } while (i < 8);
    }
}
