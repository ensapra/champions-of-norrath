typedef struct {
    char pad_0[0x9A8];
    s32 unk_9A8;
    char pad_9AC[0x24];
    char unk_9D0[4];
} GuiObj;

s32 func_0014B41C(GuiObj *, s32);
void func_0014B938(s32);
GuiObj *func_0014D29C(s32);
void func_00151964(void *);
void func_0014D328(s32, s32);
extern s32 D_0047FBF4;
extern u8 func_001C8098[];

typedef struct {
    u8 pad[0x910];
    s32 x910;
    s32 x914;
    s32 x918;
} S1537BC;

void func_001537BC(S1537BC *arg0, s32 arg1) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xDF0);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D328(arg0->x910, arg1);
    func_0014D328(arg0->x914, arg1);
    func_0014D328(arg0->x918, arg1);
}

s32 func_00152424(s32 arg0, s32 arg1) {
    GuiObj *obj = func_0014D29C(arg0);
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
    GuiObj *obj = func_0014D29C(0);
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

s32 func_00152378(s32 arg0, s32 arg1) {
    GuiObj *obj = func_0014D29C(arg1);
    s32 *p;
    if (obj == NULL || !func_0014B41C(obj, D_0047FBF4)) {
        return 0;
    }
    p = &obj->unk_9A8;
    if (p == NULL) {
        return 0;
    }
    return *p != 0;
}
