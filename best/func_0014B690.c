extern const f32 D_0047FD9C;
typedef struct { u8 pad0[0x54]; u8 f54[0x10]; u8 f64[0x40]; u8 fA4[0x44]; s64 fE8; u8 padF0[0x20]; u8 f110[0x24]; f32 f134, f138, f13C; } A;
s32 func_00143C38(void *);
void func_00157E20(void *, void *);
void func_00159F90(void *);
s32 func_0015A030(s64);
s32 func_0014B690(A *a, u8 *p) {
    f32 v[4];
    f32 x, y, z, w;
    u8 *start = p;
    *(s32 *)p = func_00143C38(a->f54); p += 4;
    *(s32 *)p = func_00143C38(a->f64); p += 4;
    *(s32 *)p = func_00143C38(a->fA4); p += 4;
    if ((1LL << func_0015A030(a->fE8)) == a->fE8) {
        *p++ = func_0015A030(a->fE8);
    } else {
        *(s32 *)p = -1; p += 4;
        *(s64 *)p = a->fE8; p += 8;
        *p++ = 0;
    }
    func_00157E20(v, a->f110);
    func_00159F90(v);
    x = v[0] * 127.0f;
    y = v[1] * 127.0f;
    z = v[2] * 127.0f;
    w = v[3] * D_0047FD9C;
    *p++ = (s32)x;
    *p++ = (s32)y;
    *p++ = (s32)z;
    *(s16 *)p = (s32)w; p += 2;
    *(s16 *)p = (s32)a->f134; p += 2;
    *(s16 *)p = (s32)a->f138; p += 2;
    *(s16 *)p = (s32)a->f13C; p += 2;
    return p - start;
}
