typedef struct { f32 x, y, z; } V3;
extern u8 *D_00436FA8[];
s32 D_00485E40;
s32 func_00157430(void *, void *, void *, void *, void *, void *);
void func_002726A8(void *, void *, void *, void *, void *);
s32 func_002738A8(u8 *arg0) {
    s32 i, j, k, l, m, n;
    u8 *o1, *o2;
    u8 *p1, *p2;
    V3 *v1, *v2;
    u8 buf[0x40];
    if (*(s32 *)(arg0 + 0x86C) == D_00485E40 - 1) {
        for (i = 0; i < D_00485E40; i++) {
            for (j = 0; j < D_00485E40; j++) {
                if (j != i) {
                    f32 dx, dy, dz;
                    o1 = D_00436FA8[j];
                    o2 = D_00436FA8[i];
                    v1 = (V3 *)(o1 + 0x10);
                    v2 = (V3 *)(o2 + 0x10);
                    dx = v2->x - v1->x;
                    dy = v2->y - v1->y;
                    dz = v2->z - v1->z;
                    if (dx * dx + dy * dy + dz * dz < *(f32 *)(o2 + 0x344) + *(f32 *)(o1 + 0x344)) {
                        for (n = 0; n < 2; n++) {
                            for (k = 0; k < 4; k++) {
                                for (l = 0; l < 4; l++) {
                                    s32 nx = (l + 1) == 4 ? 0 : l + 1;
                                    u8 *c = o2 + 0x1C4 + k * 12;
                                    if (func_00157430(o1 + nx * 12 + 0x1C4, o1 + l * 12 + 0x1C4, o1 + l * 12 + 0x224, c, v2, buf)) {
                                        func_002726A8(arg0, o2, o1, c, o1 + l * 12 + 0x224);
                                    }
                                }
                            }
                            {
                                u8 *t = o2; o2 = o1; o1 = t;
                                v2 = (V3 *)(o2 + 0x10);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
