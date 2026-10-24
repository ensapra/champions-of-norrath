typedef struct { u8 b[20]; } E20;
extern E20 D_00447F90[];

E20 *func_002EB280(s32 x) {
    E20 *p;
    if (x >= 0) {
        s32 max = 1;
        p = &D_00447F90[x];
        if (x <= max) return p;
    }
    return 0;
}
