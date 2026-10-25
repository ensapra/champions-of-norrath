extern s32 D_010C21F0[];
extern s32 D_010C21F8[];
extern s32 D_001BB6C4[];
extern s32 D_001BD8AC[];
s32 func_001523D0(s32);
void func_00152520(void);
void func_0014B6F4(s32);
void func_00104F30(s32);
void func_00106E30(s32, s32);
void func_001389A0(s32);

static inline void helper(s32 *p)
{
    s32 v = *p;
    if (func_001523D0(D_001BD8AC[0]) == (v = *p)) {
        func_00152520();
        v = *p;
    }
    func_0014B6F4(v);
    func_00104F30(*p);
    func_00106E30(0, *p);
    func_00106E30(1, *p);
    if (D_001BB6C4[0] == *p) {
        D_001BB6C4[0] = 0;
    }
    func_001389A0(*p);
    *p = 0;
}

void func_0010D870(void)
{
    s32 i;
    for (i = 0; i < 2; i++) {
        if (D_010C21F8[i] != 0) {
            helper(&D_010C21F8[i]);
        }
        if (D_010C21F0[i] != 0) {
            helper(&D_010C21F0[i]);
        }
    }
}
