extern s32 D_010C4CF8[];
void func_00105860(s32);
void func_0013FAA8(void);
s32 func_00140030(void);
void func_0013E610(void);
void func_001401A0(void);
void func_00140F98(void);
void func_0011BA30(void);

void func_0011BCC0(void) {
    s32 *p = D_010C4CF8;
    func_0011BA30();
    func_00105860(*p);
    func_0013FAA8();
    func_00140030();
    if (*p & 1) {
        func_0013E610();
    }
    func_001401A0();
    func_00140F98();
}
