typedef struct { f32 f[9]; } S36;
typedef struct { char pad[0x118]; f32 f118; } Ent;
typedef struct {
    char p0[0x3C0]; s32 list[4]; s32 n;
    char p1[0x45C - 0x3D4]; S36 v;
    char p2[0x828 - 0x480]; Ent *ents[1];
} Obj;
f32 D_00482184;
f32 D_00482188;
void func_00156610(S36 *, s32, s16);
s16 func_0015A198(f32, f32);
void func_002712B8(Obj *, s32, s32, s32);

void func_00271168(Obj *o, s32 key, s32 junk, s16 *out) {
    s32 i = 0;
    s32 off = 0;
    s32 o2;
    s32 v7 = (s32)out;
    s32 n = o->n;
    Ent *e;
    if (n > 0) {
        s32 *p;
        v7 = n;
        n = 0;
        if (o->list[0] != key) {
            p = o->list;
            o2 = 0;
        loop:
            i++;
            o2 += 4;
            p++;
            off = o2;
            if (i < v7) {
                if (*p == key) goto done;
                goto loop;
            }
            off = i * 4;
        }
    }
done:
    func_002712B8(o, i, junk, v7);
    e = *(Ent **)(off + (s32)o + 0x828);
    if (e != 0) {
        S36 t = o->v;
        func_00156610(&t, 2, (s16)(s32)(e->f118 * D_00482184 * D_00482188));
        *out = func_0015A198(-t.f[4], -t.f[3]);
    } else {
        *out = func_0015A198(-o->v.f[4], -o->v.f[3]);
    }
}
