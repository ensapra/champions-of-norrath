typedef struct { s16 a0, a2, a4, a6, a8, aA, aC, aE; } S10_174;
typedef struct { s16 w, h; s32 x; } S20_174;
typedef struct { s32 f0, f4, f8; u64 *ptr; S10_174 s; S20_174 r; } E174;
extern u8 D_010EA1E0[];
extern u8 D_010E8970[];
void func_00174718(s32, s32, s32, s32, s32, s32, s32, E174 *);

void func_00174B38(s32 i) {
    s32 off = i * 0x28;
    S20_174 *r = (S20_174 *)(D_010EA1E0 + (off + 0x20));
    S10_174 *s = (S10_174 *)(D_010EA1E0 + (off + 0x10));
    E174 *e = (E174 *)(D_010EA1E0 + off);
    u64 *pk = (u64 *)(D_010E8970 + off);
    s16 w = r->w;
    s16 h = r->h;
    pk[2] = s->a4 | ((s64)(w / 64) << 9) | ((s64)s->aC << 15);
    e->ptr = pk;
    pk[0] = 0xFF23;
    func_00174718(i, 0, 0, w, h, w, h, e);
}
