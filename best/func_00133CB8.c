extern void func_0010A600(s32, s32);
extern void func_00116AD8(s32);
extern void func_00116AF0(void *, s32);
extern s32 D_001C50B8[], D_010CDB60[];
extern char D_001C50C8[], D_001C5268[], D_001C52C0[];

void func_00133CB8(s32 a, s64 b)
{
    s32 idx = b;
    switch (idx) {
    case 0:
        func_00116AD8(4);
        func_00116AF0(D_001C50C8, 0x67);
        break;
    case 1:
        func_00116AD8(4);
        func_00116AF0(D_001C5268, 0x15);
        break;
    case 2:
        func_00116AD8(4);
        func_00116AF0(D_001C52C0, 0x12);
        break;
    }
    func_0010A600(D_010CDB60[idx], D_001C50B8[idx]);
}
