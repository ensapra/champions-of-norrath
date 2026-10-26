typedef struct { f32 x, y, z; } V3;
typedef struct { s32 x0, y0, w, h; s16 lo, hi; u16 t[1]; } Blk;
typedef struct { s32 pad0[3]; Blk *b; u16 flags; u16 pad; s32 px, py, base; s16 sx, sy; } Ent;
typedef struct { f32 x, y, a, b; } V2;
extern f32 D_00480020;
extern s32 D_00484188;
void func_00175D88(void *a0, Ent **list, s32 n, f32 a, f32 b, f32 c, f32 d);
f32 func_002F11B8(f32);
f32 func_002F1390(f32);

f32 func_00175FE0(void *a0, f32 r, V3 p) {
    Ent *list[64];
    V2 d, rot;
    Ent *e;
    Blk *b;
    s32 best = -1000000;
    s32 n, i, cx, cy, x, y, h;
    f32 sx, sy;

    D_00484188++;
    func_00175D88(a0, list, 64, p.x - r, p.y - r, p.x + r, p.y + r);
    r *= 0.25f;
    n = (s32)func_002F11B8(r);
    r = r * r;
    for (i = 0; list[i] != 0; i++) {
        e = list[i];
        b = e->b;
        if (best < b->hi + e->base && !(p.z + 12.0f < (f32)(b->lo + e->base))) {
            d.x = p.x - (f32)e->px;
            d.y = p.y - (f32)e->py;
            sx = (f32)e->sx * D_00480020;
            sy = (f32)e->sy * D_00480020;
            if (e->flags & 1) {
                rot.y = d.x * sy - d.y * sx;
                rot.x = d.x * sx + d.y * sy;
            } else {
                rot.x = d.x * sx + d.y * sy;
                rot.y = -d.x * sy + d.y * sx;
            }
            rot.x *= 0.25f;
            rot.y *= 0.25f;
            cx = (s32)func_002F1390(rot.x);
            cy = (s32)func_002F1390(rot.y);
            for (y = cy - n; y <= cy + n + 1; y++) {
                s32 row = y - b->y0;
                if (row < 0 || row >= b->h) continue;
                for (x = cx - n; x <= cx + n + 1; x++) {
                    s32 col = x - b->x0;
                    if (col < 0 || col >= b->w) continue;
                    h = ((s16)b->t[row * b->w + col] >> 4) + e->base;
                    if (best < h && !(p.z + 12.0f < (f32)h)) {
                        f32 dx = (f32)x - rot.x;
                        f32 dy = (f32)y - rot.y;
                        if (dx * dx + dy * dy < r) {
                            best = h;
                            if (!(best < b->hi + e->base)) goto next;
                        }
                    }
                }
            }
        }
    next:;
    }
    return (f32)best;
}
