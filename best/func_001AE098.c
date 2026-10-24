void func_001ADF70(u32, u32);
void func_001AE098(u32 a, u32 b) {
    func_001ADF70(a & 0xFFFFFFC0, b & 0xFFFFFFC0);
}

typedef struct Q_1AE870 {
    s32 unk0;
    s32 unk4;
    void *unk8;
    void *unkC;
    s32 unk10;
} Q_1AE870;
extern Q_1AE870 D_01107840;
Q_1AE870 *func_001AE870(s32 arg0) {
    Q_1AE870 *q = &D_01107840;
    q->unk0 = arg0;
    q->unk8 = &q->unk10;
    q->unk4 = 0;
    q->unkC = &q->unk10;
    return q;
}

s32 _iEnableIntc(s32);
void func_001AE3A0(s32 a) {
    _iEnableIntc(a);
}
