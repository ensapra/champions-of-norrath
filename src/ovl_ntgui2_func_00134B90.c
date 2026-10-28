extern u8 func_001B9FD8[];
extern s32 D_010CE2D0[];
extern s32 D_010CE2DC[];
extern s32 D_001C536C[];
extern s32 D_001BB6C4[];
extern void func_00118140(void *, s32, s32, void *, s32);
extern s32 func_00118160(void *);
extern void func_00138990(s32);
extern void func_00134CB8(void);
extern void func_00134B28(void);
extern void func_0010B718(void);

void ovl_ntgui2_func_00134B90(void) {
    u8 stack[32];
    s32 value;
    s32 t;
    func_00118140(stack, 0, 0, func_00134CB8, 0);
    D_010CE2DC[0] = func_00118160(stack);
    value = D_001C536C[0];
    t = D_010CE2D0[value];
    D_001BB6C4[0] = t;
    func_00138990(t);
    func_00134B28();
    func_0010B718();
}
