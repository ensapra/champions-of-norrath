typedef struct { f32 x, y, z; } Vec3;
typedef struct { f32 m[12]; } Mtx34;
typedef struct { f32 v[4]; } Vec4;

void func_0016CA18(s32, s32, s32, Mtx34 *);
void func_00157668(Mtx34 *, Vec3 *, s16);
void func_001564B8(Mtx34 *, Mtx34 *, Mtx34 *);
s32 func_0016CD50(void *);
void func_0016CD68(void *, Mtx34 *, s32, Vec4 *, Vec4 *);
void func_001D5630(s32, Vec4 *);

typedef struct {
    char pad[0x13];
    s8 unk13;
} Obj6088;

void func_001E6088(s32 arg0, Obj6088 *arg1, s32 arg2, Vec3 *arg3, s16 arg4, s32 arg5) {
    Vec3 pos;
    Mtx34 m;
    Mtx34 r;
    Vec4 a;
    Vec4 b;
    s32 n;
    s32 i;

    pos = *arg3;
    func_0016CA18(arg0, arg2, arg1->unk13 + arg5, &m);
    func_00157668(&r, &pos, arg4 + 0x4000);
    func_001564B8(&m, &m, &r);
    n = func_0016CD50(arg1);
    for (i = 0; i < n; i++) {
        func_0016CD68(arg1, &m, i, &a, &b);
        func_001D5630(0xE, &a);
    }
}
