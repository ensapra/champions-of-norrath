typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 flags;
    Vec3 pos;
} S142158;

void func_00194390(void *list, void *node, void *obj);
void func_001944A0(s32);
extern Vec3 D_00333D28[];
extern Vec3 D_0037EE90[];
s8 D_00483AC9;
s32 D_00483AD0;
s8 D_00483AFE;
s32 D_00486878[2];
extern s32 D_004FBFD0[];

static inline f32 dist2(Vec3 *a, Vec3 *b) {
    f32 dx = a->x - b->x;
    f32 dy = a->y - b->y;
    f32 dz = a->z - b->z;
    return dx * dx + dy * dy + dz * dz;
}

s32 func_00142158(S142158 *o, s32 prev, s32 r) {
    s32 hit = 0;
    s32 rad;
    s32 n;
    s32 i;

    rad = 0xABE0;
    if (!(o->flags & 0x80000)) {
        rad = r;
    }
    if (D_00483AC9) {
        if (dist2(&o->pos, D_0037EE90) < (f32)(rad * rad)) {
            hit = 1;
        }
    } else {
        n = D_00483AFE;
        for (i = 0; i < n; i++) {
            if (dist2(&o->pos, &D_00333D28[i]) < (f32)(rad * rad)) {
                hit = 1;
                break;
            }
        }
    }
    if (hit != prev) {
        if (hit) {
            if (o->unk4) {
                func_001944A0(o->unk4);
            }
            func_00194390(D_00486878, &o->unk4, o);
        } else {
            if (o->unk4) {
                func_001944A0(o->unk4);
            }
            rad = ++*(u32 *)&D_00483AD0;
            if (rad >= 60) {
                rad = 0;
            }
            D_00483AD0 = rad;
            func_00194390(&D_004FBFD0[rad], &o->unk4, o);
        }
    }
    return hit;
}
