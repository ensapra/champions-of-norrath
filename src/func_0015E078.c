typedef struct { u8 c, a; } Cell_0015E078;
extern Cell_0015E078 D_003347C0[];
extern s32 D_00483EC0;
extern s32 D_00483EC4;
extern s32 D_004868BC;
void func_0015E078(void) {
    s32 i, j;
    for (i = 0; i < D_00483EC4; i++) {
        for (j = 0; j < D_00483EC0; j++) {
            Cell_0015E078 *p = &D_003347C0[i * 216 + j];
            p->a |= 0xF0;
        }
    }
    D_004868BC = 1;
}
