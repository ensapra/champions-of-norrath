typedef struct __attribute__((packed, aligned(4))) { u32 w[7]; } Copy28;
typedef struct {
    char pad0[0xBC]; s32 f_bc; char pad1[2]; s16 s_c2; s16 s_c4; s16 s_c6; char pad2[0xA]; s16 s_d2; s16 s_d4;
    char pad3[0x2E]; s32 f_104; s32 f_108;
} Dst;
extern Copy28 D_00362798;
extern char func_001E23F8[];
s32 func_00183910(Copy28 *src, s32 a1, s16 a2, s16 a3, s16 a4) {
    Dst *d = (Dst *)(func_001E23F8 + 0x48);
    D_00362798 = *src;
    func_001A2660(d, 0, 0x12C);
    d->s_c2 = a2;
    d->s_c4 = a3;
    d->s_c6 = a4;
    d->f_bc = D_00362798.w[0];
    d->f_104 = D_00362798.w[5];
    d->f_108 = D_00362798.w[6];
    d->s_d2 = 1;
    d->s_d4 = 0;
    return func_00185630(&d->s_c2, a1, 1);
}
