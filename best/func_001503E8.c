extern f32 D_0047FDB8, D_0047FDBC, D_0047FDC0;
extern float sqrtf(float);
typedef struct VT { void *f0; void *(*f1)(void *); } VT;
typedef struct A { char p0[16]; f32 x10, x14; char p18[4]; f32 x1c; char p20[0x5c]; f32 x7c, x80; char p84[0x78]; s32 id; } A;
typedef struct B { char p0[12]; s32 flags; char p10[0x49c]; f32 x4ac, x4b0; char q[0x3c]; struct { void *f0; void *(*f1)(void *); } **vptr; } B;
typedef struct I { char p0[0x48]; struct { void *f0; void *(*f1)(void *); } *vptr; char p4c[0xb0]; s32 id; } I;
void func_0013EF30(f32 *, f32 *, void **, s32);
s32 func_002FD2E0(void *, s32);
void *func_002FF3C8(void);
s32 func_00312BD8(void);
void func_001503E8(A *a, I *b) {
    f32 nrm[4], lo[4], hi[4];
    void *items[16];
    f32 x, y, n, nx, ny;
    void **pp;
    I *it;
    void *h;
    if (((s32 *)b)[3] & 0x40) {
        x = *(f32 *)((char *)b + 0x4ac);
        y = *(f32 *)((char *)b + 0x4b0);
        n = 1.0f / sqrtf(x * x + y * y);
        ny = y * n;
        nx = x * n;
        nrm[0] = nx;
        nrm[1] = ny;
        nrm[2] = 0;
        if (a->x7c * nx + a->x80 * ny < 1.0f) {
            a->x7c = a->x7c + x * D_0047FDB8;
            a->x80 = a->x80 + *(f32 *)((char *)b + 0x4b0) * D_0047FDB8;
        }
        lo[0] = a->x10 - a->x1c;
        lo[1] = a->x14 - a->x1c;
        lo[2] = D_0047FDBC;
        hi[0] = a->x10 + a->x1c;
        hi[1] = a->x14 + a->x1c;
        hi[2] = D_0047FDC0;
        func_0013EF30(lo, hi, items, 16);
        if (items[0]) {
            pp = items;
            do {
                it = (I *)*pp;
                pp++;
                if (it) h = it->vptr->f1(it);
                else h = func_002FF3C8();
                if (func_002FD2E0(h, func_00312BD8())) it->id = 0xBE;
            } while (*pp);
        }
    }
    if (b) h = b->vptr->f1(b);
    else h = func_002FF3C8();
    if (func_002FD2E0(h, func_00312BD8())) {
        s32 bi = b->id, ai = a->id;
        a->id = bi < ai ? ai : bi;
    }
}
