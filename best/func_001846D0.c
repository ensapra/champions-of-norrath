typedef struct { f32 x, y, z, vx, vy, vz; s32 life; } Part;
extern u32 D_00483E58;
extern s32 D_00486A00;
extern const f32 D_004800DC;
void func_001846D0(Part *a, s32 n, f32 f) {
    Part *p = &a[D_00486A00++];
    f32 nx = p->x + p->vx;
    f32 ny = p->y + p->vy;
    f32 nz = p->z + p->vz;
    f32 h;
    p->x = nx;
    p->y = ny;
    p->z = nz;
    if (p->life-- <= 0) {
        u32 s1, s2, s3;
        f32 rx, ry, rz;
        s1 = D_00483E58 * 0x19660D + 0x3C6EF35F;
        D_00483E58 = s1;
        s2 = s1 * 0x19660D + 0x3C6EF35F;
        s3 = s2 * 0x19660D + 0x3C6EF35F;
        rx = (f32)(s32)(s1 >> 16) * (1.0f / 65536.0f);
        ry = (f32)(s32)(s2 >> 16) * (1.0f / 65536.0f);
        rz = (f32)(s32)(s3 >> 16) * (1.0f / 65536.0f);
        p->vx = ((rx * 2.0f - 1.0f) * f - nx) * D_004800DC;
        D_00483E58 = s2;
        p->vy = ((ry * 2.0f - 1.0f) * f - ny) * D_004800DC;
        D_00483E58 = s3;
        p->vz = ((rz * 2.0f - 1.0f) * f - nz) * D_004800DC;
        p->life = (s3 >> 21) & 7;
    }
    if (n != 0) {
        h = f * 0.5f;
        func_001846D0(a, n - 1, h);
        func_001846D0(a, n - 1, h);
    }
}
