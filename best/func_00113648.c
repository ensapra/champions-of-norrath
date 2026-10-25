typedef struct { s32 **list; s32 a, b; s32 n; } L;
extern L D_010C2A70, D_010C2A88;
extern s32 D_010C2A60, D_010C2B04, D_010C2B08, D_010C2B0C, D_010C2B10, D_010C2B14, D_010C2B1C, D_010C2B20, D_010C2AC4, D_010C2AC8;
extern s32 D_001BD944, D_001BD954, D_001BD93C;
void func_00114098(void);
void func_00113648(void) {
    s32 n, i;
    if (D_010C2B10) {
        D_010C2B10 = 0;
        n = D_010C2A70.n;
        if (!D_010C2B14) func_00114098();
        for (i = 0; i < n; i++) {
            D_010C2B08 += D_001BD944 * i;
        }
    }
}
