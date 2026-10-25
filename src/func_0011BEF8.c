extern void func_00106EE8(void), func_0010A070(void), func_0010CF70(void), func_0010EFF0(void), func_00111BC0(void), func_001148D0(void), func_00118120(void), func_0011E3A0(void), func_0013B848(void), func_0013BAB8(void), func_0013E6B0(void), func_0013EE80(void), func_0013F3D0(void), func_00140FE0(void), func_001412B8(void), func_001451D0(void), func_00152D4C(void), func_0017A008(void), ovl_ntgui2_func_0013B788(void), ovl_ntgui2_func_00152A68(void);
extern void func_0011B968(s32);
extern void func_0014F440(s32);
extern s32 func_00171E88(void);
extern s32 D_001BD8AC[];
void func_0011BEF8(void) {
    func_00140FE0();
    if (D_001BD8AC[0] != 0) {
        func_0014F440(D_001BD8AC[0]);
        D_001BD8AC[0] = 0;
    }
    ovl_ntgui2_func_00152A68();
    func_00152D4C();
    func_0011B968(func_00171E88());
    func_00106EE8();
    ovl_ntgui2_func_0013B788();
    func_0010A070();
    func_00111BC0();
    func_0010CF70();
    func_001148D0();
    func_001451D0();
    func_001412B8();
    func_0011E3A0();
    func_0010EFF0();
    func_0013BAB8();
    func_0013B848();
    func_0013EE80();
    func_0013F3D0();
    func_00118120();
    func_0013E6B0();
    func_0017A008();
}
