typedef struct { f32 x, y, z; } V3;
typedef struct { u8 p0[0x48]; void *vt; u8 p4c[0x4c]; u8 b98[4]; s8 b9c; u8 p9d[0x33]; u32 fd0; u8 pd4[0x54]; s32 f128; } X;
extern s32 func_00220278(void *, s32, V3 *, s16);
extern s32 func_00163830(void *, s32, s32);
extern u8 D_0044F150[];

void func_00226140(X *o, s32 a1, V3 *a2, s16 a3) {
    V3 t = *a2;
    func_00220278(o, a1, &t, a3);
    o->vt = D_0044F150;
    o->b9c = 0;
    func_00163830(o->b98, o->f128, 1);
    o->fd0 |= 1;
}
