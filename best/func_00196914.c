extern s32 D_00480450, D_00480454, D_00480458, D_0048048C;
extern u8 D_010F4880[];
extern u8 D_004CECB8[], D_004CECC8[];
s32 WaitSema(s32);
s32 SignalSema(s32);
s32 DeleteSema(s32);
s32 RotateThreadReadyQueue(s32);
void ExitDeleteThread(void);
void func_001A1568(void *, s32, void *);
void func_001969C8(s32);
void func_001939EC(void *, s32);
void func_00193B0C(void *);
typedef struct { s32 a; s32 b; s32 c; s32 d; } T;
void func_00196914(void) {
    if (D_00480458 == 0) {
        do {
            T *t;
            if (D_0048048C != 0) WaitSema(D_0048048C);
            WaitSema(D_00480450);
            t = (T *)D_010F4880;
            if (t->d != 0) {
                if (t->d <= 0) func_001A1568(D_004CECB8, 0x55, D_004CECC8);
                func_001969C8(t->a);
                func_001939EC(t, 0);
            }
            SignalSema(D_00480450);
            RotateThreadReadyQueue(D_00480454);
        } while (D_00480458 == 0);
    }
    DeleteSema(D_00480450);
    func_00193B0C(D_010F4880);
    ExitDeleteThread();
}
