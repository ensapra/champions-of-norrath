typedef struct { char pad[0x9A0]; s64 f9A0; } S2EDAB8;

s32 func_002EDAB8(S2EDAB8 *a0, s32 a1, s32 *a2) {
    s32 v = -1;
    if (a1 == 3) {
        v = a0->f9A0;
        if (a2) a0->f9A0 = *a2;
    }
    return v;
}
