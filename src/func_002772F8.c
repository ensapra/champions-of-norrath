typedef struct { f32 x, y, z; } V3_2772;
typedef struct { V3_2772 a, b, c, d; } M_2772;
typedef struct {
    char pad0[0x10];
    V3_2772 pos;
    char pad1C[0x4C - 0x1C];
    s32 i4C;
    s32 i50;
    char pad54[0x160 - 0x54];
    u64 u160;
    char pad168[8];
    f32 f170;
    char pad174[0x180 - 0x174];
    s32 i180;
    char pad184[8];
    char *p18C;
    V3_2772 dir;
    V3_2772 v19C;
    V3_2772 v1A8;
} O_2772;
extern f32 D_00482230;
extern f32 D_00482234;
void func_00156CB0(M_2772 *, s32, s16);
void func_0016AE78(s32, s32, s32, V3_2772 *, M_2772 *, s32, u64, s32, s32);
void func_0016CD20(void);

void func_002772F8(O_2772 *o)
{
    M_2772 m;
    V3_2772 p;
    if (((V3_2772 *)(o->p18C + 0x4D4))[o->i180].x > 0.0f) {
        m.a.x = o->dir.x;
        m.a.y = o->dir.y;
        m.a.z = o->dir.z;
    } else {
        m.a.x = -o->dir.x;
        m.a.y = -o->dir.y;
        m.a.z = -o->dir.z;
    }
    m.b.x = o->v19C.x;
    m.b.y = o->v19C.y;
    m.b.z = o->v19C.z;
    m.c.x = o->v1A8.x;
    m.c.y = o->v1A8.y;
    m.c.z = o->v1A8.z;
    m.d.x = o->pos.x;
    m.d.y = o->pos.y;
    m.d.z = o->pos.z;
    func_00156CB0(&m, 0, (s16)(s32)(o->f170 * D_00482230 * D_00482234));
    p = o->pos;
    func_0016AE78(o->i4C, o->i50, 1, &p, &m, 0, o->u160, 0, 0);
    func_0016CD20();
}
