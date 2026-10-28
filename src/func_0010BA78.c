extern s32 D_001BB6D8[];
void func_0010BAB8(void);
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
void func_0010BA78(void) {
    u8 buf[0x20];
    D_001BB6D8[0] = 0;
    func_00118140(buf, 1, 0, func_0010BAB8, 0);
    func_00118160(buf);
}
