typedef struct { s32 attr; void *entry; void *stack; s32 stackSize; s32 gp; s32 prio; } ThreadParam;
extern s32 D_00446094;
extern s32 D_008E8158;
extern u8 D_008E8160[];
extern ThreadParam D_008E8190;
s32 GetThreadId_2(void);
void ReferThreadStatus_2(s32, void *);
s32 CreateThread_2(void *);
void StartThread_2(s32, s32);
void ChangeThreadPriority_2(s32, s32);
void func_002E2498(void);

s32 func_002E2568(s32 prio, void *stack, s32 size) {
    s32 ok = 1;
    if (D_00446094 == 0) {
        D_008E8158 = GetThreadId_2();
        ReferThreadStatus_2(D_008E8158, D_008E8160);
        D_008E8190.stackSize = size;
        D_008E8190.entry = func_002E2498;
        D_008E8190.stack = stack;
        D_008E8190.prio = prio;
        D_008E8190.gp = 0;
        D_00446094 = CreateThread_2(&D_008E8190);
        StartThread_2(D_00446094, 0);
    } else {
        ok = 0;
        ChangeThreadPriority_2(D_00446094, prio);
    }
    return ok;
}
