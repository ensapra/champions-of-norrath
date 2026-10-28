typedef struct { s32 a, b, c; } V3;
extern s32 D_0044DE58[];
s32 func_001450E8(void *, s32, s32, s32, V3, V3, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
volatile unsigned long long func_00314188(void *p, s32 a1, s32 a2, V3 v1, V3 v2, s32 a5, s32 a6, s32 a7, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4) {
    func_001450E8(p, 0, a1, a2, v1, v2, a5, a6, 0, 0, s0, s1, s2, s3, s4, 1, 0);
    *(s32 *)((u8 *)p + 0x1C8) = a7;
    *(s32 **)((u8 *)p + 0x48) = D_0044DE58;
}
