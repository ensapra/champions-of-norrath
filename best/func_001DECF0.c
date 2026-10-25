typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad0[0x10]; V3 pos; u8 pad1[0x30]; u16 cnt; } Obj;
extern char D_0046D010[], D_0046D020[], D_0046D030[];
extern f32 D_00480910;
extern s32 D_004844A4;
void func_0015A248(void *, V3 *, V3 *);
void func_00156CB0(void *, s32, s32);
void mat3x3_scale_columns(void *, f32, f32, f32);
s32 func_00165DC0(void *, void *);
void func_0016AE78(s32, s32, s32, V3 *, void *, s32, s32, s32, s32);

void func_001DECF0(Obj *a) {
    u8 m[0x40];
    V3 p, q;
    s32 h1, h2;
    s32 n = a->cnt;
    a->cnt = n - 1;
    p = a->pos;
    func_0015A248(m, &p, &p);
    func_00156CB0(m, 2, (D_004844A4 << 23) >> 16);
    mat3x3_scale_columns(m, D_00480910, D_00480910, 1.0f);
    h1 = func_00165DC0(D_0046D010, D_0046D020);
    h2 = func_00165DC0(D_0046D010, D_0046D030);
    q = a->pos;
    func_0016AE78(h1, h2, 5, &q, m, 0, -1, 0, 0);
}
