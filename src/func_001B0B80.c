#define F(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
void func_001B5C80(void);
void func_001B5CD8(void);

void func_001B0B80(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 *arg6) {
    void *p;

    func_001B5C80();
    F(arg0, void **, 0x3C) = 0;
    F(arg0, void **, 0x38) = 0;
    F(arg0, s32 *, 0) = arg1;
    F(arg0, s32 *, 4) = arg2;
    F(arg0, s32 *, 8) = arg3;
    F(arg0, s32 *, 0x10) = arg4;
    F(arg0, s32 *, 0x14) = arg5;
    F(arg0, s32 **, 0x40) = arg6;
    if (F(arg6, void **, 8) == NULL) {
        F(arg6, void **, 8) = arg0;
    } else {
        p = F(arg6, void **, 8);
        while (F(p, void **, 0x38) != NULL) {
            p = F(p, void **, 0x38);
        }
        F(p, void **, 0x38) = arg0;
    }
    func_001B5CD8();
}
