/* identical to func_002D8998 (matched), with its names changed by decompdecomp */
extern s32 D_004C3FA8[];
extern s32 D_004C3FAC[];
s32 CreateSema(void *);
void func_001B0FD8(void) {
    s32 a[8];
    if (D_004C3FA8[0] == -1) {
        a[5] = 0;
        a[2] = 1;
        a[1] = 1;
        D_004C3FA8[0] = CreateSema(a);
        D_004C3FAC[0] = CreateSema(a);
    }
}
