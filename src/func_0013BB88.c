typedef struct {
    u8 pad0[0xE0];
    s32 arr[3];
    u8 pad1[0x5DB0 - 0xEC];
} Ent408600;

extern Ent408600 D_00408600[];
s32 D_00484538;

s32 func_0013BB88(void *arg0, s32 *arg1) {
    s32 i;
    s32 *p;
    Ent408600 *e;
    for (i = 0; i < D_00484538; i++) {
        e = &D_00408600[i];
        p = e->arr;
        p[2] -= arg1[1] / D_00484538;
        if (p[2] < 0) {
            p[2] = 0;
        }
    }
    return 0;
}
