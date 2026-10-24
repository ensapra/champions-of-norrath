typedef struct {
    char pad_0[0x9A8];
    s32 unk_9A8;
    char pad_9AC[0x24];
    char unk_9D0[4];
} GuiObj;

s32 func_0014B41C(GuiObj *, s32);
void func_0014B938(s32);
GuiObj *func_0014D29C();
void func_00151964(void *);
extern s32 D_0047FBF4;

s32 func_00152424(s32 arg0) {
    GuiObj *obj = func_0014D29C();
    s32 *p;
    if (obj == NULL || !func_0014B41C(obj, D_0047FBF4)) {
        return 0;
    }
    p = &obj->unk_9A8;
    if (p == NULL) {
        return 0;
    }
    if (*p != 0) {
        return 0;
    }
    *p = arg0;
    func_0014B938(arg0);
    func_00151964(obj->unk_9D0);
    return 1;
}

s32 func_001523D0(void) {
    GuiObj *obj = func_0014D29C();
    s32 *p;
    if (obj == NULL || !func_0014B41C(obj, D_0047FBF4)) {
        return 0;
    }
    p = &obj->unk_9A8;
    if (p == NULL) {
        return 0;
    }
    return *p;
}
