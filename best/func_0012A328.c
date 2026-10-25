extern s32 D_001BAC80[], D_001C6848[], D_001C6854[], D_001C4D74[], D_001C4D78[], D_001C4D7C[];
extern s32 D_010CB038[], D_010CB058[], D_010CB060[], D_010CB064[];
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
void func_00129D10(s32, s32);
void func_0012A230(void);
void func_0012A490(void);

void func_0012A328(void)
{
    s32 buf[8];
    func_00118140(buf, 0, 0, func_0012A490, 0);
    D_010CB058[0] = func_00118160(buf);
    if (D_001BAC80[0] & 1) {
        if (D_001C6848[0] == 2)
            D_010CB060[0] = 1;
    }
    if (D_001BAC80[0] & 2) {
        if (D_001C6854[0] == 2)
            D_010CB064[0] = 1;
    }
    D_001C4D78[0] = -1;
    D_001C4D7C[0] = -1;
    D_001C4D74[0] = 0;
    func_0012A230();
    func_00129D10(D_010CB038[0], 0);
}
