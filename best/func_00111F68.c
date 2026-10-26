typedef struct { f32 x, y, z; } V3;
extern float sqrtf(float);
extern s32 func_0013EF30(V3 *, V3 *, void **, s32);
extern s32 func_00140F60(void *, void *, s32);
extern f32 func_001410A0(void *, void *, s32);
extern s32 func_00143A80(void *, void *, s32);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern s16 *func_001671F8(void *);
extern void func_00190E20(void *, void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void ovl_ntgui2_func_00191830(void *, void *);
extern void func_001918D8(void *, void *);
extern void func_00191938(void *, void *);
extern s32 func_001D1158();
extern s32 func_002FD2E0(s32, s32);
extern void func_002FF3C8() __attribute__((noreturn));
extern s32 func_00316040();
extern char D_00408600[];
extern char D_0040DB70[];
extern char D_00460860[], D_00460870[], D_00460880[], D_00483810[], D_00483818[], D_00483820[];
typedef struct VT { char pad[4]; s32 (*fn)(void); } VT;
typedef struct Ent { char p0[0xC]; u32 flags; V3 pos; char p1[0x20]; s16 ang; char p2[0xE]; VT *vt; char p3[0x54]; u64 f; char p4[0x2D4]; void *name; } Ent;
s32 func_00111F68(Ent *e, s16 *out, s32 idx) {
    V3 d, a, lo, hi;
    void *list[64];
    char buf[0x100];
    f32 thr, s, c, k;
    s32 found, i;
    Ent *t, *o;
    if (e->name == 0) return 0;
    if (*(s32 *)(D_0040DB70 + idx * 0x5DB0) == 0) return 0;
    if (e->f & 0xC00000) return 0;
    if (e->flags & 8) {
        s32 v;
        if (e) v = e->vt->fn();
        else func_002FF3C8();
        if (func_002FD2E0(v, func_00316040())) return 0;
    }
    o = *(Ent **)(D_00408600 + idx * 0x5DB0 + 0x5570);
    d.x = o->pos.x - e->pos.x;
    d.y = o->pos.y - e->pos.y;
    d.z = o->pos.z - e->pos.z;
    k = 1.0f / sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
    d.x *= k; d.y *= k; d.z *= k;
    thr = 0.5f;
    if (func_00143A80(e, D_00460860, 0)) thr = func_001410A0(e, D_00460860, 0);
    if (func_00140F60(e, D_00483810, 0) && func_001D1158()) {
        func_00190E20(out, func_001671F8(D_00460870), 0, 0, 0, 0, 0, 0, 0, 0);
        return 1;
    }
    s = func_0015A070(e->ang);
    c = func_0015A100(e->ang);
    a.x = s; a.y = c; a.z = 0;
    if (!(d.x * a.x + d.y * a.y > thr)) { *out = 0; return 0; }
    lo.x = e->pos.x - 180.0f; lo.y = e->pos.y - 180.0f; lo.z = e->pos.z;
    hi.x = e->pos.x + 180.0f; hi.y = e->pos.y + 180.0f; hi.z = e->pos.z + 180.0f;
    func_0013EF30(&lo, &hi, list, 0x40);
    found = 0;
    for (i = 0; list[i]; i++) {
        t = list[i];
        if (!(t->flags & 8) && !(t->flags & 0x40) && !(t->flags & 0x01000000) && (t->flags & 0x20) && *(s16 *)((char *)t + 0x318) == 0 && !(t->f & 0x04000000)) { found = 1; break; }
    }
    if (found) {
        ovl_ntgui2_func_00191830(out, func_001671F8(D_00460880));
        return 0;
    }
    func_00190E20(buf, func_001671F8(D_00483818), 0, 0, 0, 0, 0, 0, 0, 0);
    ovl_ntgui2_func_00191830(out, buf);
    func_00191938(out, D_00483820);
    func_001918D8(out, func_001671F8(e->name));
    return 1;
}
