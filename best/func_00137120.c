extern char D_004CAE30[], D_004CAE40[], D_004CAE48[], D_004CAE58[], D_004CAE00[], D_004CAE68[], D_004CAE78[], D_004CAE88[], D_004CAE98[], D_004CAEA8[], D_004CAEB0[], D_004CAEC0[], D_004CAED0[];
extern s32 D_001BAC84[];
extern s32 D_001BAC80[];
extern s32 D_001BB6C4[];
void func_0013B738(void *);
void func_0013B658(void *, s64);
void func_0013BBA8(void);
void func_00136E90(s64);
void func_0011DA20(s32, s32);
void func_00130950(s32);
void func_00130A20(void);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, s32, s32);

void func_00137120(s32 a, s64 b) {
    s64 c = (s32)b;
    char *p;
    func_0013B738(D_004CAE30);
    p = D_004CAE00;
    func_0013B738(D_004CAE40);
    func_0013B738(D_004CAE48);
    func_0013B738(D_004CAE58);
    func_0013B738(p);
    func_0013B738(D_004CAE68);
    func_0013B738(D_004CAE78);
    func_0013B738(D_004CAE88);
    func_0013B738(D_004CAE98);
    func_0013B738(D_004CAEA8);
    func_0013B738(D_004CAEB0);
    func_0013B738(D_004CAEC0);
    func_0013B738(D_004CAED0);
    func_0013B658(p, c);
    func_0013BBA8();
    if ((D_001BAC84[0] & 6) == 6) {
        if (!(D_001BAC80[0] & 1)) {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x47), 0, D_001BB6C4[0]);
            return;
        }
        func_00130950(0);
        func_00130A20();
        return;
    }
    func_00136E90(c);
    func_0011DA20(0, 1);
}
