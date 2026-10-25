s32 func_00143A80(void *, const char *, s32);
s32 func_001D3E88(s32);
void func_001A6760(s32, s32);
s32 func_001671F8(const char *);
void func_001C7600(s32, s32, s32, s32);
void func_00143830(void *, s32);
s32 func_00165DC0(const char *, const char *);
s32 func_0024D308(s32, void *, f32);
extern char D_004705D0[];
extern char D_00470610[];
extern char D_00485368[];
extern char D_00485380[];
s32 D_004844A4;

typedef struct {
    char pad0[0xC];
    u32 flags;
    char pad10[0x54 - 0x10];
    s32 unk54;
    u8 unk58;
} Door;

void func_00213058(Door *arg0, s32 arg1) {
    s32 on;
    if (func_00143A80(arg0, D_00485368, 0) != 0) {
        if (func_001D3E88(func_00143A80(arg0, D_00485368, 0)) == 0) {
            func_001A6760(arg1, 7);
            func_001C7600(func_001671F8(D_004705D0), 0xB4, -1, 0);
            return;
        }
    }
    on = 1;
    arg0->unk58 = on;
    arg0->flags &= ~0x100000;
    func_00143830(arg0, on);
    func_0024D308(func_00165DC0(D_00485380, D_00470610), arg0, 1.0f);
    arg0->unk54 = D_004844A4;
}
