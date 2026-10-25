typedef struct V { f32 x, y, z; } V;
typedef struct GObj {
    struct GObj *next;
    s32 pad4;
    s8 type;
    char pad9[0x13];
    f32 r;
    char pad20[0x10];
    f32 x, y, z;
} GObj;
extern GObj *D_004F40F0[90][90];
extern s32 D_00483AAC;

void func_0013C528(V *pos, GObj **out, s32 max) {
    V p = *pos;
    V *q = &p;
    s32 n = 0;
    s32 i0 = ((s32)q->y + 0x2BD4) >> 8;
    s32 i1 = ((s32)q->y + 0x2E2C) >> 8;
    s32 j0 = ((s32)q->x + 0x2BD4) >> 8;
    s32 j1 = ((s32)q->x + 0x2E2C) >> 8;
    s32 i, j;
    GObj *o;
    if (i1 > 89) i1 = 89;
    if (i0 < 0) i0 = 0;
    if (j1 > 89) j1 = 89;
    if (j0 < 0) j0 = 0;
    for (i = i0; i <= i1; i++) {
        for (j = j0; j <= j1; j++) {
            for (o = D_004F40F0[i][j]; o; o = o->next) {
                if (o->x + o->r < q->x) continue;
                if (q->x < o->x - o->r) continue;
                if (o->y + o->r < q->y) continue;
                if (q->y < o->y - o->r) continue;
                if (o->z + o->r < q->z) continue;
                if (q->z < o->z - o->r) continue;
                if (n >= max - 1) continue;
                if (o->type != D_00483AAC) continue;
                out[n++] = o;
            }
        }
    }
    out[n] = 0;
}
