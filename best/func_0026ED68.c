typedef struct { char p0[0x38]; s32 f38; char p1[4]; s32 f40; char p2[0x20]; s32 f64; s16 f68; char p3[0x20]; s16 f8A; char p4[0xD4]; s8 f160; s8 f161; } P;
typedef struct { char p0[0x5570]; u16 *q; char pad[0x5DB0 - 0x5574]; } BG;
typedef struct { f32 x, y, z; } V3;
typedef struct { char p0[0xC]; u32 flags; V3 pos; char pad[0x58 - 0x1C]; } EN;
extern s32 D_004844C0;
extern f32 D_00482148;
extern EN D_0034BEB8[];
extern BG D_00408600[];
s32 func_0015A5C0(s32, s32, s32);
void func_0026ED68(P *p) {
    s32 i;
    V3 *v;
    f32 y, z;
    s32 n;
    s16 ang;
    u16 *q;
    if (D_004844C0 & 0x02000000) return;
    if (p->f160 != 0) return;
    if (p->f64 != 0) return;
    if (p->f38 != 0) return;
    i = p->f40;
    if ((D_0034BEB8[i].flags & 0x200) == 0) return;
    v = &D_0034BEB8[i].pos;
    z = v->z;
    y = v->y;
    if (y * y + z * z < D_00482148) {
        q = D_00408600[i].q;
        if (q == 0) {
            n = p->f161;
            if (n < 0) {
                ang = -0x2000;
            } else {
                q = D_00408600[n].q;
                if (q != 0) ang = 0x4000 - q[0x38 / 2];
                else ang = -0x2000;
            }
        } else {
            ang = 0x4000 - q[0x38 / 2];
        }
        p->f8A = ang;
        p->f38 = func_0015A5C0(p->f68, p->f8A, 0);
    }
}
