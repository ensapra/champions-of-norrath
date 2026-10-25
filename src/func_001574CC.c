s32 func_0014B41C(void *, s32);
void *func_0014D29C();
s32 D_0047FBF4;

void func_001574CC(void *a0) {
    u8 *arg0 = (u8 *)a0;
    register u8 *t = (u8 *)func_0014D29C();

    if (t != NULL && func_0014B41C(t, D_0047FBF4) != 0) {
        *(s32 *)(arg0 + 0x830) = *(s32 *)(t + 0x5A0) + *(s32 *)(t + 0x5D4);
        *(s32 *)(arg0 + 0x834) = *(s32 *)(t + 0x5A4) + *(s32 *)(t + 0x5D4);
        *(s32 *)(arg0 + 0x838) = *(s32 *)(t + 0x5A0) + *(s32 *)(t + 0x5D4) + *(s32 *)(t + 0x5AC);
        *(s32 *)(arg0 + 0x83C) = *(s32 *)(t + 0x5A4) + *(s32 *)(t + 0x5D4) + *(s32 *)(t + 0x5B0);
        *(s32 *)(arg0 + 0x98) = 2;
    }
}
