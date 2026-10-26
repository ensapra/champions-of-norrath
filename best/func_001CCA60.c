extern s32 D_0034B8C8[];
extern s32 D_0034B8D8[];
extern s32 D_0034B8E8[];
extern s32 D_0034B908[];
extern s32 D_0034B918[];
extern s32 D_0034B928[];
extern s32 D_0034B958[];
extern s32 D_0034B968[];
extern s32 D_0034B978[];
extern s32 D_0042E300[];
extern s8 D_00483829;
extern s32 D_00484040;
extern s32 D_0048433C;
extern s32 D_00484340;
extern f32 D_00484420;
extern s32 D_00484498;
extern s32 D_00484F58;
extern s32 D_00484F5C;
extern s32 D_00484F60;
extern s32 D_00485010;
extern f32 D_00485930;
extern f32 D_00485934;
extern s32 D_00485938;
extern s32 D_004865DC;
extern f32 D_00486630;
extern f32 D_00486634;
extern f32 D_00486638;
extern s32 D_00486640;
extern s32 D_00486644;

void func_0025ADA8(void **, s32 *, s32, s32 *, s32 *, s32 **, void *, s32 *);

s32 *func_001CCA60(void **arg0, s32 arg1, s32 *arg4) {
    s32 sp[8];
    s32 var21 = 0;
    s32 *var11 = D_0042E300;
    void **sp0 = arg0;
    sp[1] = arg1;
    sp0 = arg0;
    /* compare fields */
    if (D_0042E300[3] != (s32)D_00485930) var21 = 1; /* approximate */
    /* ... many comparisons skipped; just compile a skeleton */
    if (sp[1] == 0) {
        if (var21 != 0) {
            D_0042E300[3] = (s32)D_00485930;
            D_0042E300[2] = (s32)D_00485934;
            D_0042E300[4] = D_00485938;
            D_0042E300[1] = (s32)D_00484420;
            D_0042E300[9] = D_00484498;
            D_0042E300[5] = D_00484040;
            D_0042E300[6] = D_00485010;
            D_0042E300[7] = D_0048433C;
            D_0042E300[50] = D_004865DC;
            D_0042E300[8] = D_00484340;
            D_0042E300[51] = (s32)D_00486630;
            D_0042E300[52] = (s32)D_00486634;
            D_0042E300[53] = (s32)D_00486638;
            D_0042E300[55] = D_00486640;
            D_0042E300[54] = D_00486644;
            D_0042E300[10] = D_00484F58;
            D_0042E300[11] = D_00484F5C;
            D_0042E300[12] = D_00484F60;
            /* loop */
            {
                s32 i;
                s32 *v = D_0042E300 + 0x54/4;
                for (i = 0; i < 4; i++) {
                    /* placeholder */
                }
            }
        }
        if (var21 != 0 || sp0 != 0) {
            if (sp0 != 0) {
                func_0025ADA8(sp0, (s32*)0, 0, (s32*)0, (s32*)0, (s32**)0, (void*)0, (s32*)0);
            }
        }
    }
    return (s32 *)var21;
}
