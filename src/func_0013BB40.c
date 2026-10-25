typedef struct { s32 a, b, c; } Sub;
typedef struct { u8 pad[0xE0]; Sub sub; u8 pad2[0x5DB0 - 0xE0 - 12]; } E;
extern E D_00408600[];
extern s32 D_00484538;

s32 func_0013BB40(s32 *unused, s32 *arg1) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        E *e = &D_00408600[i];
        Sub *p = &e->sub;
        p->c += arg1[1] / D_00484538;
    }
    return 0;
}
