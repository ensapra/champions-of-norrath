extern s32 D_003642D0[];
extern void *D_004804D0;
void func_001A2660(s32, s32, s32);
void func_0019BF9C(s32 *arg0) {
    *(s32 *)((u8 *)D_003642D0 + 0x10) = 0;
    *(s32 *)((u8 *)D_003642D0 + 0xC) = 0;
    *arg0 = 0;
    func_001A2660(*(s32 *)((u8 *)D_004804D0 + 0x54), 0, *(s32 *)((u8 *)D_004804D0 + 0x58) * 4);
}
