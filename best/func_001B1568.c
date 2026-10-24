extern u8 jtbl_004C006C[];
void SignalSema(s32);
void WaitSema(s32);
s32 CreateSema(void *);
void func_001B14E8(void);

void func_001B1568(void) { SignalSema(*(s32 *)(jtbl_004C006C + 0x3F38)); }

s32 func_001B1538(void) {
    func_001B14E8();
    WaitSema(*(s32 *)(jtbl_004C006C + 0x3F38));
    return 0;
}

void func_001B14E8(void) {
    s32 a[8];
    if (*(s32 *)(jtbl_004C006C + 0x3F38) == -1) {
        a[5] = 0;
        a[1] = 1;
        a[2] = 1;
        *(s32 *)(jtbl_004C006C + 0x3F38) = CreateSema(a);
    }
}
