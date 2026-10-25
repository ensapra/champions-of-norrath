extern void func_00104F30(s32);
extern void func_00106E30(s32, s32);
extern void func_001389A0(s32);
extern void func_0014B6F4(s32);
extern s32 func_001523D0(s32);
extern void func_00152520(s32);
extern s32 D_001BB6C4[];
extern s32 D_001BD8AC[];
extern s32 D_010CD348[];
extern s32 D_010CD34C[];
extern s32 D_010CD358[];

#define FREE(p) { \
    if (func_001523D0(D_001BD8AC[0]) == (p)[0]) func_00152520((p)[0]); \
    func_0014B6F4((p)[0]); func_00104F30((p)[0]); \
    func_00106E30(0, (p)[0]); func_00106E30(1, (p)[0]); \
    if (D_001BB6C4[0] == (p)[0]) D_001BB6C4[0] = 0; \
    func_001389A0((p)[0]); (p)[0] = 0; }

s32 func_0012B650(void *arg0) {
    s32 *p;
    int i;
    switch (*(s32 *)((char *)arg0 + 0x10)) {
    case 1:
        if (D_010CD34C[0]) FREE(D_010CD34C)
        return 0;
    case 2:
        p = D_010CD358;
        for (i = 0; i < 2; i++, p++) {
            if (i > 1) break;
            if (p[0]) FREE(p)
        }
        return 0;
    case 5:
        if (D_010CD348[0]) FREE(D_010CD348)
        return 1;
    default:
        return 0;
    }
}
