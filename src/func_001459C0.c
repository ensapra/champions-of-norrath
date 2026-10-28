extern void func_0014D270(void *);
extern void *D_010D44B0[4];
extern void *D_010D44C0[4];
extern void *D_010D44D0[];
extern void *D_010D44D4[];
extern void *D_010D44A8[];
extern void *D_010D44A4[];
void func_001459C0(void)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        if (D_010D44B0[i]) func_0014D270(D_010D44B0[i]);
        if (D_010D44C0[i]) func_0014D270(D_010D44C0[i]);
    }
    if (D_010D44D0[0]) func_0014D270(D_010D44D0[0]);
    if (D_010D44D4[0]) func_0014D270(D_010D44D4[0]);
    if (D_010D44A8[0]) func_0014D270(D_010D44A8[0]);
    if (D_010D44A4[0]) func_0014D270(D_010D44A4[0]);
}
