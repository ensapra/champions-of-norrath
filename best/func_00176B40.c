typedef struct { f32 x, y, z; } V3;
typedef struct { f32 v[8]; } V8;
extern const V8 D_00463660, D_00463680;
extern const f32 D_00480034;
typedef struct { char pad[0x28]; s32 ox; s32 oy; s32 w; s32 pad2; s32 *mask; } Grid;
void func_00181660(V3 *, V3 *, s32, s32, s32, s32, s32, s32, s32, s32, f32);

void func_00176B40(Grid *g, V3 *p) {
    V3 pos = *p;
    V8 a, b;
    V3 pt, d, off, s;
    s32 cx, cy, x, y, j, m;
    cx = (s32)(pos.x * D_00480034 - (f32)g->ox + 0.5f);
    cy = (s32)(pos.y * D_00480034 - (f32)g->oy + 0.5f);
    for (y = cy - 3; y <= cy + 3; y++) {
        for (x = cx - 3; x <= cx + 3; x++) {
            f32 fx = (f32)((x + g->ox) * 24);
            f32 fy = (f32)((y + g->oy) * 24);
            m = g->mask[y * g->w + x];
            a = D_00463660;
            b = D_00463680;
            pt.x = fx; pt.y = fy; pt.z = 180.0f;
            for (j = 0; j < 8; j++) {
                if (!((m >> j) & 1)) continue;
                d.x = a.v[j]; d.y = b.v[j]; d.z = 0.0f;
                off.x = d.x * 6.0f; off.y = d.y * 6.0f; off.z = 0.0f;
                s.x = pt.x + off.x; s.y = pt.y + off.y; s.z = pt.z + off.z;
                func_00181660(&pt, &s, 255, 255, 255, 255, 255, 255, 255, 255, 0.0f);
            }
        }
    }
}
