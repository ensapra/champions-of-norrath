typedef struct { f32 x, y, z; } V3;
typedef struct { s16 adj; s16 pad; void (*fn)(void *, void *, s32, s32, f32); } Ent;
void func_0013EF30(V3 *, V3 *, void *, s32, s32);
extern f32 D_00480684;

typedef struct {
    char pad0[0xC]; s32 flags; f32 px, py, pz; f32 rad; char pad20[0x28]; char *vt; char pad4c[0x60]; s8 bAC;
} O;

void func_001D0698(O *self, V3 pos, s32 range, s32 mask, s32 minv, s32 skip, f32 r0, f32 r1) {
    O *list[0x80];
    V3 lo, hi;
    f32 scale;
    f32 fr = (f32)range;
    s32 i;
    s32 bit;
    lo.x = pos.x - r1;
    lo.y = pos.y - r1;
    lo.z = pos.z - r1;
    hi.x = pos.x + r1;
    hi.y = pos.y + r1;
    hi.z = pos.z + r1;
    func_0013EF30(&lo, &hi, list, 0x80, minv);
    scale = 100.0f;
    if (r1 - r0 > 1.0f)
        scale = fr / (r1 - r0);
    if (list[0]) {
        bit = mask & 0x8000000;
        for (i = 0; list[i]; i++) {
            O *o = list[i];
            s32 fl = o->flags;
            if (fl & 0x20) {
                if (bit && o->bAC != 0x10) continue;
            } else if (bit) {
                continue;
            }
            if (o != self && !(fl & skip)) {
                f32 dx = o->px - pos.x;
                f32 dy = o->py - pos.y;
                f32 ax = dx < 0 ? -dx : dx;
                f32 ay = dy < 0 ? -dy : dy;
                f32 m = ax < ay ? ax : ay;
                f32 d = ax + ay - m * D_00480684 - o->rad;
                if (!(r1 <= d)) {
                    f32 v = (r1 - d) * scale;
                    s32 iv;
                    Ent *e;
                    if (v < (f32)minv) v = (f32)minv;
                    if (v > fr) v = fr;
                    iv = (s32)v;
                    e = (Ent *)(o->vt + 0x10);
                    e->fn((char *)o + e->adj, self, mask, iv, (f32)iv);
                }
            }
        }
    }
}
