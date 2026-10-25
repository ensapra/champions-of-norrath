typedef struct { f32 x, y, z; } Vec3;
typedef struct { f32 x, y, z, w; } Vec4;

extern void func_00159EC0(Vec4 *, void *, Vec4 *);
extern void func_00159F90(void *);
extern void func_0015A2B0(void *, void *);

void func_00277FD8(void *arg0, Vec3 arg1)
{
    Vec4 q;
    Vec4 out;
    void *v;

    v = (u8 *)arg0 + 0x43C;
    q.x = arg1.x * 0.5f;
    q.y = arg1.y * 0.5f;
    q.z = arg1.z * 0.5f;
    q.w = 0.0f;
    func_00159EC0(&out, v, &q);
    *(f32 *)v += out.x;
    *(f32 *)((u8 *)arg0 + 0x440) += out.y;
    *(f32 *)((u8 *)arg0 + 0x444) += out.z;
    *(f32 *)((u8 *)arg0 + 0x448) += out.w;
    func_00159F90(v);
    func_0015A2B0((u8 *)arg0 + 0x45C, v);
}
