/* identical to func_002CB1D0 (matched), with its names changed by decompdecomp */
void func_002CBEF0(void *);
void func_002CBF00(void *, s32);
extern u8 D_008D86A0[];

void __static_initialization_and_destruction_0_010D3EB8(s32 arg0, s32 arg1) {
    s32 saved_s0 = arg0;
    if (arg1 != 0xFFFF) goto exit;
    if (saved_s0 == 1) {
        func_002CBEF0(D_008D86A0);
    }
    if (saved_s0 == 0) {
        func_002CBF00(D_008D86A0, 2);
    }
exit:
    return;
}
