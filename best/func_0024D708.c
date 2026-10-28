typedef struct { s32 x, y, z; } V3;
typedef struct { char p0[4]; u16 flags; s16 id; char p1[8]; f32 m; } Rec;
extern char D_007D8110[];
extern Rec D_007D8F20[];
void func_0024CD38(V3 *, f32 *, f32 *, f32, f32);
void func_0024CC10(s32, f32, f32);
void func_0024D708(s32 id, f32 scale) {
    f32 out[2];
    V3 loc;
    s32 i;
    f32 m;
    s32 off, off2;
    V3 *src;
    f32 *pa, *pb;
    if (id == -1) return;
    if (!(id & 0x8000)) return;
    id &= 0xFF;
    off = id * 76;
    off2 = off + 0x40;
    *(f32 *)(D_007D8110 + off2) = scale;
    src = (V3 *)(off + (D_007D8110 + 0x2c));
    pb = (f32 *)(off2 + (D_007D8110 + 8));
    pa = (f32 *)(off2 + (D_007D8110 + 4));
    for (i = 0; i < 43; i++) {
        if ((D_007D8F20[i].flags & 4) && D_007D8F20[i].id == id) {
            m = scale * D_007D8F20[i].m;
            loc = *src;
            func_0024CD38(&loc, &out[0], &out[1], *pa, *pb);
            out[0] *= m;
            out[1] *= m;
            if (out[0] < 0) out[0] = 0;
            if (out[1] < 0) out[1] = 0;
            func_0024CC10(i, out[0], out[1]);
        }
    }
}
