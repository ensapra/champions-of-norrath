extern u8 func_001C4B18[];
extern u8 jtbl_004C006C[];
extern u8 D_010CB078[];
extern s32 D_010CB0B8[];
s32 func_001B34C0(void *, void *);
void ExitDeleteThread(void);

void func_00129548(void) {
    if (*(s32 *)(func_001C4B18 + 0x260) == 1)
        D_010CB0B8[0] = func_001B34C0(jtbl_004C006C + 0xA1E4, D_010CB078);
    else
        D_010CB0B8[0] = func_001B34C0(jtbl_004C006C + 0xA1F4, D_010CB078);
    *(s32 *)(func_001C4B18 + 0x270) = 1;
    ExitDeleteThread();
}
