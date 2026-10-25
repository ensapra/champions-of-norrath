extern s32 D_001BAC80[], D_001C6848[], D_001C6854[], D_001C4E9C[];
extern s32 D_010CD478[], D_010CD780[], D_010CD784[], D_010CD788[], D_010CD438[];
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
void func_00130FA8(s32, s32);
void func_00131588();
void func_00131850(void);

void func_00131730(void)
{
    s32 buf[8];
    func_00118140(buf, 0, 0, func_00131850, 0);
    D_010CD478[0] = func_00118160(buf);
    if (D_001BAC80[0] & 1) {
        if (D_001C6848[0] == 2)
            D_010CD780[0] = 1;
    }
    if (D_001BAC80[0] & 2) {
        if (D_001C6854[0] == 2)
            D_010CD784[0] = 1;
    }
    if (D_001BAC80[0] & 4)
        D_010CD788[0] = 1;
    D_001C4E9C[0] = 0;
    func_00131588();
    func_00130FA8(D_010CD438[0], 0);
}
