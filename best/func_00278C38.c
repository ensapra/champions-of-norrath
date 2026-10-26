typedef struct { f32 x, y, z; } V3;
typedef struct { s32 id; s32 cnt; char pad[8]; f32 f10; char *arr; } Obj;
typedef struct {
    V3 *tgt; V3 dir; u8 f10; s8 f11; char pad[2]; s32 key; char pad2[4];
    s32 idx; s32 seg; s32 cnt; s16 ang; char pad3[2]; f32 prog; char *cur; char *nxt;
} P;
extern s16 func_0015A198(f32, f32);
extern f32 func_0015A1D0(void *, void *, void *);
extern void func_00278B48(P *);
extern void func_00279C10(P *, s32, V3 *);
extern s32 func_00304168(s32, s32);
s32 D_00485EA8;
extern Obj *D_008D57A8[];

s32 func_00278C38(P *p) {
    Obj *o;
    s32 i, key, seg, k;
    f32 f, inv;
    V3 v;
    char *a;
    p->f11 = 0;
    if (p->idx == -1) {
        key = p->key;
        k = -1;
        for (i = 0; i < D_00485EA8; i++) {
            if (func_00304168(D_008D57A8[i]->id, key) == 0) {
                k = i;
                break;
            }
        }
        p->idx = k;
        if (k == -1)
            return 0;
        func_00278B48(p);
    }
    seg = p->seg;
    o = D_008D57A8[p->idx];
    a = o->arr + seg * 0x40;
    f = func_0015A1D0(a, a + 0xC, p->tgt);
    if (*(f32 *)(o->arr + p->seg * 0x40 + 0x30) <= f) {
        p->cnt++;
        p->seg = (p->seg + 1) % o->cnt;
    } else if (f < 0.0f) {
        p->seg--;
        if (p->seg < 0)
            p->seg = o->cnt - 1;
        p->cnt--;
    }
    p->cur = o->arr + p->seg * 0x40;
    if (p->cnt < 0) {
        p->prog = 0.0f;
    } else {
        a = o->arr + p->seg * 0x40;
        p->prog = (f32)(p->cnt / o->cnt) +
                  (*(f32 *)(o->arr + p->seg * 0x40 + 0x34) + func_0015A1D0(a, a + 0xC, p->tgt)) / o->f10;
    }
    p->f10 = (p->seg != seg);
    if (*(u16 *)&p->f10 != 0) {
        func_00279C10(p, 1, &v);
        p->dir.x = v.x - p->tgt->x;
        p->dir.y = v.y - p->tgt->y;
        inv = 1.0f / __builtin_sqrtf(p->dir.x * p->dir.x + p->dir.y * p->dir.y + (v.z - p->tgt->z) * (v.z - p->tgt->z));
        p->dir.z = (v.z - p->tgt->z) * inv;
        p->dir.x *= inv;
        p->dir.y *= inv;
        p->ang = func_0015A198(p->dir.y, p->dir.x);
        p->f10 = 1;
        p->nxt = o->arr + ((p->seg + 1) % o->cnt) * 0x40;
    }
    return 1;
}
