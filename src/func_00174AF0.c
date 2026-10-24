typedef struct { s16 a0, a2, a4, a6, a8, aA, aC, aE; } S10_174;
typedef struct { s16 w, h; s32 x; } S20_174;
typedef struct { s32 f0, f4, f8; u64 *ptr; S10_174 s; S20_174 r; } E174;
extern E174 D_010EA1E0[];
typedef struct { u64 d[5]; } P174;
extern P174 D_010E8970[];
void func_00174718(s32, s32, s32, s32, s32, s32, s32, E174 *);

void func_00174B38(s32 i) {
    S20_174 *r = &D_010EA1E0[i].r;
    S10_174 *s = &D_010EA1E0[i].s;
    u64 *pk = D_010E8970[i].d;
    s16 w = r->w;
    s16 h = r->h;
    pk[2] = s->a4 | ((s64)(w / 64) << 9) | ((s64)s->aC << 15);
    D_010EA1E0[i].ptr = pk;
    pk[0] = 0xFF23;
    func_00174718(i, 0, 0, w, h, w, h, &D_010EA1E0[i]);
}

void func_00174AF0(s32 i, s32 a, s32 b) {
    u64 *p = D_010EA1E0[i].ptr;
    *p = (*p & ~0xFF20LL) | (s32)(((a & 0xFF) << 8) | ((b & 1) << 5));
}
