extern s32 *D_01107D64[];
extern s32 *D_01107D6C[];
void func_001AFB48(s32 i) {
    s32 n = 12;
    if (i < 0) {
        s32 j = i & 0x7fffffff;
        *(volatile s32 *)((char *)D_01107D64[0] + j * n) = 0;
    } else {
        *(volatile s32 *)((char *)D_01107D6C[0] + i * n) = 0;
    }
}
