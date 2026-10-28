extern s32 func_001129F0(void *);
extern s32 func_00153FA8(void *);
extern void func_00160128(void *, s32, f32, s32);
extern const f32 D_004813E4;
typedef struct { u8 p0[0x24]; void *s24; u8 p1[0x23C-0x28]; s16 st; u8 p2[0x328-0x23E]; s32 r328; } Obj;
void func_0020AC50(u8 *o, s32 a) {
    s32 st = a;
    if (func_001129F0(&st) == 0) {
        if (st != 3) *(f32 *)(o + 0xB0) = 140.0f;
        switch (st) {
        case 0:
            *(s32 *)(o + 0x100) = *(s32 *)(o + 0x328) + func_00153FA8(o) % 60 + 120;
            func_00160128(o + 0x120, *(s32 *)(*(u8 **)(o + 0x24) + 0x74), D_004813E4, 3);
            break;
        default:
            break;
        }
        *(s16 *)(o + 0x23C) = st;
    }
}
