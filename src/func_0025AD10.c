s32 D_00485C00;
s32 D_00485C04;
s32 D_00486C54;
s32 D_00486C58;
s32 D_00486C5C;
s32 D_00486CA4;
extern s32 func_0025C688(void);
extern s32 func_0025B908(void);
extern s32 func_0025BBD0(s32, s32);
extern s32 func_0025B248(s32);
extern s32 func_0025BB70(void);
extern s32 func_0025BD20(void);

s32 func_002DD960(s32 *d,s32 *s,u32 n){u32 i=0;n>>=2;if(n)do{ s32 v=*s; i++; s++; *d=v; d++;}while(i<n);return 0;}

s64 func_0025AD10(void) {
    func_0025B908();
    return func_0025BBD0(0, 0);
}

s64 func_0025AC68(s32 arg0) {
    D_00486C5C = -1;
    D_00486C54 = 0;
    D_00486C58 = 0;
    D_00486CA4 = 0;
    func_0025BD20();
    if (arg0 == 0) {
        func_0025B248(0);
    }
    return func_0025BB70();
}

void func_0025AC40(void) {
    func_0025C688();
    D_00485C04 = -1;
    D_00485C00 = -1;
}
