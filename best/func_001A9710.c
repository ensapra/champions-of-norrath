typedef struct Ent {
    u8 pad0[0xC];
    u32 flags;
    f32 x, y, z;
    f32 rad;
    u8 pad20[0x18];
    s16 ang;
    u8 pad3A[0x2DE];
    s16 f318;
} Ent;

extern f32 D_00480514;
extern s32 D_004844A0;
extern void func_0013EF30(f32 *, f32 *, Ent **, s32, f32 *);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern f32 func_0017B7E0(s32, f32 *, f32 *, s32);
extern void func_00194300(void *);
extern void func_00194390(void *, void *, void *);

void func_001A9710(Ent *o, f32 r) {
    f32 dir[3];
    f32 mn[3];
    f32 mx[3];
    Ent *list[256];
    f32 best;
    s32 bestIdx;
    s32 idx;
    s32 i;

    best = D_00480514;
    bestIdx = -1;
    idx = 0;
    dir[0] = func_0015A070(o->ang);
    dir[1] = func_0015A100(o->ang);
    dir[2] = 0;
    mn[0] = o->x - r;
    mn[1] = o->y - r;
    mn[2] = o->z - 72.0f;
    mx[0] = o->x + r;
    mx[1] = o->y + r;
    mx[2] = o->z + 72.0f;
    func_0013EF30(mn, mx, list, 0x100, mn);
    func_00194300((u8 *)o + 0x4A8);
    if (list[0] != 0) {
        i = 0;
        do {
            Ent *e = list[i++];
            if (e != o && !(e->flags & 0x49) && (e->flags & 0x20) && e->f318 == 0) {
                f32 d[3], n[3], len, inv, dot, dist, score;
                f32 off[3], p[3], dv[3];
                d[0] = e->x - o->x;
                d[1] = e->y - o->y;
                d[2] = 0;
                len = __builtin_sqrtf(d[0] * d[0] + d[1] * d[1]);
                inv = 1.0f / len;
                n[0] = d[0] * inv;
                n[1] = d[1] * inv;
                n[2] = 0;
                dot = n[0] * dir[0] + n[1] * dir[1];
                if (!(dot < 0.5f)) {
                    dist = len - e->rad;
                    if (!(r <= dist)) {
                        off[0] = 0;
                        off[1] = 0;
                        off[2] = 36.0f;
                        p[0] = o->x + off[0];
                        p[1] = o->y;
                        p[2] = o->z + 36.0f;
                        dv[0] = e->x - o->x;
                        dv[1] = e->y - o->y;
                        dv[2] = e->z - o->z;
                        score = dist - dot * 32.0f;
                        if (!(func_0017B7E0(D_004844A0, p, dv, 0) >= 0.0f)) {
                            if (!(best < score)) {
                                best = score;
                                bestIdx = idx;
                            }
                        }
                    }
                }
            }
            idx++;
        } while (list[i] != 0);
    }
    func_00194300((u8 *)o + 0x240);
    if (bestIdx != -1) {
        func_00194390((u8 *)o + 0x240, list[bestIdx], list[bestIdx]);
    }
}
